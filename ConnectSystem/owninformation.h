#ifndef OWNINFORMATION_H
#define OWNINFORMATION_H

#include <QMainWindow>
using namespace std;
namespace Ui {
class Owninformation;
}

class Owninformation : public QMainWindow
{
    Q_OBJECT

public:
    explicit Owninformation(string username,QWidget *parent = nullptr);
    ~Owninformation();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Owninformation *ui;
    string username;
};

#endif // OWNINFORMATION_H
