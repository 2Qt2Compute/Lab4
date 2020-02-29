#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>

#include "httpmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class dashboard; }
QT_END_NAMESPACE

class dashboard : public QMainWindow
{
    Q_OBJECT

public:
    dashboard(QWidget *parent = nullptr);
    ~dashboard();

private slots:
    void setCurrentTime();
    void processImage(QPixmap *);
    void processWeatherJson(QJsonObject *json);

    void on_imageDownloadButton_clicked();

    void on_weatherDownloadButton_clicked();

private:
    Ui::dashboard *ui;
    QTimer *timer;
    HTTPManager *httpManager;
    QPixmap icon;
    int index;
    QString slideshow[3] = {":/will.jpg", ":/Keeks.jpg", ":/reegs.jpg"};

    void worldClockCalculator();


};
#endif // DASHBOARD_H
