/********************************************************************************
** Form generated from reading UI file 'delete.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_H
#define UI_DELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Delete
{
public:
    QFrame *frame;
    QTreeWidget *treeWidget;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Delete)
    {
        if (Delete->objectName().isEmpty())
            Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->resize(600, 450);
        Delete->setMinimumSize(QSize(600, 450));
        Delete->setMaximumSize(QSize(600, 450));
        Delete->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(Delete);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, -1, 601, 451));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(207, 193, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        treeWidget = new QTreeWidget(frame);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(70, 40, 451, 271));
        treeWidget->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 350, 241, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(Delete);

        QMetaObject::connectSlotsByName(Delete);
    } // setupUi

    void retranslateUi(QWidget *Delete)
    {
        Delete->setWindowTitle(QCoreApplication::translate("Delete", "\344\275\240\345\245\275\357\274\214\347\256\241\347\220\206\345\221\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Delete", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Delete: public Ui_Delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_H
