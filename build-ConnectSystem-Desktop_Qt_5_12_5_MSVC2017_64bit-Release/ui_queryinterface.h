/********************************************************************************
** Form generated from reading UI file 'queryinterface.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYINTERFACE_H
#define UI_QUERYINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Queryinterface
{
public:
    QWidget *centralwidget;
    QTreeWidget *treeWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QFrame *frame;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Queryinterface)
    {
        if (Queryinterface->objectName().isEmpty())
            Queryinterface->setObjectName(QString::fromUtf8("Queryinterface"));
        Queryinterface->resize(600, 600);
        Queryinterface->setMinimumSize(QSize(600, 600));
        Queryinterface->setMaximumSize(QSize(600, 922));
        Queryinterface->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Queryinterface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(600, 900));
        centralwidget->setMaximumSize(QSize(600, 900));
        treeWidget = new QTreeWidget(centralwidget);
        treeWidget->headerItem()->setText(0, QString());
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(30, 50, 551, 411));
        treeWidget->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 510, 341, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(pushButton_3);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-110, -140, 721, 971));
        frame->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 170, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Queryinterface->setCentralWidget(centralwidget);
        frame->raise();
        treeWidget->raise();
        layoutWidget->raise();
        statusbar = new QStatusBar(Queryinterface);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Queryinterface->setStatusBar(statusbar);

        retranslateUi(Queryinterface);

        QMetaObject::connectSlotsByName(Queryinterface);
    } // setupUi

    void retranslateUi(QMainWindow *Queryinterface)
    {
        Queryinterface->setWindowTitle(QCoreApplication::translate("Queryinterface", "\346\237\245\350\257\242", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Queryinterface", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Queryinterface: public Ui_Queryinterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYINTERFACE_H
