/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glframework.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button_walk;
    QPushButton *button_yes;
    QPushButton *button_run;
    QPushButton *centeryMinus;
    QPushButton *eyezAdd;
    QPushButton *eyezMinus;
    QPushButton *centerxAdd;
    QPushButton *centerzMinus;
    QPushButton *centeryAdd;
    QPushButton *button_Standby;
    QPushButton *eyeyMinus;
    QPushButton *centerxMinus;
    QPushButton *eyeyAdd;
    QPushButton *centerzAdd;
    QPushButton *button_transfomation;
    QPushButton *eyexAdd;
    QPushButton *eyexMinus;
    QCheckBox *drawFog;
    QPushButton *button_Movehand;
    QPushButton *button_summonSword;
    glframework *widget_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1646, 1151);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-10, -10, 235, 466));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button_walk = new QPushButton(gridLayoutWidget);
        button_walk->setObjectName(QStringLiteral("button_walk"));

        gridLayout->addWidget(button_walk, 9, 0, 1, 1);

        button_yes = new QPushButton(gridLayoutWidget);
        button_yes->setObjectName(QStringLiteral("button_yes"));

        gridLayout->addWidget(button_yes, 9, 1, 1, 1);

        button_run = new QPushButton(gridLayoutWidget);
        button_run->setObjectName(QStringLiteral("button_run"));

        gridLayout->addWidget(button_run, 8, 1, 1, 1);

        centeryMinus = new QPushButton(gridLayoutWidget);
        centeryMinus->setObjectName(QStringLiteral("centeryMinus"));

        gridLayout->addWidget(centeryMinus, 4, 1, 1, 1);

        eyezAdd = new QPushButton(gridLayoutWidget);
        eyezAdd->setObjectName(QStringLiteral("eyezAdd"));

        gridLayout->addWidget(eyezAdd, 2, 0, 1, 1);

        eyezMinus = new QPushButton(gridLayoutWidget);
        eyezMinus->setObjectName(QStringLiteral("eyezMinus"));

        gridLayout->addWidget(eyezMinus, 2, 1, 1, 1);

        centerxAdd = new QPushButton(gridLayoutWidget);
        centerxAdd->setObjectName(QStringLiteral("centerxAdd"));

        gridLayout->addWidget(centerxAdd, 3, 0, 1, 1);

        centerzMinus = new QPushButton(gridLayoutWidget);
        centerzMinus->setObjectName(QStringLiteral("centerzMinus"));

        gridLayout->addWidget(centerzMinus, 5, 1, 1, 1);

        centeryAdd = new QPushButton(gridLayoutWidget);
        centeryAdd->setObjectName(QStringLiteral("centeryAdd"));

        gridLayout->addWidget(centeryAdd, 4, 0, 1, 1);

        button_Standby = new QPushButton(gridLayoutWidget);
        button_Standby->setObjectName(QStringLiteral("button_Standby"));

        gridLayout->addWidget(button_Standby, 6, 0, 1, 1);

        eyeyMinus = new QPushButton(gridLayoutWidget);
        eyeyMinus->setObjectName(QStringLiteral("eyeyMinus"));

        gridLayout->addWidget(eyeyMinus, 1, 1, 1, 1);

        centerxMinus = new QPushButton(gridLayoutWidget);
        centerxMinus->setObjectName(QStringLiteral("centerxMinus"));

        gridLayout->addWidget(centerxMinus, 3, 1, 1, 1);

        eyeyAdd = new QPushButton(gridLayoutWidget);
        eyeyAdd->setObjectName(QStringLiteral("eyeyAdd"));

        gridLayout->addWidget(eyeyAdd, 1, 0, 1, 1);

        centerzAdd = new QPushButton(gridLayoutWidget);
        centerzAdd->setObjectName(QStringLiteral("centerzAdd"));

        gridLayout->addWidget(centerzAdd, 5, 0, 1, 1);

        button_transfomation = new QPushButton(gridLayoutWidget);
        button_transfomation->setObjectName(QStringLiteral("button_transfomation"));

        gridLayout->addWidget(button_transfomation, 8, 0, 1, 1);

        eyexAdd = new QPushButton(gridLayoutWidget);
        eyexAdd->setObjectName(QStringLiteral("eyexAdd"));

        gridLayout->addWidget(eyexAdd, 0, 0, 1, 1);

        eyexMinus = new QPushButton(gridLayoutWidget);
        eyexMinus->setObjectName(QStringLiteral("eyexMinus"));

        gridLayout->addWidget(eyexMinus, 0, 1, 1, 1);

        drawFog = new QCheckBox(gridLayoutWidget);
        drawFog->setObjectName(QStringLiteral("drawFog"));

        gridLayout->addWidget(drawFog, 7, 0, 1, 1);

        button_Movehand = new QPushButton(gridLayoutWidget);
        button_Movehand->setObjectName(QStringLiteral("button_Movehand"));

        gridLayout->addWidget(button_Movehand, 6, 1, 1, 1);

        button_summonSword = new QPushButton(gridLayoutWidget);
        button_summonSword->setObjectName(QStringLiteral("button_summonSword"));

        gridLayout->addWidget(button_summonSword, 7, 1, 1, 1);

        widget_2 = new glframework(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(460, -10, 1151, 1051));

        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1646, 29));
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
        button_walk->setText(QApplication::translate("MainWindow", "walk", 0));
        button_yes->setText(QApplication::translate("MainWindow", "yeah", 0));
        button_run->setText(QApplication::translate("MainWindow", "run", 0));
        centeryMinus->setText(QApplication::translate("MainWindow", "Cy-", 0));
        eyezAdd->setText(QApplication::translate("MainWindow", "eyez+", 0));
        eyezMinus->setText(QApplication::translate("MainWindow", "eyez-", 0));
        centerxAdd->setText(QApplication::translate("MainWindow", "Cx+", 0));
        centerzMinus->setText(QApplication::translate("MainWindow", "Cz-", 0));
        centeryAdd->setText(QApplication::translate("MainWindow", "Cy+", 0));
        button_Standby->setText(QApplication::translate("MainWindow", "Standby", 0));
        eyeyMinus->setText(QApplication::translate("MainWindow", "eyey-", 0));
        centerxMinus->setText(QApplication::translate("MainWindow", "Cx-", 0));
        eyeyAdd->setText(QApplication::translate("MainWindow", "eyey+", 0));
        centerzAdd->setText(QApplication::translate("MainWindow", "Cz+", 0));
        button_transfomation->setText(QApplication::translate("MainWindow", "transformation", 0));
        eyexAdd->setText(QApplication::translate("MainWindow", "eyex+", 0));
        eyexMinus->setText(QApplication::translate("MainWindow", "eyex-", 0));
        drawFog->setText(QApplication::translate("MainWindow", "drawFog", 0));
        button_Movehand->setText(QApplication::translate("MainWindow", "Move Hand", 0));
        button_summonSword->setText(QApplication::translate("MainWindow", "summonSword", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
