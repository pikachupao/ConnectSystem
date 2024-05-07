#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include<qstring.h>
#include<iostream>
#include <QMessageBox>
#include <cstring>
#include <string.h>
#include <fstream>
#include <cstring>
#include <qmainwindow.h>
#include "mainwindow.h"
#include "retrieverpassword.h"
#include <sstream>
using namespace std;
#pragma execution_character_set("UTF-8")//设置ui界面文字为中文
void getusers();
QT_BEGIN_NAMESPACE
namespace Ui {
class Login;
}
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

    Retrieverpassword retrie;


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_toolButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Login *ui;
};
#endif // LOGIN_H
