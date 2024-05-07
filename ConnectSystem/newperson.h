#ifndef NEWPERSON_H
#define NEWPERSON_H

#include <QMainWindow>
#include "Login.h"

namespace Ui {
class Newperson;
}

class Newperson : public QMainWindow
{
    Q_OBJECT

public:
    Newperson(string username,QWidget *parent = nullptr);
    int static checknumber(string num);
    ~Newperson();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Newperson *ui;
    string currentname;
    string num;
};

#endif // NEWPERSON_H
