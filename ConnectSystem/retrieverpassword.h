#ifndef RETRIEVERPASSWORD_H
#define RETRIEVERPASSWORD_H

#include <QWidget>
using namespace std;
namespace Ui {
class Retrieverpassword;
}

class Retrieverpassword : public QWidget
{
    Q_OBJECT

public:
    explicit Retrieverpassword(QWidget *parent = nullptr);
    ~Retrieverpassword();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

public:
    Ui::Retrieverpassword *ui;
};
int compare(string str);
void writeUser(string name,string email,string password);
int check(string namebase);
#endif // RETRIEVERPASSWORD_H
