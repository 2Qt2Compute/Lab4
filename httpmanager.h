#ifndef HTTPMANAGER_H
#define HTTPMANAGER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QPixmap>
#include <QJsonDocument>
#include <QJsonObject>

class HTTPManager : public QObject
{
    Q_OBJECT
public:
    explicit HTTPManager(QObject *parent = nullptr);
    ~HTTPManager();

    void sendImageRequest(QString zip);
    void sendWeatherRequest(QString zip);
    void sendForecastRequest(QString zip);

signals:
    void ImageReady(QPixmap *image);
    void WeatherJsonReady(QJsonObject *json);
    void ForecastJsonReady(QJsonObject *json);

public slots:
    void ImageDownloadedHandler(QNetworkReply *reply);
    void WeatherDownloadedHandler(QNetworkReply *reply);
    void ForecastDownloadedHandler(QNetworkReply *reply);

private:
    QNetworkAccessManager *imageDownloadManager;
    QNetworkAccessManager *weatherAPIManager;
    QNetworkAccessManager *forecastAPIManager;
    QByteArray downloadedData;

};
#endif // HTTPMANAGER_H
