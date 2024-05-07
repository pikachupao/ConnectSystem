#ifndef DELETE_H
#define DELETE_H

#include <QWidget>
#include <QTreeWidgetItem>
#include "Login.h"

namespace Ui {
class Delete;
}

class Delete : public QWidget
{
    Q_OBJECT

public:
    explicit Delete(QWidget *parent = nullptr);
    ~Delete();

private slots:
    void on_pushButton_2_clicked();
    void on_treeWidget_itemDoubleClick(QTreeWidgetItem *item, int column);
    void removeItem(QTreeWidgetItem *item);


private:
    Ui::Delete *ui;
};

void del(string name,string password,string email);
void ini(QTreeWidgetItem *item);

#endif // DELETE_H
