/********************************************************************************
** Form generated from reading UI file 'retrieverpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETRIEVERPASSWORD_H
#define UI_RETRIEVERPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Retrieverpassword
{
public:
    QWidget *horizontalLayoutWidget_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_7;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_6;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QFrame *frame;

    void setupUi(QWidget *Retrieverpassword)
    {
        if (Retrieverpassword->objectName().isEmpty())
            Retrieverpassword->setObjectName(QString::fromUtf8("Retrieverpassword"));
        Retrieverpassword->resize(700, 500);
        Retrieverpassword->setMinimumSize(QSize(700, 500));
        Retrieverpassword->setMaximumSize(QSize(700, 500));
        horizontalLayoutWidget_2 = new QWidget(Retrieverpassword);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(250, 350, 221, 81));
        gridLayout = new QGridLayout(horizontalLayoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 3, 2);

        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 3, 2);

        layoutWidget = new QWidget(Retrieverpassword);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 70, 451, 201));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/white.png);\n"
"background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setEnabled(true);
        lineEdit_5->setReadOnly(true);

        formLayout->setWidget(3, QFormLayout::LabelRole, lineEdit_5);

        lineEdit_8 = new QLineEdit(layoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::LabelRole, lineEdit_8);

        lineEdit_7 = new QLineEdit(layoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_7);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-image: url(:/white.png);\n"
"background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-image: url(:/white.png);\n"
"background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_4);

        lineEdit_6 = new QLineEdit(layoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_6);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/white.png);\n"
"background-color: rgb(255, 255, 255);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        frame = new QFrame(Retrieverpassword);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-10, 0, 891, 501));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/bg2.png);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        horizontalLayoutWidget_2->raise();
        layoutWidget->raise();

        retranslateUi(Retrieverpassword);

        QMetaObject::connectSlotsByName(Retrieverpassword);
    } // setupUi

    void retranslateUi(QWidget *Retrieverpassword)
    {
        Retrieverpassword->setWindowTitle(QCoreApplication::translate("Retrieverpassword", "\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Retrieverpassword", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QCoreApplication::translate("Retrieverpassword", "\347\241\256\350\256\244", nullptr));
        label->setText(QCoreApplication::translate("Retrieverpassword", "\351\202\256\347\256\261\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Retrieverpassword", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Retrieverpassword", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Retrieverpassword", "\347\224\250\346\210\267\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Retrieverpassword: public Ui_Retrieverpassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETRIEVERPASSWORD_H
