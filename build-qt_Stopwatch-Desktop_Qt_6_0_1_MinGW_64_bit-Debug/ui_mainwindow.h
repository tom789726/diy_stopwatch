/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Button_start;
    QLabel *label_time;
    QPushButton *Button_reset;
    QPushButton *Button_laps;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(443, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Button_start = new QPushButton(centralwidget);
        Button_start->setObjectName(QString::fromUtf8("Button_start"));
        Button_start->setGeometry(QRect(40, 290, 131, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(14);
        Button_start->setFont(font);
        label_time = new QLabel(centralwidget);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setGeometry(QRect(60, 100, 341, 141));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(36);
        font1.setBold(true);
        label_time->setFont(font1);
        label_time->setAlignment(Qt::AlignCenter);
        Button_reset = new QPushButton(centralwidget);
        Button_reset->setObjectName(QString::fromUtf8("Button_reset"));
        Button_reset->setGeometry(QRect(250, 10, 131, 61));
        Button_reset->setFont(font);
        Button_laps = new QPushButton(centralwidget);
        Button_laps->setObjectName(QString::fromUtf8("Button_laps"));
        Button_laps->setGeometry(QRect(280, 290, 131, 61));
        Button_laps->setFont(font);
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(40, 360, 371, 181));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 443, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button_start->setText(QCoreApplication::translate("MainWindow", "START / STOP", nullptr));
        label_time->setText(QString());
        Button_reset->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        Button_laps->setText(QCoreApplication::translate("MainWindow", "LAPS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
