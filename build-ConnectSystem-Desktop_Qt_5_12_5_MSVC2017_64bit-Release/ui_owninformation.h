/********************************************************************************
** Form generated from reading UI file 'owninformation.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNINFORMATION_H
#define UI_OWNINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Owninformation
{
public:
    QWidget *centralwidget;
    QWidget *widget_10;
    QFormLayout *formLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_name;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEdit_email;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *lineEdit_company;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *lineEdit_address;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_15;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *lineEdit_birth;
    QSpacerItem *verticalSpacer_6;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_16;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *lineEdit_social;
    QSpacerItem *verticalSpacer_7;
    QWidget *widget_4;
    QLabel *label_11;
    QLineEdit *lineEdit_10;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_number;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Owninformation)
    {
        if (Owninformation->objectName().isEmpty())
            Owninformation->setObjectName(QString::fromUtf8("Owninformation"));
        Owninformation->setEnabled(true);
        Owninformation->resize(800, 1200);
        Owninformation->setMinimumSize(QSize(800, 1200));
        Owninformation->setMaximumSize(QSize(800, 1200));
        Owninformation->setStyleSheet(QString::fromUtf8("#Owninformation\n"
"{\n"
"background-image: url(:/3.png);\n"
"}"));
        centralwidget = new QWidget(Owninformation);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        widget_10 = new QWidget(centralwidget);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setGeometry(QRect(100, 320, 551, 701));
        formLayout = new QFormLayout(widget_10);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        widget_3 = new QWidget(widget_10);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        lineEdit_name = new QLineEdit(widget_3);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        horizontalLayout_4->addWidget(lineEdit_name);


        formLayout->setWidget(0, QFormLayout::SpanningRole, widget_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::LabelRole, verticalSpacer_2);

        widget_6 = new QWidget(widget_10);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_12 = new QSpacerItem(0, 0, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_17);

        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        lineEdit_email = new QLineEdit(widget_6);
        lineEdit_email->setObjectName(QString::fromUtf8("lineEdit_email"));

        horizontalLayout_6->addWidget(lineEdit_email);


        formLayout->setWidget(4, QFormLayout::SpanningRole, widget_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::LabelRole, verticalSpacer_3);

        widget_7 = new QWidget(widget_10);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);

        label_7 = new QLabel(widget_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);

        lineEdit_company = new QLineEdit(widget_7);
        lineEdit_company->setObjectName(QString::fromUtf8("lineEdit_company"));

        horizontalLayout_7->addWidget(lineEdit_company);


        formLayout->setWidget(6, QFormLayout::SpanningRole, widget_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(7, QFormLayout::LabelRole, verticalSpacer_4);

        widget_8 = new QWidget(widget_10);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_8 = new QHBoxLayout(widget_8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);

        label_8 = new QLabel(widget_8);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);

        lineEdit_address = new QLineEdit(widget_8);
        lineEdit_address->setObjectName(QString::fromUtf8("lineEdit_address"));

        horizontalLayout_8->addWidget(lineEdit_address);


        formLayout->setWidget(8, QFormLayout::SpanningRole, widget_8);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(9, QFormLayout::LabelRole, verticalSpacer_5);

        widget_9 = new QWidget(widget_10);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_9 = new QHBoxLayout(widget_9);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_15);

        label_9 = new QLabel(widget_9);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        lineEdit_birth = new QLineEdit(widget_9);
        lineEdit_birth->setObjectName(QString::fromUtf8("lineEdit_birth"));

        horizontalLayout_9->addWidget(lineEdit_birth);


        formLayout->setWidget(10, QFormLayout::SpanningRole, widget_9);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(11, QFormLayout::LabelRole, verticalSpacer_6);

        widget_11 = new QWidget(widget_10);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        horizontalLayout_10 = new QHBoxLayout(widget_11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_16);

        label_10 = new QLabel(widget_11);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_11);

        lineEdit_social = new QLineEdit(widget_11);
        lineEdit_social->setObjectName(QString::fromUtf8("lineEdit_social"));

        horizontalLayout_10->addWidget(lineEdit_social);


        formLayout->setWidget(12, QFormLayout::SpanningRole, widget_11);

        verticalSpacer_7 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(13, QFormLayout::LabelRole, verticalSpacer_7);

        widget_4 = new QWidget(widget_10);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        label_11 = new QLabel(widget_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(58, 11, 24, 19));
        lineEdit_10 = new QLineEdit(widget_4);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(150, 10, 371, 25));

        formLayout->setWidget(14, QFormLayout::SpanningRole, widget_4);

        widget_5 = new QWidget(widget_10);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        label_5 = new QLabel(widget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        lineEdit_number = new QLineEdit(widget_5);
        lineEdit_number->setObjectName(QString::fromUtf8("lineEdit_number"));

        horizontalLayout_5->addWidget(lineEdit_number);


        formLayout->setWidget(2, QFormLayout::SpanningRole, widget_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::LabelRole, verticalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 50, 211, 121));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(160, 210, 461, 121));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 160, 121, 41));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(210, 1050, 351, 91));
        widget->setMaximumSize(QSize(1099, 16777215));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        Owninformation->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Owninformation);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Owninformation->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEdit_name, lineEdit_email);
        QWidget::setTabOrder(lineEdit_email, lineEdit_company);
        QWidget::setTabOrder(lineEdit_company, lineEdit_address);
        QWidget::setTabOrder(lineEdit_address, lineEdit_birth);
        QWidget::setTabOrder(lineEdit_birth, lineEdit_social);
        QWidget::setTabOrder(lineEdit_social, lineEdit_10);
        QWidget::setTabOrder(lineEdit_10, textEdit);
        QWidget::setTabOrder(textEdit, lineEdit_number);
        QWidget::setTabOrder(lineEdit_number, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(Owninformation);

        QMetaObject::connectSlotsByName(Owninformation);
    } // setupUi

    void retranslateUi(QMainWindow *Owninformation)
    {
        Owninformation->setWindowTitle(QCoreApplication::translate("Owninformation", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("Owninformation", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_name->setToolTip(QCoreApplication::translate("Owninformation", "<html><head/><body><p>\346\255\244\351\241\271\344\270\272\345\277\205\345\241\253</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_name->setText(QString());
        lineEdit_name->setPlaceholderText(QCoreApplication::translate("Owninformation", "\346\255\244\351\241\271\345\277\205\351\241\273\350\276\223\345\205\245", nullptr));
        label_6->setText(QCoreApplication::translate("Owninformation", "<html><head/><body><p><span style=\" font-size:11pt;\">\351\202\256\347\256\261</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_email->setToolTip(QCoreApplication::translate("Owninformation", "<html><head/><body><p>\350\213\245\346\262\241\346\234\211\346\254\241\347\233\270\345\210\231\350\276\223\345\205\245\346\227\240</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_email->setText(QString());
        lineEdit_email->setPlaceholderText(QCoreApplication::translate("Owninformation", "\350\213\245\346\262\241\346\234\211\346\254\241\347\233\270\345\210\231\350\276\223\345\205\245\346\227\240", nullptr));
        label_7->setText(QCoreApplication::translate("Owninformation", "<html><head/><body><p><span style=\" font-size:11pt;\">\345\205\254\345\217\270</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_company->setToolTip(QCoreApplication::translate("Owninformation", "<html><head/><body><p>\350\213\245\346\262\241\346\234\211\346\254\241\347\233\270\345\210\231\350\276\223\345\205\245\346\227\240</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_company->setText(QString());
        lineEdit_company->setPlaceholderText(QCoreApplication::translate("Owninformation", "\350\213\245\346\262\241\346\234\211\346\254\241\347\233\270\345\210\231\350\276\223\345\205\245\346\227\240", nullptr));
        label_8->setText(QCoreApplication::translate("Owninformation", "<html><head/><body><p><span style=\" font-size:11pt;\">\344\275\217\345\235\200</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_address->setToolTip(QCoreApplication::translate("Owninformation", "<html><head/><body><p>\350\213\245\346\262\241\346\234\211\346\254\241\347\233\270\345\210\231\350\276\223\345\205\245\346\227\240</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_address->setText(QString());
        lineEdit_address->setPlaceholderText(QCoreApplication::translate("Owninformation", "\350\213\245\346\262\241\346\234\211\346\254\241\347\233\270\345\210\231\350\276\223\345\205\245\346\227\240", nullptr));
        label_9->setText(QCoreApplication::translate("Owninformation", "<html><head/><body><p><span style=\" font-size:11pt;\">\347\224\237\346\227\245</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_birth->setToolTip(QCoreApplication::translate("Owninformation", "<html><head/><body><p>\350\213\245\346\262\241\346\234\211\346\254\241\347\233\270\345\210\231\350\276\223\345\205\245\346\227\240</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_birth->setText(QString());
        lineEdit_birth->setPlaceholderText(QCoreApplication::translate("Owninformation", "\350\213\245\346\262\241\346\234\211\346\254\241\347\233\270\345\210\231\350\276\223\345\205\245\346\227\240", nullptr));
        label_10->setText(QCoreApplication::translate("Owninformation", "<html><head/><body><p><span style=\" font-size:11pt;\">\347\244\276\344\272\244</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_social->setToolTip(QCoreApplication::translate("Owninformation", "<html><head/><body><p>\350\213\245\346\262\241\346\234\211\346\254\241\347\233\270\345\210\231\350\276\223\345\205\245\346\227\240</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_social->setText(QString());
        lineEdit_social->setPlaceholderText(QCoreApplication::translate("Owninformation", "\350\213\245\346\262\241\346\234\211\346\254\241\347\233\270\345\210\231\350\276\223\345\205\245\346\227\240", nullptr));
        label_11->setText(QCoreApplication::translate("Owninformation", "<html><head/><body><p>QQ</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_10->setToolTip(QCoreApplication::translate("Owninformation", "<html><head/><body><p>\346\255\244\351\241\271\344\270\272\345\277\205\345\241\253</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_10->setText(QString());
        lineEdit_10->setPlaceholderText(QCoreApplication::translate("Owninformation", "\350\213\245\346\262\241\346\234\211\346\254\241\347\233\270\345\210\231\350\276\223\345\205\245\346\227\240", nullptr));
        label_5->setText(QCoreApplication::translate("Owninformation", "<html><head/><body><p><span style=\" font-size:11pt;\">\347\224\265\350\257\235</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_number->setToolTip(QCoreApplication::translate("Owninformation", "<html><head/><body><p>\346\255\244\351\241\271\344\270\272\345\277\205\345\241\253</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_number->setText(QString());
        lineEdit_number->setPlaceholderText(QCoreApplication::translate("Owninformation", "\346\255\244\351\241\271\345\277\205\351\241\273\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("Owninformation", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("Owninformation", "<html><head/><body><p><span style=\" font-size:11pt;\">\344\270\252\344\272\272\347\256\200\344\273\213</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Owninformation", "\344\277\235\345\255\230", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Owninformation", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Owninformation: public Ui_Owninformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNINFORMATION_H
