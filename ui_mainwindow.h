/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *background;
    QLabel *bird_1;
    QLabel *ground;
    QLabel *shoot_front;
    QLabel *shoot_back;
    QLabel *bird_2;
    QLabel *box_1;
    QLabel *box_2;
    QLabel *box_3;
    QLabel *box_4;
    QLabel *box_5;
    QLabel *box_6;
    QLabel *box_7;
    QLabel *box_8;
    QLabel *box_9;
    QLabel *box_10;
    QLabel *box_11;
    QLabel *box_12;
    QLabel *box_13;
    QLabel *box_14;
    QLabel *box_15;
    QLabel *thin_stick_1;
    QLabel *thin_stick_2;
    QLabel *thin_stick_3;
    QLabel *thin_stick_4;
    QLabel *thin_stick_5;
    QLabel *thin_stick_6;
    QLabel *thin_stick_7;
    QLabel *thin_stick_8;
    QLabel *thin_stick_9;
    QLabel *thin_stick_10;
    QLabel *thin_stick_11;
    QLabel *thin_stick_12;
    QLabel *thin_stick_13;
    QLabel *thin_stick_14;
    QLabel *thin_stick_15;
    QLabel *thick_stick_horizonal_1;
    QLabel *thick_stick_horizonal_2;
    QLabel *thin_stick_horizonal_1;
    QLabel *thin_stick_horizonal_2;
    QLabel *thin_stick_horizonal_3;
    QLabel *thin_stick_horizonal_4;
    QLabel *long_stick_1;
    QLabel *long_stick_2;
    QLabel *long_stick_3;
    QLabel *long_stick_4;
    QLabel *long_stick_5;
    QLabel *long_stick_6;
    QLabel *top_stick_1;
    QLabel *top_stick_2;
    QLabel *top_stick_3;
    QLabel *rock_1;
    QLabel *rock_2;
    QLabel *rock_3;
    QLabel *rock_4;
    QLabel *rock_5;
    QLabel *rock_6;
    QLabel *rock_7;
    QLabel *rock_8;
    QLabel *rock_9;
    QLabel *rock_10;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 768);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        background = new QLabel(centralWidget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 1024, 768));
        background->setPixmap(QPixmap(QString::fromUtf8(":/pics/angry_bird_background_pics_2_ch.png")));
        bird_1 = new QLabel(centralWidget);
        bird_1->setObjectName(QStringLiteral("bird_1"));
        bird_1->setGeometry(QRect(150, 500, 50, 50));
        bird_1->setPixmap(QPixmap(QString::fromUtf8(":/pics/bird_red_ch.png")));
        ground = new QLabel(centralWidget);
        ground->setObjectName(QStringLiteral("ground"));
        ground->setGeometry(QRect(0, 600, 1024, 168));
        ground->setPixmap(QPixmap(QString::fromUtf8(":/pics/ground_ch.png")));
        shoot_front = new QLabel(centralWidget);
        shoot_front->setObjectName(QStringLiteral("shoot_front"));
        shoot_front->setGeometry(QRect(40, 462, 275, 183));
        shoot_front->setPixmap(QPixmap(QString::fromUtf8(":/pics/shoot_ch_front.png")));
        shoot_back = new QLabel(centralWidget);
        shoot_back->setObjectName(QStringLiteral("shoot_back"));
        shoot_back->setGeometry(QRect(40, 462, 275, 183));
        shoot_back->setPixmap(QPixmap(QString::fromUtf8(":/pics/shoot_ch_back.png")));
        bird_2 = new QLabel(centralWidget);
        bird_2->setObjectName(QStringLiteral("bird_2"));
        bird_2->setGeometry(QRect(150, 500, 50, 50));
        bird_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/bird_yellow_ch.png")));
        box_1 = new QLabel(centralWidget);
        box_1->setObjectName(QStringLiteral("box_1"));
        box_1->setGeometry(QRect(600, 550, 50, 50));
        box_1->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_4.png")));
        box_2 = new QLabel(centralWidget);
        box_2->setObjectName(QStringLiteral("box_2"));
        box_2->setGeometry(QRect(650, 550, 50, 50));
        box_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_4.png")));
        box_3 = new QLabel(centralWidget);
        box_3->setObjectName(QStringLiteral("box_3"));
        box_3->setGeometry(QRect(700, 550, 50, 50));
        box_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_4.png")));
        box_4 = new QLabel(centralWidget);
        box_4->setObjectName(QStringLiteral("box_4"));
        box_4->setGeometry(QRect(750, 550, 50, 50));
        box_4->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_4.png")));
        box_5 = new QLabel(centralWidget);
        box_5->setObjectName(QStringLiteral("box_5"));
        box_5->setGeometry(QRect(800, 550, 50, 50));
        box_5->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_4.png")));
        box_6 = new QLabel(centralWidget);
        box_6->setObjectName(QStringLiteral("box_6"));
        box_6->setGeometry(QRect(625, 500, 50, 50));
        box_6->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_4.png")));
        box_7 = new QLabel(centralWidget);
        box_7->setObjectName(QStringLiteral("box_7"));
        box_7->setGeometry(QRect(700, 500, 50, 50));
        box_7->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_4.png")));
        box_8 = new QLabel(centralWidget);
        box_8->setObjectName(QStringLiteral("box_8"));
        box_8->setGeometry(QRect(775, 500, 50, 50));
        box_8->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_4.png")));
        box_9 = new QLabel(centralWidget);
        box_9->setObjectName(QStringLiteral("box_9"));
        box_9->setGeometry(QRect(640, 700, 50, 50));
        box_10 = new QLabel(centralWidget);
        box_10->setObjectName(QStringLiteral("box_10"));
        box_10->setGeometry(QRect(640, 700, 50, 50));
        box_11 = new QLabel(centralWidget);
        box_11->setObjectName(QStringLiteral("box_11"));
        box_11->setGeometry(QRect(640, 700, 50, 50));
        box_12 = new QLabel(centralWidget);
        box_12->setObjectName(QStringLiteral("box_12"));
        box_12->setGeometry(QRect(640, 700, 50, 50));
        box_13 = new QLabel(centralWidget);
        box_13->setObjectName(QStringLiteral("box_13"));
        box_13->setGeometry(QRect(640, 700, 50, 50));
        box_14 = new QLabel(centralWidget);
        box_14->setObjectName(QStringLiteral("box_14"));
        box_14->setGeometry(QRect(640, 700, 50, 50));
        box_15 = new QLabel(centralWidget);
        box_15->setObjectName(QStringLiteral("box_15"));
        box_15->setGeometry(QRect(640, 700, 50, 50));
        thin_stick_1 = new QLabel(centralWidget);
        thin_stick_1->setObjectName(QStringLiteral("thin_stick_1"));
        thin_stick_1->setGeometry(QRect(550, 520, 23, 80));
        thin_stick_1->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_1.png")));
        thin_stick_2 = new QLabel(centralWidget);
        thin_stick_2->setObjectName(QStringLiteral("thin_stick_2"));
        thin_stick_2->setGeometry(QRect(877, 520, 23, 80));
        thin_stick_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_1.png")));
        thin_stick_3 = new QLabel(centralWidget);
        thin_stick_3->setObjectName(QStringLiteral("thin_stick_3"));
        thin_stick_3->setGeometry(QRect(640, 640, 23, 80));
        thin_stick_4 = new QLabel(centralWidget);
        thin_stick_4->setObjectName(QStringLiteral("thin_stick_4"));
        thin_stick_4->setGeometry(QRect(640, 640, 23, 80));
        thin_stick_5 = new QLabel(centralWidget);
        thin_stick_5->setObjectName(QStringLiteral("thin_stick_5"));
        thin_stick_5->setGeometry(QRect(640, 640, 23, 80));
        thin_stick_6 = new QLabel(centralWidget);
        thin_stick_6->setObjectName(QStringLiteral("thin_stick_6"));
        thin_stick_6->setGeometry(QRect(640, 640, 23, 80));
        thin_stick_7 = new QLabel(centralWidget);
        thin_stick_7->setObjectName(QStringLiteral("thin_stick_7"));
        thin_stick_7->setGeometry(QRect(640, 640, 23, 80));
        thin_stick_8 = new QLabel(centralWidget);
        thin_stick_8->setObjectName(QStringLiteral("thin_stick_8"));
        thin_stick_8->setGeometry(QRect(640, 640, 23, 80));
        thin_stick_9 = new QLabel(centralWidget);
        thin_stick_9->setObjectName(QStringLiteral("thin_stick_9"));
        thin_stick_9->setGeometry(QRect(640, 640, 23, 80));
        thin_stick_10 = new QLabel(centralWidget);
        thin_stick_10->setObjectName(QStringLiteral("thin_stick_10"));
        thin_stick_10->setGeometry(QRect(640, 640, 23, 80));
        thin_stick_11 = new QLabel(centralWidget);
        thin_stick_11->setObjectName(QStringLiteral("thin_stick_11"));
        thin_stick_11->setGeometry(QRect(640, 640, 23, 80));
        thin_stick_12 = new QLabel(centralWidget);
        thin_stick_12->setObjectName(QStringLiteral("thin_stick_12"));
        thin_stick_12->setGeometry(QRect(640, 640, 23, 80));
        thin_stick_13 = new QLabel(centralWidget);
        thin_stick_13->setObjectName(QStringLiteral("thin_stick_13"));
        thin_stick_13->setGeometry(QRect(640, 640, 23, 80));
        thin_stick_14 = new QLabel(centralWidget);
        thin_stick_14->setObjectName(QStringLiteral("thin_stick_14"));
        thin_stick_14->setGeometry(QRect(640, 640, 23, 80));
        thin_stick_15 = new QLabel(centralWidget);
        thin_stick_15->setObjectName(QStringLiteral("thin_stick_15"));
        thin_stick_15->setGeometry(QRect(640, 640, 23, 80));
        thick_stick_horizonal_1 = new QLabel(centralWidget);
        thick_stick_horizonal_1->setObjectName(QStringLiteral("thick_stick_horizonal_1"));
        thick_stick_horizonal_1->setGeometry(QRect(525, 500, 73, 20));
        thick_stick_horizonal_1->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_5.png")));
        thick_stick_horizonal_2 = new QLabel(centralWidget);
        thick_stick_horizonal_2->setObjectName(QStringLiteral("thick_stick_horizonal_2"));
        thick_stick_horizonal_2->setGeometry(QRect(850, 500, 73, 20));
        thick_stick_horizonal_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_5.png")));
        thin_stick_horizonal_1 = new QLabel(centralWidget);
        thin_stick_horizonal_1->setObjectName(QStringLiteral("thin_stick_horizonal_1"));
        thin_stick_horizonal_1->setGeometry(QRect(525, 490, 100, 10));
        thin_stick_horizonal_1->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_6.png")));
        thin_stick_horizonal_2 = new QLabel(centralWidget);
        thin_stick_horizonal_2->setObjectName(QStringLiteral("thin_stick_horizonal_2"));
        thin_stick_horizonal_2->setGeometry(QRect(625, 490, 100, 10));
        thin_stick_horizonal_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_6.png")));
        thin_stick_horizonal_3 = new QLabel(centralWidget);
        thin_stick_horizonal_3->setObjectName(QStringLiteral("thin_stick_horizonal_3"));
        thin_stick_horizonal_3->setGeometry(QRect(725, 490, 100, 10));
        thin_stick_horizonal_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_6.png")));
        thin_stick_horizonal_4 = new QLabel(centralWidget);
        thin_stick_horizonal_4->setObjectName(QStringLiteral("thin_stick_horizonal_4"));
        thin_stick_horizonal_4->setGeometry(QRect(825, 490, 100, 10));
        thin_stick_horizonal_4->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_6.png")));
        long_stick_1 = new QLabel(centralWidget);
        long_stick_1->setObjectName(QStringLiteral("long_stick_1"));
        long_stick_1->setGeometry(QRect(525, 370, 20, 120));
        long_stick_1->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_7.png")));
        long_stick_2 = new QLabel(centralWidget);
        long_stick_2->setObjectName(QStringLiteral("long_stick_2"));
        long_stick_2->setGeometry(QRect(638, 370, 20, 120));
        long_stick_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_7.png")));
        long_stick_3 = new QLabel(centralWidget);
        long_stick_3->setObjectName(QStringLiteral("long_stick_3"));
        long_stick_3->setGeometry(QRect(658, 370, 20, 120));
        long_stick_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_7.png")));
        long_stick_4 = new QLabel(centralWidget);
        long_stick_4->setObjectName(QStringLiteral("long_stick_4"));
        long_stick_4->setGeometry(QRect(772, 370, 20, 120));
        long_stick_4->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_7.png")));
        long_stick_5 = new QLabel(centralWidget);
        long_stick_5->setObjectName(QStringLiteral("long_stick_5"));
        long_stick_5->setGeometry(QRect(792, 370, 20, 120));
        long_stick_5->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_7.png")));
        long_stick_6 = new QLabel(centralWidget);
        long_stick_6->setObjectName(QStringLiteral("long_stick_6"));
        long_stick_6->setGeometry(QRect(905, 370, 20, 120));
        long_stick_6->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_7.png")));
        top_stick_1 = new QLabel(centralWidget);
        top_stick_1->setObjectName(QStringLiteral("top_stick_1"));
        top_stick_1->setGeometry(QRect(525, 360, 133, 10));
        top_stick_1->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_8.png")));
        top_stick_2 = new QLabel(centralWidget);
        top_stick_2->setObjectName(QStringLiteral("top_stick_2"));
        top_stick_2->setGeometry(QRect(658, 360, 133, 10));
        top_stick_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_8.png")));
        top_stick_3 = new QLabel(centralWidget);
        top_stick_3->setObjectName(QStringLiteral("top_stick_3"));
        top_stick_3->setGeometry(QRect(791, 360, 133, 10));
        top_stick_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_8.png")));
        rock_1 = new QLabel(centralWidget);
        rock_1->setObjectName(QStringLiteral("rock_1"));
        rock_1->setGeometry(QRect(525, 340, 40, 20));
        rock_1->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_9.png")));
        rock_2 = new QLabel(centralWidget);
        rock_2->setObjectName(QStringLiteral("rock_2"));
        rock_2->setGeometry(QRect(565, 340, 40, 20));
        rock_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_9.png")));
        rock_3 = new QLabel(centralWidget);
        rock_3->setObjectName(QStringLiteral("rock_3"));
        rock_3->setGeometry(QRect(605, 340, 40, 20));
        rock_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_9.png")));
        rock_4 = new QLabel(centralWidget);
        rock_4->setObjectName(QStringLiteral("rock_4"));
        rock_4->setGeometry(QRect(645, 340, 40, 20));
        rock_4->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_9.png")));
        rock_5 = new QLabel(centralWidget);
        rock_5->setObjectName(QStringLiteral("rock_5"));
        rock_5->setGeometry(QRect(685, 340, 40, 20));
        rock_5->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_9.png")));
        rock_6 = new QLabel(centralWidget);
        rock_6->setObjectName(QStringLiteral("rock_6"));
        rock_6->setGeometry(QRect(725, 340, 40, 20));
        rock_6->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_9.png")));
        rock_7 = new QLabel(centralWidget);
        rock_7->setObjectName(QStringLiteral("rock_7"));
        rock_7->setGeometry(QRect(765, 340, 40, 20));
        rock_7->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_9.png")));
        rock_8 = new QLabel(centralWidget);
        rock_8->setObjectName(QStringLiteral("rock_8"));
        rock_8->setGeometry(QRect(805, 340, 40, 20));
        rock_8->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_9.png")));
        rock_9 = new QLabel(centralWidget);
        rock_9->setObjectName(QStringLiteral("rock_9"));
        rock_9->setGeometry(QRect(845, 340, 40, 20));
        rock_9->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_9.png")));
        rock_10 = new QLabel(centralWidget);
        rock_10->setObjectName(QStringLiteral("rock_10"));
        rock_10->setGeometry(QRect(885, 340, 40, 20));
        rock_10->setPixmap(QPixmap(QString::fromUtf8(":/pics/things_9.png")));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(560, 450, 50, 50));
        label->setPixmap(QPixmap(QString::fromUtf8(":/pics/pig.png")));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(700, 450, 50, 50));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/pics/pig.png")));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(830, 450, 50, 50));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/pics/pig.png")));
        MainWindow->setCentralWidget(centralWidget);
        background->raise();
        ground->raise();
        shoot_back->raise();
        bird_1->raise();
        box_1->raise();
        box_2->raise();
        box_3->raise();
        box_4->raise();
        box_5->raise();
        box_6->raise();
        box_7->raise();
        box_8->raise();
        box_9->raise();
        box_10->raise();
        box_11->raise();
        box_12->raise();
        box_13->raise();
        box_14->raise();
        box_15->raise();
        thin_stick_1->raise();
        thin_stick_2->raise();
        thin_stick_3->raise();
        thin_stick_4->raise();
        thin_stick_5->raise();
        thin_stick_6->raise();
        thin_stick_7->raise();
        thin_stick_8->raise();
        thin_stick_9->raise();
        thin_stick_10->raise();
        thin_stick_11->raise();
        thin_stick_12->raise();
        thin_stick_13->raise();
        thin_stick_14->raise();
        thin_stick_15->raise();
        thick_stick_horizonal_1->raise();
        thick_stick_horizonal_2->raise();
        bird_2->raise();
        shoot_front->raise();
        thin_stick_horizonal_1->raise();
        thin_stick_horizonal_2->raise();
        thin_stick_horizonal_3->raise();
        thin_stick_horizonal_4->raise();
        long_stick_1->raise();
        long_stick_2->raise();
        long_stick_3->raise();
        long_stick_4->raise();
        long_stick_5->raise();
        long_stick_6->raise();
        top_stick_1->raise();
        top_stick_2->raise();
        top_stick_3->raise();
        rock_1->raise();
        rock_2->raise();
        rock_3->raise();
        rock_4->raise();
        rock_5->raise();
        rock_6->raise();
        rock_7->raise();
        rock_8->raise();
        rock_9->raise();
        rock_10->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        background->setText(QString());
        bird_1->setText(QString());
        ground->setText(QString());
        shoot_front->setText(QString());
        shoot_back->setText(QString());
        bird_2->setText(QString());
        box_1->setText(QString());
        box_2->setText(QString());
        box_3->setText(QString());
        box_4->setText(QString());
        box_5->setText(QString());
        box_6->setText(QString());
        box_7->setText(QString());
        box_8->setText(QString());
        box_9->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        box_10->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        box_11->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        box_12->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        box_13->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        box_14->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        box_15->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thin_stick_1->setText(QString());
        thin_stick_2->setText(QString());
        thin_stick_3->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thin_stick_4->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thin_stick_5->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thin_stick_6->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thin_stick_7->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thin_stick_8->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thin_stick_9->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thin_stick_10->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thin_stick_11->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thin_stick_12->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thin_stick_13->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thin_stick_14->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thin_stick_15->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        thick_stick_horizonal_1->setText(QString());
        thick_stick_horizonal_2->setText(QString());
        thin_stick_horizonal_1->setText(QString());
        thin_stick_horizonal_2->setText(QString());
        thin_stick_horizonal_3->setText(QString());
        thin_stick_horizonal_4->setText(QString());
        long_stick_1->setText(QString());
        long_stick_2->setText(QString());
        long_stick_3->setText(QString());
        long_stick_4->setText(QString());
        long_stick_5->setText(QString());
        long_stick_6->setText(QString());
        top_stick_1->setText(QString());
        top_stick_2->setText(QString());
        top_stick_3->setText(QString());
        rock_1->setText(QString());
        rock_2->setText(QString());
        rock_3->setText(QString());
        rock_4->setText(QString());
        rock_5->setText(QString());
        rock_6->setText(QString());
        rock_7->setText(QString());
        rock_8->setText(QString());
        rock_9->setText(QString());
        rock_10->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
