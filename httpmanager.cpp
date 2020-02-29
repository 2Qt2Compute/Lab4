#include "httpmanager.h"

HTTPManager::HTTPManager(QObject *parent) :
    QObject(parent),
    imageDownloadManager(new QNetworkAccessManager),
    weatherAPIManager(new QNetworkAccessManager)
{
    connect(imageDownloadManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(ImageDownloadedHandler(QNetworkReply*)));

    connect(weatherAPIManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(WeatherDownloadedHandler(QNetworkReply*)));
}

HTTPManager::~HTTPManager()
{
    delete imageDownloadManager;
    delete weatherAPIManager;
}

void HTTPManager::sendImageRequest(QString zip)
{
    QString address = "https://dev.virtualearth.net/REST/V1/Imagery/Map/Road/"
            + zip +
            "/7?mapSize=400,300&mapLayer=TrafficFlow&format=png&key=Ai6HgbFkVFj9Jvds6zLn_RT2bhdUhI2nN8nIcYEZWB3R3C4NbcACfuoMFUmvj99K";
    QNetworkRequest request;
    //QUrl url = QUrl("https://dev.virtualearth.net/REST/V1/Imagery/Map/Road/98119/7?mapSize=800,400&mapLayer=TrafficFlow&format=png&key=Ai6HgbFkVFj9Jvds6zLn_RT2bhdUhI2nN8nIcYEZWB3R3C4NbcACfuoMFUmvj99K");
    request.setUrl(address);
    imageDownloadManager->get(request);
    qDebug() << "Image request sent to URL " << request.url();
}

void HTTPManager::sendWeatherRequest(QString zip)
{
    QString address = "https://api.openweathermap.org/data/2.5/weather?zip="
            + zip +
            ",us&units=imperial&units=imperial&appid=47533bad44140cd8827e1e235748d6d3";
    QNetworkRequest request;
    request.setUrl(address);
    weatherAPIManager->get(request);
    qDebug() << "Weather request sent to URL " << request.url();
}

void HTTPManager::sendForecastRequest(QString zip) {
    QString address = "https://api.openweathermap.org/data/2.5/weather?zip="
                + zip +
                ",us&units=imperial&units=imperial&appid=47533bad44140cd8827e1e235748d6d3";
        QNetworkRequest request;
        request.setUrl(address);
        weatherAPIManager->get(request);
        qDebug() << "Weather request sent to URL " << request.url();
}

void HTTPManager::ImageDownloadedHandler(QNetworkReply *reply)
{
    qDebug() << "Image reply has arrived";
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }

    qDebug() << "Download was successful";
    QPixmap *image = new QPixmap();
    image->loadFromData(reply->readAll());
    reply->deleteLater();

    emit ImageReady(image);
}

void HTTPManager::WeatherDownloadedHandler(QNetworkReply *reply)
{
    qDebug() << "Weather reply has arrived";
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }
    qDebug() << "Download was successful";
    QString answer = reply->readAll();
    reply->deleteLater();

    QJsonDocument jsonResponse = QJsonDocument::fromJson(answer.toUtf8());
    QJsonObject *jsonObj = new QJsonObject(jsonResponse.object());

    emit WeatherJsonReady(jsonObj);
}

void HTTPManager::ForecastDownloadedHandler(QNetworkReply *reply)
{

}


