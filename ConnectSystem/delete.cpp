#include "delete.h"
#include "ui_delete.h"
#include <qdebug.h>
using namespace std;

Delete::Delete(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Delete)
{
    ui->setupUi(this);
    ui->treeWidget->setHeaderLabels(QStringList()<<"用户名"<<"密码"<<"邮箱");
    ifstream in;
    in.open("User.bat",ios::in);
    string name,password,email;
    QString now;
    while(getline(in,name))
    {
        getline(in,password);
        getline(in,email);
        QTreeWidgetItem * item = new QTreeWidgetItem(QStringList()<<now.fromStdString(name)<<now.fromStdString(password)<<now.fromStdString(email));
        ui->treeWidget->addTopLevelItem(item);
    }
    in.close();
    connect(ui->treeWidget, &QTreeWidget::itemDoubleClicked, this, &Delete::on_treeWidget_itemDoubleClick);
}
Delete::~Delete()
{
    delete ui;
}

void Delete::on_treeWidget_itemDoubleClick(QTreeWidgetItem *item, int column)//获取子项信息的槽函数实现
{
    QString password;
    QString email;
    QString name;
    if(column==0)
    {
        name=item->text(column);
        password=item->text(column+1);
        email=item->text(column+2);
    }
    if(column==1)
    {
        name=item->text(column-1);
        password=item->text(column);
        email=item->text(column+1);
    }
    if(column==-1)
    {
        name=item->text(column+1);
        password=item->text(column+2);
        email=item->text(column+3);
    }
    if(column==2)
    {
        name=item->text(column-2);
        password=item->text(column-1);
        email=item->text(column);
    }
    if(QMessageBox::Yes==QMessageBox::question(this,"提示","是否删除",QMessageBox::Yes|QMessageBox::No))
    {
        del(name.toStdString(),password.toStdString(),email.toStdString());
        this->removeItem(item);
    }
}

void Delete::on_pushButton_2_clicked()//退出按钮实现
{
    this->close();
}

void del(string name,string password,string email)//删除实现
{
    string name_f;
    string password_f;
    string email_f;
    ifstream in("User.bat");
    ofstream out;
    out.open("Usernew.bat",ios::trunc);//初始化替代文件
    while(getline(in,name_f))
    {
        getline(in,password_f);
        getline(in,email_f);
        if(!(name_f==name&&password_f==password&&email_f==email))
        {
            out<<name_f<<"\n"<<password_f<<"\n"<<email_f<<"\n";
        }
    }
    in.close();
    out.close();
    remove("User.bat");
    rename("Usernew.bat", "User.bat");
    string file=name+"connecters.bat";
    const char *file_c=file.c_str();
    remove(file_c);
    file=name+"bestconnexters.bat";
    file_c=file.c_str();
    remove(file_c);
}

void Delete::removeItem(QTreeWidgetItem *item)//删除节点，可视化实现
{
    int count = item->childCount();
    if(count==0)//没有子节点，直接删除
    {
        delete item;
        return;
    }
    for(int i=0; i<count; i++)
    {
        QTreeWidgetItem *childItem = item->child(0);//删除子节点
        removeItem(childItem);
    }
    delete item;//最后将自己删除
    return;
}
