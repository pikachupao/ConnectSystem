#ifndef QUERYINTERFACE_H
#define QUERYINTERFACE_H

#include <QMainWindow>
#include "Login.h"

using namespace std;
namespace Ui {
class Queryinterface;
}

class Queryinterface : public QMainWindow
{
    Q_OBJECT

public:
    Queryinterface(string name,QWidget *parent = nullptr);
    ~Queryinterface();
    void on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column);
    Ui::Queryinterface *ui;

private slots:
    void on_pushButton_3_clicked();

private:

    string username;
};

#endif // QUERYINTERFACE_H
