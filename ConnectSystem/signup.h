#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include <stdlib.h>
using namespace std;
namespace Ui {
class Signup;
}

class Signup : public QWidget
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Signup *ui;
};
int checkusername(string name);
#endif // SIGNUP_H
