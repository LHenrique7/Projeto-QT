/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *resultLabel;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *conversionType;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *inputValue;
    QPushButton *convertButton;
    QMenuBar *menubar;
    QMenu *menuConversor;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(406, 290, 60, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 290, 69, 20));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(180, 130, 441, 151));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        conversionType = new QComboBox(widget);
        conversionType->addItem(QString());
        conversionType->addItem(QString());
        conversionType->addItem(QString());
        conversionType->addItem(QString());
        conversionType->setObjectName("conversionType");

        verticalLayout->addWidget(conversionType);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        inputValue = new QLineEdit(widget);
        inputValue->setObjectName("inputValue");

        horizontalLayout->addWidget(inputValue);

        convertButton = new QPushButton(widget);
        convertButton->setObjectName("convertButton");

        horizontalLayout->addWidget(convertButton);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuConversor = new QMenu(menubar);
        menuConversor->setObjectName("menuConversor");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuConversor->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        resultLabel->setText(QCoreApplication::translate("MainWindow", "----------", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Resultado:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Selecione a convers\303\243o:", nullptr));
        conversionType->setItemText(0, QCoreApplication::translate("MainWindow", "Celsius para Fahrenheit", nullptr));
        conversionType->setItemText(1, QCoreApplication::translate("MainWindow", "Fahrenheit para Celsius", nullptr));
        conversionType->setItemText(2, QCoreApplication::translate("MainWindow", "Metros para Quil\303\264metros", nullptr));
        conversionType->setItemText(3, QCoreApplication::translate("MainWindow", "Quilos para gramas", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "Entrada:", nullptr));
        convertButton->setText(QCoreApplication::translate("MainWindow", "Converter", nullptr));
        menuConversor->setTitle(QCoreApplication::translate("MainWindow", "Conversor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
