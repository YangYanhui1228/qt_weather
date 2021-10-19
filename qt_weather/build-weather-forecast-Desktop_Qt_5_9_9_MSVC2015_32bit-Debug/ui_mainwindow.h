/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLineEdit *cityLineEdit;
    QLabel *dateLabel;
    QFrame *hLine_1;
    QFrame *hLine_10;
    QFrame *hLine_11;
    QLabel *titleLb;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *pm25TitleLb;
    QLabel *flLb;
    QLabel *pm25Lb;
    QLabel *shiduTitleLb;
    QLabel *flTitleLb;
    QLabel *fxLb;
    QLabel *shiduLb;
    QLabel *fxTitleLb;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *cityLb;
    QLabel *label;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *date0Lb;
    QLabel *type0Lb;
    QLabel *date1Lb;
    QLabel *type5Lb;
    QLabel *label_14;
    QLabel *quality5Lb;
    QLabel *type4Lb;
    QLabel *quality2Lb;
    QLabel *type2Lb;
    QLabel *quality4Lb;
    QLabel *low2Lb;
    QLabel *date4Lb;
    QLabel *low3Lb;
    QLabel *type1Lb;
    QLabel *date2Lb;
    QLabel *week0Lb;
    QLabel *week2Lb;
    QLabel *low1Lb;
    QLabel *type3Lb;
    QLabel *low4Lb;
    QLabel *low0Lb;
    QLabel *typeIco0Lb;
    QLabel *week3Lb;
    QLabel *quality3Lb;
    QLabel *typeIco2Lb;
    QLabel *week4Lb;
    QLabel *typeIco3Lb;
    QLabel *typeIco5Lb;
    QLabel *quality1Lb;
    QLabel *typeIco4Lb;
    QLabel *date5Lb;
    QLabel *date3Lb;
    QLabel *week5Lb;
    QLabel *quality0Lb;
    QLabel *typeIco1Lb;
    QLabel *low5Lb;
    QLabel *week1Lb;
    QLabel *high0Lb;
    QLabel *high1Lb;
    QLabel *high2Lb;
    QLabel *high3Lb;
    QLabel *high4Lb;
    QLabel *high5Lb;
    QLabel *leafLb;
    QLabel *qualityLb;
    QLabel *temLb;
    QLabel *typeLb;
    QLabel *typeIcoLb;
    QLabel *noticeLb;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QFrame *vLine_1;
    QStatusBar *statusbar;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 450);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setGeometry(QRect(0, 0, 800, 450));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 800, 450));
        widget->setStyleSheet(QLatin1String("QWidget#widget{\n"
"	border-image: url(:/weaUI/weaUI.png);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QLabel{\n"
"	font: 25 10pt \"Microsoft YaHei\";\n"
"	border-radius: 4px;\n"
"	background-color: argb(60, 60, 60, 130);\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"Line{\n"
"	background-color: rgb(0, 85, 0);\n"
"}\n"
""));
        cityLineEdit = new QLineEdit(widget);
        cityLineEdit->setObjectName(QStringLiteral("cityLineEdit"));
        cityLineEdit->setGeometry(QRect(575, 10, 171, 31));
        dateLabel = new QLabel(widget);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));
        dateLabel->setGeometry(QRect(190, 3, 421, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \351\273\221\344\275\223 Std R"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        dateLabel->setFont(font);
        dateLabel->setStyleSheet(QString::fromUtf8("font: 20pt \"Adobe \351\273\221\344\275\223 Std R\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255, 0);"));
        dateLabel->setAlignment(Qt::AlignCenter);
        hLine_1 = new QFrame(widget);
        hLine_1->setObjectName(QStringLiteral("hLine_1"));
        hLine_1->setGeometry(QRect(10, 45, 781, 1));
        hLine_1->setFrameShape(QFrame::HLine);
        hLine_1->setFrameShadow(QFrame::Sunken);
        hLine_10 = new QFrame(widget);
        hLine_10->setObjectName(QStringLiteral("hLine_10"));
        hLine_10->setGeometry(QRect(10, 183, 351, 1));
        hLine_10->setFrameShape(QFrame::HLine);
        hLine_10->setFrameShadow(QFrame::Sunken);
        hLine_11 = new QFrame(widget);
        hLine_11->setObjectName(QStringLiteral("hLine_11"));
        hLine_11->setGeometry(QRect(10, 335, 351, 1));
        hLine_11->setFrameShape(QFrame::HLine);
        hLine_11->setFrameShadow(QFrame::Sunken);
        titleLb = new QLabel(widget);
        titleLb->setObjectName(QStringLiteral("titleLb"));
        titleLb->setGeometry(QRect(80, 10, 171, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\347\220\245\347\217\200"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        titleLb->setFont(font1);
        titleLb->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(85, 255, 0);"));
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 190, 341, 141));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pm25TitleLb = new QLabel(gridLayoutWidget);
        pm25TitleLb->setObjectName(QStringLiteral("pm25TitleLb"));
        pm25TitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pm25TitleLb, 1, 0, 1, 1);

        flLb = new QLabel(gridLayoutWidget);
        flLb->setObjectName(QStringLiteral("flLb"));
        flLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(flLb, 3, 1, 1, 2);

        pm25Lb = new QLabel(gridLayoutWidget);
        pm25Lb->setObjectName(QStringLiteral("pm25Lb"));
        pm25Lb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(pm25Lb, 1, 1, 1, 2);

        shiduTitleLb = new QLabel(gridLayoutWidget);
        shiduTitleLb->setObjectName(QStringLiteral("shiduTitleLb"));
        shiduTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(shiduTitleLb, 0, 0, 1, 1);

        flTitleLb = new QLabel(gridLayoutWidget);
        flTitleLb->setObjectName(QStringLiteral("flTitleLb"));
        flTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(flTitleLb, 3, 0, 1, 1);

        fxLb = new QLabel(gridLayoutWidget);
        fxLb->setObjectName(QStringLiteral("fxLb"));
        fxLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fxLb, 2, 1, 1, 2);

        shiduLb = new QLabel(gridLayoutWidget);
        shiduLb->setObjectName(QStringLiteral("shiduLb"));
        shiduLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(shiduLb, 0, 1, 1, 2);

        fxTitleLb = new QLabel(gridLayoutWidget);
        fxTitleLb->setObjectName(QStringLiteral("fxTitleLb"));
        fxTitleLb->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(fxTitleLb, 2, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(widget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(150, 50, 131, 51));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        cityLb = new QLabel(gridLayoutWidget_2);
        cityLb->setObjectName(QStringLiteral("cityLb"));
        cityLb->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 16pt \"Microsoft YaHei UI\";\n"
"background-color: rgba(60, 60, 60, 0);"));
        cityLb->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(cityLb, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("background-color: argb(60, 60, 60, 0);\n"
"image: url(:/weatherIco/location.ico);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(widget);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(370, 50, 421, 391));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        date0Lb = new QLabel(gridLayoutWidget_3);
        date0Lb->setObjectName(QStringLiteral("date0Lb"));
        date0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date0Lb, 1, 0, 1, 1);

        type0Lb = new QLabel(gridLayoutWidget_3);
        type0Lb->setObjectName(QStringLiteral("type0Lb"));
        type0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type0Lb, 3, 0, 1, 1);

        date1Lb = new QLabel(gridLayoutWidget_3);
        date1Lb->setObjectName(QStringLiteral("date1Lb"));
        date1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date1Lb, 1, 1, 1, 1);

        type5Lb = new QLabel(gridLayoutWidget_3);
        type5Lb->setObjectName(QStringLiteral("type5Lb"));
        type5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type5Lb, 3, 5, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_14, 7, 0, 3, 6);

        quality5Lb = new QLabel(gridLayoutWidget_3);
        quality5Lb->setObjectName(QStringLiteral("quality5Lb"));
        quality5Lb->setStyleSheet(QStringLiteral("color:rgb(255,255,0);"));
        quality5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality5Lb, 2, 5, 1, 1);

        type4Lb = new QLabel(gridLayoutWidget_3);
        type4Lb->setObjectName(QStringLiteral("type4Lb"));
        type4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type4Lb, 3, 4, 1, 1);

        quality2Lb = new QLabel(gridLayoutWidget_3);
        quality2Lb->setObjectName(QStringLiteral("quality2Lb"));
        quality2Lb->setStyleSheet(QStringLiteral("color:rgb(255,170,0);"));
        quality2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality2Lb, 2, 2, 1, 1);

        type2Lb = new QLabel(gridLayoutWidget_3);
        type2Lb->setObjectName(QStringLiteral("type2Lb"));
        type2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type2Lb, 3, 2, 1, 1);

        quality4Lb = new QLabel(gridLayoutWidget_3);
        quality4Lb->setObjectName(QStringLiteral("quality4Lb"));
        quality4Lb->setStyleSheet(QStringLiteral("color:rgb(170,0,0);"));
        quality4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality4Lb, 2, 4, 1, 1);

        low2Lb = new QLabel(gridLayoutWidget_3);
        low2Lb->setObjectName(QStringLiteral("low2Lb"));
        low2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low2Lb, 10, 2, 1, 1);

        date4Lb = new QLabel(gridLayoutWidget_3);
        date4Lb->setObjectName(QStringLiteral("date4Lb"));
        date4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date4Lb, 1, 4, 1, 1);

        low3Lb = new QLabel(gridLayoutWidget_3);
        low3Lb->setObjectName(QStringLiteral("low3Lb"));
        low3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low3Lb, 10, 3, 1, 1);

        type1Lb = new QLabel(gridLayoutWidget_3);
        type1Lb->setObjectName(QStringLiteral("type1Lb"));
        type1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type1Lb, 3, 1, 1, 1);

        date2Lb = new QLabel(gridLayoutWidget_3);
        date2Lb->setObjectName(QStringLiteral("date2Lb"));
        date2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date2Lb, 1, 2, 1, 1);

        week0Lb = new QLabel(gridLayoutWidget_3);
        week0Lb->setObjectName(QStringLiteral("week0Lb"));
        week0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week0Lb, 0, 0, 1, 1);

        week2Lb = new QLabel(gridLayoutWidget_3);
        week2Lb->setObjectName(QStringLiteral("week2Lb"));
        week2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week2Lb, 0, 2, 1, 1);

        low1Lb = new QLabel(gridLayoutWidget_3);
        low1Lb->setObjectName(QStringLiteral("low1Lb"));
        low1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low1Lb, 10, 1, 1, 1);

        type3Lb = new QLabel(gridLayoutWidget_3);
        type3Lb->setObjectName(QStringLiteral("type3Lb"));
        type3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(type3Lb, 3, 3, 1, 1);

        low4Lb = new QLabel(gridLayoutWidget_3);
        low4Lb->setObjectName(QStringLiteral("low4Lb"));
        low4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low4Lb, 10, 4, 1, 1);

        low0Lb = new QLabel(gridLayoutWidget_3);
        low0Lb->setObjectName(QStringLiteral("low0Lb"));
        low0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low0Lb, 10, 0, 1, 1);

        typeIco0Lb = new QLabel(gridLayoutWidget_3);
        typeIco0Lb->setObjectName(QStringLiteral("typeIco0Lb"));
        typeIco0Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/\345\260\217\351\233\250.png);"));
        typeIco0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco0Lb, 4, 0, 2, 1);

        week3Lb = new QLabel(gridLayoutWidget_3);
        week3Lb->setObjectName(QStringLiteral("week3Lb"));
        week3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week3Lb, 0, 3, 1, 1);

        quality3Lb = new QLabel(gridLayoutWidget_3);
        quality3Lb->setObjectName(QStringLiteral("quality3Lb"));
        quality3Lb->setStyleSheet(QStringLiteral("color:rgb(255,0,0);"));
        quality3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality3Lb, 2, 3, 1, 1);

        typeIco2Lb = new QLabel(gridLayoutWidget_3);
        typeIco2Lb->setObjectName(QStringLiteral("typeIco2Lb"));
        typeIco2Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/\346\231\264.png);"));
        typeIco2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco2Lb, 4, 2, 2, 1);

        week4Lb = new QLabel(gridLayoutWidget_3);
        week4Lb->setObjectName(QStringLiteral("week4Lb"));
        week4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week4Lb, 0, 4, 1, 1);

        typeIco3Lb = new QLabel(gridLayoutWidget_3);
        typeIco3Lb->setObjectName(QStringLiteral("typeIco3Lb"));
        typeIco3Lb->setStyleSheet(QString::fromUtf8("image: url(:/night/night/\351\233\276.png);"));
        typeIco3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco3Lb, 4, 3, 2, 1);

        typeIco5Lb = new QLabel(gridLayoutWidget_3);
        typeIco5Lb->setObjectName(QStringLiteral("typeIco5Lb"));
        typeIco5Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/\345\274\272\346\262\231\345\260\230\346\232\264.png);"));
        typeIco5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco5Lb, 4, 5, 2, 1);

        quality1Lb = new QLabel(gridLayoutWidget_3);
        quality1Lb->setObjectName(QStringLiteral("quality1Lb"));
        quality1Lb->setStyleSheet(QStringLiteral("color:rgb(255,255,0);"));
        quality1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality1Lb, 2, 1, 1, 1);

        typeIco4Lb = new QLabel(gridLayoutWidget_3);
        typeIco4Lb->setObjectName(QStringLiteral("typeIco4Lb"));
        typeIco4Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/\351\230\265\351\233\250.png);"));
        typeIco4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco4Lb, 4, 4, 2, 1);

        date5Lb = new QLabel(gridLayoutWidget_3);
        date5Lb->setObjectName(QStringLiteral("date5Lb"));
        date5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date5Lb, 1, 5, 1, 1);

        date3Lb = new QLabel(gridLayoutWidget_3);
        date3Lb->setObjectName(QStringLiteral("date3Lb"));
        date3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(date3Lb, 1, 3, 1, 1);

        week5Lb = new QLabel(gridLayoutWidget_3);
        week5Lb->setObjectName(QStringLiteral("week5Lb"));
        week5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week5Lb, 0, 5, 1, 1);

        quality0Lb = new QLabel(gridLayoutWidget_3);
        quality0Lb->setObjectName(QStringLiteral("quality0Lb"));
        quality0Lb->setStyleSheet(QStringLiteral("color:rgb(0,170,0);"));
        quality0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(quality0Lb, 2, 0, 1, 1);

        typeIco1Lb = new QLabel(gridLayoutWidget_3);
        typeIco1Lb->setObjectName(QStringLiteral("typeIco1Lb"));
        typeIco1Lb->setStyleSheet(QString::fromUtf8("image: url(:/day/day/\345\244\247\346\232\264\351\233\250\345\210\260\347\211\271\345\244\247\346\232\264\351\233\250.png);"));
        typeIco1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(typeIco1Lb, 4, 1, 2, 1);

        low5Lb = new QLabel(gridLayoutWidget_3);
        low5Lb->setObjectName(QStringLiteral("low5Lb"));
        low5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(low5Lb, 10, 5, 1, 1);

        week1Lb = new QLabel(gridLayoutWidget_3);
        week1Lb->setObjectName(QStringLiteral("week1Lb"));
        week1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(week1Lb, 0, 1, 1, 1);

        high0Lb = new QLabel(gridLayoutWidget_3);
        high0Lb->setObjectName(QStringLiteral("high0Lb"));
        high0Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high0Lb, 6, 0, 1, 1);

        high1Lb = new QLabel(gridLayoutWidget_3);
        high1Lb->setObjectName(QStringLiteral("high1Lb"));
        high1Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high1Lb, 6, 1, 1, 1);

        high2Lb = new QLabel(gridLayoutWidget_3);
        high2Lb->setObjectName(QStringLiteral("high2Lb"));
        high2Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high2Lb, 6, 2, 1, 1);

        high3Lb = new QLabel(gridLayoutWidget_3);
        high3Lb->setObjectName(QStringLiteral("high3Lb"));
        high3Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high3Lb, 6, 3, 1, 1);

        high4Lb = new QLabel(gridLayoutWidget_3);
        high4Lb->setObjectName(QStringLiteral("high4Lb"));
        high4Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high4Lb, 6, 4, 1, 1);

        high5Lb = new QLabel(gridLayoutWidget_3);
        high5Lb->setObjectName(QStringLiteral("high5Lb"));
        high5Lb->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(high5Lb, 6, 5, 1, 1);

        leafLb = new QLabel(widget);
        leafLb->setObjectName(QStringLiteral("leafLb"));
        leafLb->setGeometry(QRect(18, 58, 20, 20));
        leafLb->setStyleSheet(QLatin1String("image: url(:/weatherIco/leaf.ico);\n"
"background-color: argb(255, 255, 255, 0);"));
        qualityLb = new QLabel(widget);
        qualityLb->setObjectName(QStringLiteral("qualityLb"));
        qualityLb->setGeometry(QRect(38, 58, 56, 20));
        qualityLb->setStyleSheet(QStringLiteral("background-color: argb(255, 255, 255, 0);"));
        qualityLb->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        temLb = new QLabel(widget);
        temLb->setObjectName(QStringLiteral("temLb"));
        temLb->setGeometry(QRect(10, 50, 241, 101));
        temLb->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 50pt \"Arial\";"));
        temLb->setAlignment(Qt::AlignCenter);
        typeLb = new QLabel(widget);
        typeLb->setObjectName(QStringLiteral("typeLb"));
        typeLb->setGeometry(QRect(140, 120, 101, 31));
        typeLb->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: argb(60, 60, 60, 0);"));
        typeLb->setAlignment(Qt::AlignCenter);
        typeIcoLb = new QLabel(widget);
        typeIcoLb->setObjectName(QStringLiteral("typeIcoLb"));
        typeIcoLb->setGeometry(QRect(260, 63, 101, 101));
        typeIcoLb->setStyleSheet(QString::fromUtf8("border-image: url(:/day/day/\346\231\264.png);\n"
"background-color: argb(60, 60, 60, 0);"));
        noticeLb = new QLabel(widget);
        noticeLb->setObjectName(QStringLiteral("noticeLb"));
        noticeLb->setGeometry(QRect(10, 160, 351, 21));
        noticeLb->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: argb(60, 60, 60, 0);"));
        gridLayoutWidget_4 = new QWidget(widget);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 340, 191, 101));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(gridLayoutWidget_4);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: argb(255, 255, 255, 0);\n"
"font: 9pt \"Arial\";"));

        gridLayout_4->addWidget(textBrowser, 1, 1, 1, 2);

        label_3 = new QLabel(gridLayoutWidget_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_3, 0, 0, 2, 1);

        vLine_1 = new QFrame(widget);
        vLine_1->setObjectName(QStringLiteral("vLine_1"));
        vLine_1->setGeometry(QRect(205, 340, 1, 101));
        vLine_1->setFrameShape(QFrame::VLine);
        vLine_1->setFrameShadow(QFrame::Sunken);
        temLb->raise();
        cityLineEdit->raise();
        dateLabel->raise();
        hLine_1->raise();
        hLine_10->raise();
        hLine_11->raise();
        titleLb->raise();
        gridLayoutWidget->raise();
        gridLayoutWidget_2->raise();
        gridLayoutWidget_3->raise();
        leafLb->raise();
        qualityLb->raise();
        typeLb->raise();
        typeIcoLb->raise();
        noticeLb->raise();
        gridLayoutWidget_4->raise();
        vLine_1->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        statusbar->setGeometry(QRect(0, 0, 3, 24));

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        dateLabel->setText(QApplication::translate("MainWindow", "2021-02-20", Q_NULLPTR));
        titleLb->setText(QApplication::translate("MainWindow", "\345\244\251\346\260\224\351\242\204\346\212\245", Q_NULLPTR));
        pm25TitleLb->setText(QApplication::translate("MainWindow", "PM2.5", Q_NULLPTR));
        flLb->setText(QApplication::translate("MainWindow", "<3\347\272\247", Q_NULLPTR));
        pm25Lb->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        shiduTitleLb->setText(QApplication::translate("MainWindow", "\346\271\277\345\272\246", Q_NULLPTR));
        flTitleLb->setText(QApplication::translate("MainWindow", "\351\243\216\345\212\233", Q_NULLPTR));
        fxLb->setText(QApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", Q_NULLPTR));
        shiduLb->setText(QApplication::translate("MainWindow", "95%", Q_NULLPTR));
        fxTitleLb->setText(QApplication::translate("MainWindow", "\351\243\216\345\220\221", Q_NULLPTR));
        cityLb->setText(QApplication::translate("MainWindow", "\345\244\251\346\264\245", Q_NULLPTR));
        label->setText(QString());
        date0Lb->setText(QApplication::translate("MainWindow", "01/01", Q_NULLPTR));
        type0Lb->setText(QApplication::translate("MainWindow", "\351\230\264", Q_NULLPTR));
        date1Lb->setText(QApplication::translate("MainWindow", "01/02", Q_NULLPTR));
        type5Lb->setText(QApplication::translate("MainWindow", "\351\230\264", Q_NULLPTR));
        label_14->setText(QString());
        quality5Lb->setText(QApplication::translate("MainWindow", "\350\211\257\345\245\275", Q_NULLPTR));
        type4Lb->setText(QApplication::translate("MainWindow", "\351\230\264", Q_NULLPTR));
        quality2Lb->setText(QApplication::translate("MainWindow", "\350\275\273\345\272\246\346\261\241\346\237\223", Q_NULLPTR));
        type2Lb->setText(QApplication::translate("MainWindow", "\351\230\264", Q_NULLPTR));
        quality4Lb->setText(QApplication::translate("MainWindow", "\344\270\245\351\207\215\346\261\241\346\237\223", Q_NULLPTR));
        low2Lb->setText(QApplication::translate("MainWindow", "-1\302\260", Q_NULLPTR));
        date4Lb->setText(QApplication::translate("MainWindow", "01/05", Q_NULLPTR));
        low3Lb->setText(QApplication::translate("MainWindow", "-1\302\260", Q_NULLPTR));
        type1Lb->setText(QApplication::translate("MainWindow", "\351\230\264", Q_NULLPTR));
        date2Lb->setText(QApplication::translate("MainWindow", "01/03", Q_NULLPTR));
        week0Lb->setText(QApplication::translate("MainWindow", "\346\230\250\345\244\251", Q_NULLPTR));
        week2Lb->setText(QApplication::translate("MainWindow", "\345\221\250\344\270\211", Q_NULLPTR));
        low1Lb->setText(QApplication::translate("MainWindow", "-1\302\260", Q_NULLPTR));
        type3Lb->setText(QApplication::translate("MainWindow", "\351\230\264", Q_NULLPTR));
        low4Lb->setText(QApplication::translate("MainWindow", "-1\302\260", Q_NULLPTR));
        low0Lb->setText(QApplication::translate("MainWindow", "-1\302\260", Q_NULLPTR));
        typeIco0Lb->setText(QString());
        week3Lb->setText(QApplication::translate("MainWindow", "\345\221\250\345\233\233", Q_NULLPTR));
        quality3Lb->setText(QApplication::translate("MainWindow", "\344\270\255\345\272\246\346\261\241\346\237\223", Q_NULLPTR));
        typeIco2Lb->setText(QString());
        week4Lb->setText(QApplication::translate("MainWindow", "\345\221\250\344\272\224", Q_NULLPTR));
        typeIco3Lb->setText(QString());
        typeIco5Lb->setText(QString());
        quality1Lb->setText(QApplication::translate("MainWindow", "\350\211\257\345\245\275", Q_NULLPTR));
        typeIco4Lb->setText(QString());
        date5Lb->setText(QApplication::translate("MainWindow", "01/06", Q_NULLPTR));
        date3Lb->setText(QApplication::translate("MainWindow", "01/04", Q_NULLPTR));
        week5Lb->setText(QApplication::translate("MainWindow", "\345\221\250\345\205\255", Q_NULLPTR));
        quality0Lb->setText(QApplication::translate("MainWindow", "\344\274\230\350\264\250", Q_NULLPTR));
        typeIco1Lb->setText(QString());
        low5Lb->setText(QApplication::translate("MainWindow", "-1\302\260", Q_NULLPTR));
        week1Lb->setText(QApplication::translate("MainWindow", "\344\273\212\345\244\251", Q_NULLPTR));
        high0Lb->setText(QApplication::translate("MainWindow", "10\302\260", Q_NULLPTR));
        high1Lb->setText(QApplication::translate("MainWindow", "10\302\260", Q_NULLPTR));
        high2Lb->setText(QApplication::translate("MainWindow", "10\302\260", Q_NULLPTR));
        high3Lb->setText(QApplication::translate("MainWindow", "10\302\260", Q_NULLPTR));
        high4Lb->setText(QApplication::translate("MainWindow", "10\302\260", Q_NULLPTR));
        high5Lb->setText(QApplication::translate("MainWindow", "10\302\260", Q_NULLPTR));
        leafLb->setText(QString());
        qualityLb->setText(QApplication::translate("MainWindow", "\344\274\230", Q_NULLPTR));
        temLb->setText(QApplication::translate("MainWindow", "9\302\260", Q_NULLPTR));
        typeLb->setText(QApplication::translate("MainWindow", "\346\231\264", Q_NULLPTR));
        typeIcoLb->setText(QString());
        noticeLb->setText(QApplication::translate("MainWindow", "\345\244\251\346\260\224\346\217\220\347\244\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\346\204\237<br/>\345\206\222<br/>\346\214\207<br/>\346\225\260</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
