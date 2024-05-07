/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTreeWidget *treeWidget;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 1400);
        MainWindow->setMinimumSize(QSize(800, 1400));
        MainWindow->setMaximumSize(QSize(800, 1400));
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow\n"
"{\n"
"background-color: rgb(252, 208, 255);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addWidget(widget);

        treeWidget = new QTreeWidget(widget_3);
        treeWidget->headerItem()->setText(0, QString());
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(treeWidget);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_5 = new QPushButton(widget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout->addWidget(widget_2);


        verticalLayout_2->addWidget(widget_3);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\270\273\347\225\214\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\350\201\224\347\263\273\344\272\272", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\344\270\252\344\272\272\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
