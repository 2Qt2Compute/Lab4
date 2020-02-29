/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QWidget *centralwidget;
    QPushButton *imageDownloadButton;
    QLabel *imageLabel;
    QLineEdit *zipCodeEdit;
    QLabel *pictureFrameLabel;
    QLabel *pictureLabel;
    QLabel *weatherIconLabel;
    QLabel *weatherTempLabel;
    QLabel *weatherDescLabel;
    QLabel *weatherHiLoLabel;
    QPushButton *weatherDownloadButton;
    QLabel *hourLabel;
    QLabel *minuteLabel;
    QLabel *secondLabel;
    QLabel *timeColon;
    QLabel *backgroundLabel;
    QLabel *degreeLabel;
    QLabel *currentDateLabel;
    QLabel *russiaHourLabel;
    QLabel *russiaTimeColon;
    QLabel *russiaMinuteLabel;
    QLabel *israelHourLabel;
    QLabel *israelTimeColon;
    QLabel *israelMinuteLabel;
    QLabel *russiaTimeLabel;
    QLabel *israelTimeLabel;
    QLabel *newYorkHourLabel;
    QLabel *newYorkTimeColon;
    QLabel *newYorkMinuteLabel;
    QLabel *newYorkTimeLabel;
    QLabel *greetingsLabel;
    QLabel *zipLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName(QStringLiteral("dashboard"));
        dashboard->resize(2083, 1482);
        centralwidget = new QWidget(dashboard);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral(""));
        imageDownloadButton = new QPushButton(centralwidget);
        imageDownloadButton->setObjectName(QStringLiteral("imageDownloadButton"));
        imageDownloadButton->setGeometry(QRect(1240, 430, 31, 31));
        imageDownloadButton->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(182, 182, 182, 74); border-radius: 25px}\n"
"background-image: url(:/resources/icon-ios7-refresh-128.png);"));
        imageLabel = new QLabel(centralwidget);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setGeometry(QRect(970, 140, 351, 321));
        imageLabel->setStyleSheet(QLatin1String("QLabel{border-radius: 25px; background-color: rgb(255, 255, 255, 0);};\n"
""));
        zipCodeEdit = new QLineEdit(centralwidget);
        zipCodeEdit->setObjectName(QStringLiteral("zipCodeEdit"));
        zipCodeEdit->setGeometry(QRect(1270, 430, 51, 21));
        pictureFrameLabel = new QLabel(centralwidget);
        pictureFrameLabel->setObjectName(QStringLiteral("pictureFrameLabel"));
        pictureFrameLabel->setGeometry(QRect(510, 140, 331, 321));
        pictureFrameLabel->setStyleSheet(QLatin1String("QLabel{border-radius: 25px; background-color: rgb(95, 90, 131);};\n"
""));
        pictureLabel = new QLabel(centralwidget);
        pictureLabel->setObjectName(QStringLiteral("pictureLabel"));
        pictureLabel->setGeometry(QRect(540, 160, 271, 281));
        pictureLabel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255, 0);"));
        weatherIconLabel = new QLabel(centralwidget);
        weatherIconLabel->setObjectName(QStringLiteral("weatherIconLabel"));
        weatherIconLabel->setGeometry(QRect(180, 210, 51, 51));
        weatherIconLabel->setStyleSheet(QLatin1String("\n"
"background-color: rgb(182, 182, 182, 75);"));
        weatherTempLabel = new QLabel(centralwidget);
        weatherTempLabel->setObjectName(QStringLiteral("weatherTempLabel"));
        weatherTempLabel->setGeometry(QRect(140, 60, 221, 171));
        QFont font;
        font.setPointSize(80);
        weatherTempLabel->setFont(font);
        weatherTempLabel->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        weatherDescLabel = new QLabel(centralwidget);
        weatherDescLabel->setObjectName(QStringLiteral("weatherDescLabel"));
        weatherDescLabel->setGeometry(QRect(320, 110, 91, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        weatherDescLabel->setFont(font1);
        weatherDescLabel->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        weatherHiLoLabel = new QLabel(centralwidget);
        weatherHiLoLabel->setObjectName(QStringLiteral("weatherHiLoLabel"));
        weatherHiLoLabel->setGeometry(QRect(270, 210, 131, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Roboto"));
        font2.setPointSize(14);
        font2.setItalic(true);
        weatherHiLoLabel->setFont(font2);
        weatherHiLoLabel->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255, 0);\n"
"color: rgb(255, 255, 255);"));
        weatherDownloadButton = new QPushButton(centralwidget);
        weatherDownloadButton->setObjectName(QStringLiteral("weatherDownloadButton"));
        weatherDownloadButton->setGeometry(QRect(320, 260, 41, 41));
        weatherDownloadButton->setStyleSheet(QLatin1String("QPushButton {background-color: rgb(255, 255, 255, 0); border-radius: 25px}\n"
"background-image: url(:/resources/icon-ios7-refresh-128.png);"));
        hourLabel = new QLabel(centralwidget);
        hourLabel->setObjectName(QStringLiteral("hourLabel"));
        hourLabel->setGeometry(QRect(150, 30, 31, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Roboto"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        hourLabel->setFont(font3);
        hourLabel->setStyleSheet(QLatin1String("QLabel {color: rgb(255, 255, 255);};\n"
""));
        minuteLabel = new QLabel(centralwidget);
        minuteLabel->setObjectName(QStringLiteral("minuteLabel"));
        minuteLabel->setGeometry(QRect(190, 30, 41, 41));
        minuteLabel->setFont(font3);
        minuteLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        secondLabel = new QLabel(centralwidget);
        secondLabel->setObjectName(QStringLiteral("secondLabel"));
        secondLabel->setGeometry(QRect(220, 30, 21, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Roboto"));
        font4.setPointSize(10);
        secondLabel->setFont(font4);
        secondLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        timeColon = new QLabel(centralwidget);
        timeColon->setObjectName(QStringLiteral("timeColon"));
        timeColon->setGeometry(QRect(180, 30, 20, 41));
        timeColon->setFont(font3);
        timeColon->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        backgroundLabel = new QLabel(centralwidget);
        backgroundLabel->setObjectName(QStringLiteral("backgroundLabel"));
        backgroundLabel->setGeometry(QRect(-20, -20, 1371, 721));
        QFont font5;
        font5.setPointSize(17);
        backgroundLabel->setFont(font5);
        degreeLabel = new QLabel(centralwidget);
        degreeLabel->setObjectName(QStringLiteral("degreeLabel"));
        degreeLabel->setGeometry(QRect(280, 90, 21, 31));
        QFont font6;
        font6.setFamily(QStringLiteral("Roboto"));
        font6.setPointSize(16);
        font6.setBold(true);
        font6.setWeight(75);
        degreeLabel->setFont(font6);
        degreeLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        currentDateLabel = new QLabel(centralwidget);
        currentDateLabel->setObjectName(QStringLiteral("currentDateLabel"));
        currentDateLabel->setGeometry(QRect(260, 30, 141, 41));
        currentDateLabel->setFont(font3);
        currentDateLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        russiaHourLabel = new QLabel(centralwidget);
        russiaHourLabel->setObjectName(QStringLiteral("russiaHourLabel"));
        russiaHourLabel->setGeometry(QRect(160, 350, 31, 41));
        QFont font7;
        font7.setFamily(QStringLiteral("Roboto"));
        font7.setPointSize(20);
        font7.setBold(true);
        font7.setWeight(75);
        russiaHourLabel->setFont(font7);
        russiaHourLabel->setStyleSheet(QLatin1String("QLabel {color: rgb(255, 255, 255);};\n"
""));
        russiaTimeColon = new QLabel(centralwidget);
        russiaTimeColon->setObjectName(QStringLiteral("russiaTimeColon"));
        russiaTimeColon->setGeometry(QRect(190, 350, 21, 41));
        russiaTimeColon->setFont(font7);
        russiaTimeColon->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        russiaMinuteLabel = new QLabel(centralwidget);
        russiaMinuteLabel->setObjectName(QStringLiteral("russiaMinuteLabel"));
        russiaMinuteLabel->setGeometry(QRect(200, 350, 41, 41));
        russiaMinuteLabel->setFont(font7);
        russiaMinuteLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        israelHourLabel = new QLabel(centralwidget);
        israelHourLabel->setObjectName(QStringLiteral("israelHourLabel"));
        israelHourLabel->setGeometry(QRect(160, 440, 31, 41));
        israelHourLabel->setFont(font7);
        israelHourLabel->setStyleSheet(QLatin1String("QLabel {color: rgb(255, 255, 255);};\n"
""));
        israelTimeColon = new QLabel(centralwidget);
        israelTimeColon->setObjectName(QStringLiteral("israelTimeColon"));
        israelTimeColon->setGeometry(QRect(190, 440, 20, 41));
        israelTimeColon->setFont(font7);
        israelTimeColon->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        israelMinuteLabel = new QLabel(centralwidget);
        israelMinuteLabel->setObjectName(QStringLiteral("israelMinuteLabel"));
        israelMinuteLabel->setGeometry(QRect(200, 440, 41, 41));
        israelMinuteLabel->setFont(font7);
        israelMinuteLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        russiaTimeLabel = new QLabel(centralwidget);
        russiaTimeLabel->setObjectName(QStringLiteral("russiaTimeLabel"));
        russiaTimeLabel->setGeometry(QRect(160, 320, 81, 20));
        QFont font8;
        font8.setFamily(QStringLiteral("Roboto Condensed"));
        font8.setPointSize(20);
        font8.setBold(true);
        font8.setItalic(true);
        font8.setWeight(75);
        russiaTimeLabel->setFont(font8);
        russiaTimeLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        israelTimeLabel = new QLabel(centralwidget);
        israelTimeLabel->setObjectName(QStringLiteral("israelTimeLabel"));
        israelTimeLabel->setGeometry(QRect(160, 410, 81, 20));
        israelTimeLabel->setFont(font8);
        israelTimeLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        newYorkHourLabel = new QLabel(centralwidget);
        newYorkHourLabel->setObjectName(QStringLiteral("newYorkHourLabel"));
        newYorkHourLabel->setGeometry(QRect(160, 530, 31, 41));
        newYorkHourLabel->setFont(font7);
        newYorkHourLabel->setStyleSheet(QLatin1String("QLabel {color: rgb(255, 255, 255);};\n"
""));
        newYorkTimeColon = new QLabel(centralwidget);
        newYorkTimeColon->setObjectName(QStringLiteral("newYorkTimeColon"));
        newYorkTimeColon->setGeometry(QRect(190, 530, 20, 41));
        newYorkTimeColon->setFont(font7);
        newYorkTimeColon->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        newYorkMinuteLabel = new QLabel(centralwidget);
        newYorkMinuteLabel->setObjectName(QStringLiteral("newYorkMinuteLabel"));
        newYorkMinuteLabel->setGeometry(QRect(200, 530, 41, 41));
        newYorkMinuteLabel->setFont(font7);
        newYorkMinuteLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        newYorkTimeLabel = new QLabel(centralwidget);
        newYorkTimeLabel->setObjectName(QStringLiteral("newYorkTimeLabel"));
        newYorkTimeLabel->setGeometry(QRect(160, 500, 121, 20));
        newYorkTimeLabel->setFont(font8);
        newYorkTimeLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        greetingsLabel = new QLabel(centralwidget);
        greetingsLabel->setObjectName(QStringLiteral("greetingsLabel"));
        greetingsLabel->setGeometry(QRect(580, 90, 231, 61));
        QFont font9;
        font9.setFamily(QStringLiteral("Roboto"));
        font9.setPointSize(16);
        font9.setBold(true);
        font9.setItalic(true);
        font9.setWeight(75);
        greetingsLabel->setFont(font9);
        greetingsLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        zipLabel = new QLabel(centralwidget);
        zipLabel->setObjectName(QStringLiteral("zipLabel"));
        zipLabel->setGeometry(QRect(1280, 410, 57, 14));
        QFont font10;
        font10.setFamily(QStringLiteral("Roboto Condensed"));
        font10.setPointSize(12);
        font10.setBold(true);
        font10.setWeight(75);
        zipLabel->setFont(font10);
        dashboard->setCentralWidget(centralwidget);
        backgroundLabel->raise();
        imageLabel->raise();
        imageDownloadButton->raise();
        zipCodeEdit->raise();
        pictureFrameLabel->raise();
        pictureLabel->raise();
        weatherTempLabel->raise();
        weatherDescLabel->raise();
        weatherHiLoLabel->raise();
        weatherDownloadButton->raise();
        weatherIconLabel->raise();
        hourLabel->raise();
        secondLabel->raise();
        minuteLabel->raise();
        timeColon->raise();
        degreeLabel->raise();
        currentDateLabel->raise();
        russiaHourLabel->raise();
        russiaTimeColon->raise();
        russiaMinuteLabel->raise();
        israelHourLabel->raise();
        israelTimeColon->raise();
        israelMinuteLabel->raise();
        russiaTimeLabel->raise();
        israelTimeLabel->raise();
        newYorkHourLabel->raise();
        newYorkTimeColon->raise();
        newYorkMinuteLabel->raise();
        newYorkTimeLabel->raise();
        greetingsLabel->raise();
        zipLabel->raise();
        menubar = new QMenuBar(dashboard);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 2083, 19));
        dashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(dashboard);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        dashboard->setStatusBar(statusbar);

        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *dashboard)
    {
        dashboard->setWindowTitle(QApplication::translate("dashboard", "dashboard", Q_NULLPTR));
        imageDownloadButton->setText(QString());
        imageLabel->setText(QString());
        zipCodeEdit->setText(QApplication::translate("dashboard", "98119", Q_NULLPTR));
        pictureFrameLabel->setText(QString());
        pictureLabel->setText(QApplication::translate("dashboard", "                              Picture", Q_NULLPTR));
        weatherIconLabel->setText(QApplication::translate("dashboard", "weather", Q_NULLPTR));
        weatherTempLabel->setText(QApplication::translate("dashboard", "67", Q_NULLPTR));
        weatherDescLabel->setText(QApplication::translate("dashboard", "desc", Q_NULLPTR));
        weatherHiLoLabel->setText(QApplication::translate("dashboard", "hi/lo", Q_NULLPTR));
        weatherDownloadButton->setText(QString());
        hourLabel->setText(QApplication::translate("dashboard", "22", Q_NULLPTR));
        minuteLabel->setText(QApplication::translate("dashboard", "22", Q_NULLPTR));
        secondLabel->setText(QApplication::translate("dashboard", "22", Q_NULLPTR));
        timeColon->setText(QApplication::translate("dashboard", ":", Q_NULLPTR));
        backgroundLabel->setText(QString());
        degreeLabel->setText(QApplication::translate("dashboard", "o", Q_NULLPTR));
        currentDateLabel->setText(QApplication::translate("dashboard", "Tue, Oct. 9", Q_NULLPTR));
        russiaHourLabel->setText(QApplication::translate("dashboard", "22", Q_NULLPTR));
        russiaTimeColon->setText(QApplication::translate("dashboard", ":", Q_NULLPTR));
        russiaMinuteLabel->setText(QApplication::translate("dashboard", "22", Q_NULLPTR));
        israelHourLabel->setText(QApplication::translate("dashboard", "22", Q_NULLPTR));
        israelTimeColon->setText(QApplication::translate("dashboard", ":", Q_NULLPTR));
        israelMinuteLabel->setText(QApplication::translate("dashboard", "22", Q_NULLPTR));
        russiaTimeLabel->setText(QApplication::translate("dashboard", "Russia", Q_NULLPTR));
        israelTimeLabel->setText(QApplication::translate("dashboard", "Israel", Q_NULLPTR));
        newYorkHourLabel->setText(QApplication::translate("dashboard", "22", Q_NULLPTR));
        newYorkTimeColon->setText(QApplication::translate("dashboard", ":", Q_NULLPTR));
        newYorkMinuteLabel->setText(QApplication::translate("dashboard", "22", Q_NULLPTR));
        newYorkTimeLabel->setText(QApplication::translate("dashboard", "New York", Q_NULLPTR));
        greetingsLabel->setText(QApplication::translate("dashboard", "Good morning, Logan", Q_NULLPTR));
        zipLabel->setText(QApplication::translate("dashboard", "ZIP", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
