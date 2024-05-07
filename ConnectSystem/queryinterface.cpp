#include "queryinterface.h"
#include "ui_queryinterface.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "detailpage.h"
#include "ui_detailpage.h"

Queryinterface::Queryinterface(string name,QWidget *parent)
    : QMainWindow(parent),username(name)
    , ui(new Ui::Queryinterface)
{
    ui->setupUi(this);
    connect(ui->treeWidget, &QTreeWidget::itemDoubleClicked, this, &Queryinterface::on_treeWidget_itemDoubleClicked);
}

Queryinterface::~Queryinterface()
{
    delete ui;
}

void Queryinterface::on_pushButton_3_clicked()//退出按钮实现
{
    this->close();
    MainWindow *main=new MainWindow(username);
    main->ini();
    main->show();
    this->close();
}
void Queryinterface::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)//获取子项信息的槽函数实现
{
    QString number="";
    QString name="";
    // 检查所选项是否为子项
    if (item->parent() != 0) {
        // 获取子项信息
        if(column==1)
        {
            number=item->text(column);
            name=item->text(column-1);
        }
        if(column==0)
        {
            number=item->text(column+1);
            name=item->text(column);
        }
        Detailpage *detail=new Detailpage(name.toStdString(),number.toStdString(),username,this);
        detail->setWindowModality(Qt::WindowModal);
        this->close();
        detail->show();
    }

}
