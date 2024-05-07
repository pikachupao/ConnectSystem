#ifndef DETAILPAGE_H
#define DETAILPAGE_H

#include <QMainWindow>
#pragma execution_character_set("UTF-8")//设置ui界面文字为中文
using namespace std;

namespace Ui {
class Detailpage;
}

class Detailpage : public QMainWindow
{
    Q_OBJECT

public:
    Detailpage(string conname, string connumber,string Username,QWidget *parent = nullptr);
    ~Detailpage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Detailpage *ui;
    string conname;
    string connumber;
    string username;
};

#endif // DETAILPAGE_H
