/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_trem1;
    QLabel *label_trilho1;
    QLabel *label_trilho2;
    QLabel *label_trilho3;
    QLabel *label_trilho4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_trilho4_2;
    QLabel *label_trilho1_2;
    QLabel *label_trilho2_2;
    QLabel *label_trem2;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_trilho1_3;
    QLabel *label_trilho1_4;
    QLabel *label_trilho4_3;
    QLabel *label_trem3;
    QSlider *horizontalSlider_3;
    QLabel *label_3;
    QLabel *label_trilho4_4;
    QLabel *label_trilho2_3;
    QLabel *label_trilho3_2;
    QLabel *label_trem4;
    QSlider *horizontalSlider_4;
    QLabel *label_4;
    QLabel *label_trilho2_4;
    QLabel *label_trilho4_5;
    QLabel *label_trem5;
    QSlider *horizontalSlider_5;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1066, 594);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName(QString::fromUtf8("label_trem1"));
        label_trem1->setGeometry(QRect(60, 30, 21, 20));
        label_trem1->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        label_trilho1 = new QLabel(centralWidget);
        label_trilho1->setObjectName(QString::fromUtf8("label_trilho1"));
        label_trilho1->setGeometry(QRect(80, 30, 250, 20));
        label_trilho1->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trilho2 = new QLabel(centralWidget);
        label_trilho2->setObjectName(QString::fromUtf8("label_trilho2"));
        label_trilho2->setGeometry(QRect(80, 150, 250, 20));
        label_trilho2->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trilho3 = new QLabel(centralWidget);
        label_trilho3->setObjectName(QString::fromUtf8("label_trilho3"));
        label_trilho3->setGeometry(QRect(330, 30, 21, 140));
        label_trilho3->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trilho4 = new QLabel(centralWidget);
        label_trilho4->setObjectName(QString::fromUtf8("label_trilho4"));
        label_trilho4->setGeometry(QRect(60, 30, 21, 140));
        label_trilho4->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 390, 99, 27));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 390, 98, 27));
        label_trilho4_2 = new QLabel(centralWidget);
        label_trilho4_2->setObjectName(QString::fromUtf8("label_trilho4_2"));
        label_trilho4_2->setGeometry(QRect(600, 30, 21, 140));
        label_trilho4_2->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trilho1_2 = new QLabel(centralWidget);
        label_trilho1_2->setObjectName(QString::fromUtf8("label_trilho1_2"));
        label_trilho1_2->setGeometry(QRect(350, 30, 250, 20));
        label_trilho1_2->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trilho2_2 = new QLabel(centralWidget);
        label_trilho2_2->setObjectName(QString::fromUtf8("label_trilho2_2"));
        label_trilho2_2->setGeometry(QRect(350, 150, 250, 20));
        label_trilho2_2->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName(QString::fromUtf8("label_trem2"));
        label_trem2->setGeometry(QRect(330, 30, 21, 20));
        label_trem2->setStyleSheet(QString::fromUtf8("QLabel { background: green}"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(690, 350, 160, 16));
        horizontalSlider->setSizeIncrement(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(239, 41, 41, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 147, 147, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 94, 94, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 20, 20, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 27, 27, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(247, 148, 148, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        horizontalSlider->setPalette(palette);
        horizontalSlider->setLayoutDirection(Qt::RightToLeft);
        horizontalSlider->setMaximum(500);
        horizontalSlider->setSliderPosition(100);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider_2 = new QSlider(centralWidget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(690, 380, 160, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush10(QColor(78, 154, 6, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush10);
        QBrush brush11(QColor(117, 231, 9, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush11);
        QBrush brush12(QColor(97, 192, 7, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush12);
        QBrush brush13(QColor(39, 77, 3, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush13);
        QBrush brush14(QColor(52, 103, 4, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush15(QColor(166, 204, 130, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        horizontalSlider_2->setPalette(palette1);
        horizontalSlider_2->setLayoutDirection(Qt::RightToLeft);
        horizontalSlider_2->setMaximum(500);
        horizontalSlider_2->setSliderPosition(100);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(630, 350, 67, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(630, 380, 67, 17));
        label_trilho1_3 = new QLabel(centralWidget);
        label_trilho1_3->setObjectName(QString::fromUtf8("label_trilho1_3"));
        label_trilho1_3->setGeometry(QRect(620, 30, 250, 20));
        label_trilho1_3->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trilho1_4 = new QLabel(centralWidget);
        label_trilho1_4->setObjectName(QString::fromUtf8("label_trilho1_4"));
        label_trilho1_4->setGeometry(QRect(620, 150, 250, 20));
        label_trilho1_4->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trilho4_3 = new QLabel(centralWidget);
        label_trilho4_3->setObjectName(QString::fromUtf8("label_trilho4_3"));
        label_trilho4_3->setGeometry(QRect(870, 30, 21, 140));
        label_trilho4_3->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trem3 = new QLabel(centralWidget);
        label_trem3->setObjectName(QString::fromUtf8("label_trem3"));
        label_trem3->setGeometry(QRect(600, 30, 21, 20));
        label_trem3->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(92, 53, 102)}\n"
"\n"
""));
        horizontalSlider_3 = new QSlider(centralWidget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(690, 410, 160, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush16(QColor(92, 53, 102, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush16);
        QBrush brush17(QColor(138, 79, 153, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush17);
        QBrush brush18(QColor(115, 66, 127, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush18);
        QBrush brush19(QColor(46, 26, 51, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush19);
        QBrush brush20(QColor(61, 35, 68, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush16);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush19);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush21(QColor(255, 255, 255, 128));
        brush21.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush21);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush18);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush16);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush19);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush21);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush17);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush16);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush21);
#endif
        horizontalSlider_3->setPalette(palette2);
        horizontalSlider_3->setLayoutDirection(Qt::RightToLeft);
        horizontalSlider_3->setMinimum(0);
        horizontalSlider_3->setMaximum(500);
        horizontalSlider_3->setSliderPosition(100);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(630, 410, 67, 17));
        label_trilho4_4 = new QLabel(centralWidget);
        label_trilho4_4->setObjectName(QString::fromUtf8("label_trilho4_4"));
        label_trilho4_4->setGeometry(QRect(460, 170, 21, 140));
        label_trilho4_4->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trilho2_3 = new QLabel(centralWidget);
        label_trilho2_3->setObjectName(QString::fromUtf8("label_trilho2_3"));
        label_trilho2_3->setGeometry(QRect(210, 290, 250, 20));
        label_trilho2_3->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trilho3_2 = new QLabel(centralWidget);
        label_trilho3_2->setObjectName(QString::fromUtf8("label_trilho3_2"));
        label_trilho3_2->setGeometry(QRect(190, 170, 21, 140));
        label_trilho3_2->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trem4 = new QLabel(centralWidget);
        label_trem4->setObjectName(QString::fromUtf8("label_trem4"));
        label_trem4->setGeometry(QRect(190, 150, 21, 20));
        label_trem4->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(32, 74, 135)}"));
        horizontalSlider_4 = new QSlider(centralWidget);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(690, 440, 160, 16));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush22(QColor(32, 74, 135, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush22);
        QBrush brush23(QColor(48, 111, 203, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush23);
        QBrush brush24(QColor(40, 92, 169, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush24);
        QBrush brush25(QColor(16, 37, 67, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush25);
        QBrush brush26(QColor(21, 49, 90, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush26);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush22);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush27(QColor(143, 164, 195, 255));
        brush27.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush27);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush22);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush23);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush24);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush25);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush26);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush22);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush27);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush22);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush23);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush24);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush26);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush25);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush22);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush22);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush22);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        horizontalSlider_4->setPalette(palette3);
        horizontalSlider_4->setLayoutDirection(Qt::RightToLeft);
        horizontalSlider_4->setMaximum(500);
        horizontalSlider_4->setSliderPosition(100);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(630, 440, 67, 17));
        label_trilho2_4 = new QLabel(centralWidget);
        label_trilho2_4->setObjectName(QString::fromUtf8("label_trilho2_4"));
        label_trilho2_4->setGeometry(QRect(480, 290, 250, 20));
        label_trilho2_4->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trilho4_5 = new QLabel(centralWidget);
        label_trilho4_5->setObjectName(QString::fromUtf8("label_trilho4_5"));
        label_trilho4_5->setGeometry(QRect(730, 170, 21, 140));
        label_trilho4_5->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(252, 233, 79)}"));
        label_trem5 = new QLabel(centralWidget);
        label_trem5->setObjectName(QString::fromUtf8("label_trem5"));
        label_trem5->setGeometry(QRect(460, 150, 21, 20));
        label_trem5->setStyleSheet(QString::fromUtf8("QLabel { background: rgb(245, 121, 0)}"));
        horizontalSlider_5 = new QSlider(centralWidget);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setGeometry(QRect(690, 470, 160, 16));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush28(QColor(245, 121, 0, 255));
        brush28.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush28);
        QBrush brush29(QColor(255, 183, 112, 255));
        brush29.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush29);
        QBrush brush30(QColor(250, 152, 56, 255));
        brush30.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush30);
        QBrush brush31(QColor(122, 60, 0, 255));
        brush31.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush31);
        QBrush brush32(QColor(163, 80, 0, 255));
        brush32.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush32);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush28);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush33(QColor(250, 188, 127, 255));
        brush33.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush33);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush28);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush29);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush30);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush31);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush32);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush28);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush33);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush31);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush28);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush29);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush30);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush31);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush32);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush31);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush31);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush28);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush28);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush28);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        horizontalSlider_5->setPalette(palette4);
        horizontalSlider_5->setLayoutDirection(Qt::RightToLeft);
        horizontalSlider_5->setMaximum(500);
        horizontalSlider_5->setSliderPosition(100);
        horizontalSlider_5->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(630, 470, 67, 17));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush28);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush29);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush30);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush31);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush32);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush28);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush33);
        QBrush brush34(QColor(0, 0, 0, 128));
        brush34.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush34);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush28);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush29);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush30);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush31);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush32);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush28);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush33);
        QBrush brush35(QColor(0, 0, 0, 128));
        brush35.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush35);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush31);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush28);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush29);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush30);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush31);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush32);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush31);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush31);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush28);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush28);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush28);
        QBrush brush36(QColor(0, 0, 0, 128));
        brush36.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush36);
#endif
        label_5->setPalette(palette5);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(336, 90, 21, 17));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(136, 138, 133);"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(607, 90, 21, 17));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(136, 138, 133);"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(250, 150, 21, 17));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(136, 138, 133);"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(400, 150, 21, 17));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(136, 138, 133);"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(530, 150, 21, 17));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(136, 138, 133);"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(660, 150, 21, 17));
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(136, 138, 133);"));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(468, 210, 21, 17));
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(136, 138, 133);"));
        MainWindow->setCentralWidget(centralWidget);
        label_trilho1->raise();
        label_trilho2->raise();
        label_trilho3->raise();
        label_trilho4->raise();
        label_trem1->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_trilho4_2->raise();
        label_trilho1_2->raise();
        label_trilho2_2->raise();
        label_trem2->raise();
        horizontalSlider->raise();
        horizontalSlider_2->raise();
        label->raise();
        label_2->raise();
        label_trilho1_3->raise();
        label_trilho1_4->raise();
        label_trilho4_3->raise();
        label_trem3->raise();
        horizontalSlider_3->raise();
        label_3->raise();
        label_trilho4_4->raise();
        label_trilho2_3->raise();
        label_trilho3_2->raise();
        label_trem4->raise();
        horizontalSlider_4->raise();
        label_4->raise();
        label_trilho2_4->raise();
        label_trilho4_5->raise();
        label_trem5->raise();
        horizontalSlider_5->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1066, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_trem1->setText(QApplication::translate("MainWindow", "T1", nullptr));
        label_trilho1->setText(QString());
        label_trilho2->setText(QString());
        label_trilho3->setText(QString());
        label_trilho4->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Ligar", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Parar", nullptr));
        label_trilho4_2->setText(QString());
        label_trilho1_2->setText(QString());
        label_trilho2_2->setText(QString());
        label_trem2->setText(QApplication::translate("MainWindow", "T2", nullptr));
        label->setText(QApplication::translate("MainWindow", "T1", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "T2", nullptr));
        label_trilho1_3->setText(QString());
        label_trilho1_4->setText(QString());
        label_trilho4_3->setText(QString());
        label_trem3->setText(QApplication::translate("MainWindow", "T3", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "T3", nullptr));
        label_trilho4_4->setText(QString());
        label_trilho2_3->setText(QString());
        label_trilho3_2->setText(QString());
        label_trem4->setText(QApplication::translate("MainWindow", "T4", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "T4", nullptr));
        label_trilho2_4->setText(QString());
        label_trilho4_5->setText(QString());
        label_trem5->setText(QApplication::translate("MainWindow", "T5", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "T5", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "2", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "3", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "4", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "5", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "6", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
