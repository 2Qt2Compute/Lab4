#include "dashboard.h"
#include "ui_dashboard.h"
#include <QJsonArray>
#include <QPainter>
#include <QDate>
#include <QTimeZone>

dashboard::dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dashboard),
    timer(new QTimer),
    httpManager(new HTTPManager)
{
    ui->setupUi(this);
    ui->centralwidget->showFullScreen();

    QPixmap pixmap;
    pixmap.load(":/resources/5k1.jpg");
    pixmap = pixmap.scaled(ui->backgroundLabel->size());
    ui->backgroundLabel->setPixmap(pixmap);
    pixmap.load(":/resources/RAs.jpg");
    pixmap = pixmap.scaled(ui->pictureLabel->size());
    ui->pictureLabel->setPixmap(pixmap);
    QPixmap refreshIcon;
    refreshIcon.load(":/resources/icon-ios7-refresh-128.png");
    refreshIcon = refreshIcon.scaled(ui->weatherDownloadButton->size());
    QIcon RefreshIcon(refreshIcon);
    ui->weatherDownloadButton->setIcon(RefreshIcon);
    ui->imageDownloadButton->setIcon(RefreshIcon);

    connect(timer, SIGNAL(timeout()),
            this, SLOT(setCurrentTime()));

    setCurrentTime();
    timer->start(1000);

    connect(httpManager, SIGNAL(ImageReady(QPixmap *)),
            this, SLOT(processImage(QPixmap *)));

    connect(httpManager, SIGNAL(WeatherJsonReady(QJsonObject *)),
            this, SLOT(processWeatherJson(QJsonObject *)));

}

dashboard::~dashboard()
{
    delete timer;
    delete httpManager;
    delete ui;
}

void dashboard::setCurrentTime()
{
    QTime time = QTime::currentTime();

    if (time.toString("hh") < "12") {
        ui->greetingsLabel->setText("Good morning, Logan");
    }
    else
        ui->greetingsLabel->setText("Good evening, Logan");

    QString hour = time.toString("hh");
    QString minute = time.toString("mm");
    QString second = time.toString("ss");
    ui->hourLabel->setText(hour);
    ui->minuteLabel->setText(minute);
    ui->secondLabel->setText(second);
    QDate curr = QDate::currentDate();

    QDateTime currTime = QDateTime::currentDateTimeUtc();
    QDateTime russia = currTime.addSecs(10800);
    QDateTime newYork = currTime.addSecs(-18000);
    QDateTime israel = currTime.addSecs(7200);

    ui->russiaHourLabel->setText(russia.toString("hh"));
    ui->newYorkHourLabel->setText(newYork.toString("hh"));
    ui->israelHourLabel->setText(israel.toString("hh"));

    ui->russiaMinuteLabel->setText(russia.toString("mm"));
    ui->newYorkMinuteLabel->setText(newYork.toString("mm"));
    ui->israelMinuteLabel->setText(israel.toString("mm"));

    ui->currentDateLabel->setText(curr.toString("ddd, MMM. d"));

    QString zip = ui->zipCodeEdit->text();
    httpManager->sendImageRequest(zip);
    httpManager->sendWeatherRequest(zip);
}

void dashboard::processImage(QPixmap *image)
{
    ui->imageLabel->setPixmap(*image);
}

void dashboard::processWeatherJson(QJsonObject *json)
{
    qDebug() << "Json ready";
    qDebug() << json->value("weather");

    QString weather = json->value("weather").toArray()[0].toObject()["main"].toString();
    QString weatherDesc = json->value("weather").toArray()[0].toObject()["description"].toString();

    double temp = json->value("main").toObject()["temp"].toDouble();
    double tempMin = json->value("main").toObject()["temp_min"].toDouble();
    double tempMax = json->value("main").toObject()["temp_max"].toDouble();

    qDebug() << weather;
    qDebug() << weatherDesc;
    qDebug() << temp;
    qDebug() << tempMin;
    qDebug() << tempMax;
    qDebug() << "";
    qDebug() << "";
    qDebug() << "";

    //weather icon
    QString clearSkyFilename = ":/resources/01d@2x.png";
    QString fewCloudsFilename = ":/resources/02d@2x.png";
    QString scatteredCloudsFilename = ":/resources/03d@2x.png";
    QString brokenCloudsFilename = ":/resources/04d@2x.png";
    QString showerRainFilename = ":/resources/09d@2x.png";
    QString rainFileName = ":/resources/10d@2x.png";
    QString thunderstormFilename = ":/resources/11d@2x.png";
    QString snowFilename = ":/resources/13d@2x.png";
    QString mistFilename = ":/resources/50d@2x.png";
    if (weather == "Clear" && icon.load(clearSkyFilename)) {
        qDebug() << "Image loaded successfully";
        ui->weatherIconLabel->setPixmap(icon);
    }
    //Weather Temp
    ui->weatherTempLabel->setText(QString::number(temp));
    //Weather description
    ui->weatherDescLabel->setText(weather);

    //Weather hi/lo
    ui->weatherHiLoLabel->setText(QString::number(tempMin) + "° / " + QString::number(tempMax) + "°");


    if (weatherDesc == "few clouds" && icon.load(fewCloudsFilename)) {
        ui->weatherIconLabel->setPixmap(icon);
    }

    if (weatherDesc == "scattered clouds" && icon.load(scatteredCloudsFilename)) {
            ui->weatherIconLabel->setPixmap(icon);
    }

    if ((weatherDesc == "broken clouds" || weatherDesc == "overcast clouds") && icon.load(brokenCloudsFilename)) {
            ui->weatherIconLabel->setPixmap(icon);
    }

    if ((weather == "Clouds" || weatherDesc == "overcast clouds") && icon.load(showerRainFilename)) {
            ui->weatherIconLabel->setPixmap(icon);
    }

    if ((weather == "Rain" || "Drizzle") && icon.load(rainFileName)) {
            ui->weatherIconLabel->setPixmap(icon);
    }

    if (weather == "Thunderstorm" && icon.load(thunderstormFilename)) {
            ui->weatherIconLabel->setPixmap(icon);
    }

    if (weather == "Snow" && icon.load(snowFilename)) {
            ui->weatherIconLabel->setPixmap(icon);
    }

    if ((weather == "Mist" || weather == "Smoke" || weather == "Haze"
         || weather == "Dust" || weather == "Fog" || weather == "Sand" || weather == "Dust"
         || weather == "Ash" || weather == "Squall" || weather == "Tornado")
            && icon.load(mistFilename)) {
        ui->weatherIconLabel->setPixmap(icon);
    }
}

void dashboard::on_imageDownloadButton_clicked()
{
    QString zip = ui->zipCodeEdit->text();
    qDebug() << zip;
    httpManager->sendImageRequest(zip);
}

void dashboard::on_weatherDownloadButton_clicked()
{
    QString zip = ui->zipCodeEdit->text();
    qDebug() << zip;
    httpManager->sendWeatherRequest(zip);
}

void dashboard::worldClockCalculator()
{

}
