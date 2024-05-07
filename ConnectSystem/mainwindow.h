#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidgetItem>
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <QDebug>
#include <QCollator>
#include <QLocale>
using namespace std;
#pragma execution_character_set("GB2312")//设置ui界面文字为中文

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE
typedef struct connecters
{
    string currtext="";
    string currname="";
    string currnumber="";
    string curremail="";
    string currcompany="";
    string curraddress="";
    string currbirth="";
    string currsocial="";
    string check="";
    struct connecters *next;
}*Connecters,connecters;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(string name,QWidget *parent = nullptr);
    ~MainWindow();
    void on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);
    void ini();
    QString CNToPY(const QString &cnstr);



private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();



private:
    Ui::MainWindow *ui;
    string username;
};
void QuickSort(int sum);
int IncludeChinese(const char *str);
#endif // MAINWINDOW_H
