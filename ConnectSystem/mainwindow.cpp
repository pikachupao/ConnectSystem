#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Login.h"
#include "newperson.h"
#include "ui_newperson.h"
#include "detailpage.h"
#include "ui_detailpage.h"
#include "cnlhelper.h"
#include "owninformation.h"
#include "ui_owninformation.h"
#include "queryinterface.h"
#include "ui_queryinterface.h"

connecters connects[10000];
int i=0;
QLocale local(QLocale::Chinese);
QCollator collator(local);

MainWindow::MainWindow(string name,QWidget *parent)
    : QMainWindow(parent),username(name)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ini();
    connect(ui->treeWidget, &QTreeWidget::itemDoubleClicked, this, &MainWindow::on_treeWidget_itemDoubleClicked);
}

void MainWindow::on_treeWidget_itemDoubleClicked(QTreeWidgetItem *item, int column)//获取子项信息的槽函数实现
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
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_5_clicked()//新建联系人实现
{
    Newperson *newperson= new Newperson(username);
    newperson->setWindowModality(Qt::WindowModal);
    newperson->show();
    this->close();
}

void MainWindow::ini()//初始化
{
    ui->treeWidget->clear();
    QString Username_c=Username_c.fromStdString(username);
    this->setWindowTitle(Username_c);
    //设置水平头
    QString Username=QString::fromStdString(username);
    this->setToolTip(Username);
    ui->treeWidget->setHeaderLabels(QStringList()<<"联系人"<<"电话号码");
    //加载节点
    QTreeWidgetItem * bestitem = new QTreeWidgetItem(QStringList()<<"特别关心");
    ui->treeWidget->addTopLevelItem(bestitem);
    QTreeWidgetItem * signitem = new QTreeWidgetItem(QStringList()<<"*");
    ui->treeWidget->addTopLevelItem(signitem);
    QTreeWidgetItem * Aitem = new QTreeWidgetItem(QStringList()<<"A");
    ui->treeWidget->addTopLevelItem(Aitem);
    QTreeWidgetItem * Bitem = new QTreeWidgetItem(QStringList()<<"B");
    ui->treeWidget->addTopLevelItem(Bitem);
    QTreeWidgetItem * Citem = new QTreeWidgetItem(QStringList()<<"C");
    ui->treeWidget->addTopLevelItem(Citem);
    QTreeWidgetItem * Ditem = new QTreeWidgetItem(QStringList()<<"D");
    ui->treeWidget->addTopLevelItem(Ditem);
    QTreeWidgetItem * Eitem = new QTreeWidgetItem(QStringList()<<"E");
    ui->treeWidget->addTopLevelItem(Eitem);
    QTreeWidgetItem * Fitem = new QTreeWidgetItem(QStringList()<<"F");
    ui->treeWidget->addTopLevelItem(Fitem);
    QTreeWidgetItem * Gitem = new QTreeWidgetItem(QStringList()<<"G");
    ui->treeWidget->addTopLevelItem(Gitem);
    QTreeWidgetItem * Hitem = new QTreeWidgetItem(QStringList()<<"H");
    ui->treeWidget->addTopLevelItem(Hitem);
    QTreeWidgetItem * Iitem = new QTreeWidgetItem(QStringList()<<"I");
    ui->treeWidget->addTopLevelItem(Iitem);
    QTreeWidgetItem * Jitem = new QTreeWidgetItem(QStringList()<<"J");
    ui->treeWidget->addTopLevelItem(Jitem);
    QTreeWidgetItem * Kitem = new QTreeWidgetItem(QStringList()<<"K");
    ui->treeWidget->addTopLevelItem(Kitem);
    QTreeWidgetItem * Litem = new QTreeWidgetItem(QStringList()<<"L");
    ui->treeWidget->addTopLevelItem(Litem);
    QTreeWidgetItem * Mitem = new QTreeWidgetItem(QStringList()<<"M");
    ui->treeWidget->addTopLevelItem(Mitem);
    QTreeWidgetItem * Nitem = new QTreeWidgetItem(QStringList()<<"N");
    ui->treeWidget->addTopLevelItem(Nitem);
    QTreeWidgetItem * Oitem = new QTreeWidgetItem(QStringList()<<"O");
    ui->treeWidget->addTopLevelItem(Oitem);
    QTreeWidgetItem * Pitem = new QTreeWidgetItem(QStringList()<<"P");
    ui->treeWidget->addTopLevelItem(Pitem);
    QTreeWidgetItem * Qitem = new QTreeWidgetItem(QStringList()<<"Q");
    ui->treeWidget->addTopLevelItem(Qitem);
    QTreeWidgetItem * Ritem = new QTreeWidgetItem(QStringList()<<"R");
    ui->treeWidget->addTopLevelItem(Ritem);
    QTreeWidgetItem * Sitem = new QTreeWidgetItem(QStringList()<<"S");
    ui->treeWidget->addTopLevelItem(Sitem);
    QTreeWidgetItem * Titem = new QTreeWidgetItem(QStringList()<<"T");
    ui->treeWidget->addTopLevelItem(Titem);
    QTreeWidgetItem * Uitem = new QTreeWidgetItem(QStringList()<<"U");
    ui->treeWidget->addTopLevelItem(Uitem);
    QTreeWidgetItem * Vitem = new QTreeWidgetItem(QStringList()<<"V");
    ui->treeWidget->addTopLevelItem(Vitem);
    QTreeWidgetItem * Witem = new QTreeWidgetItem(QStringList()<<"W");
    ui->treeWidget->addTopLevelItem(Witem);
    QTreeWidgetItem * Xitem = new QTreeWidgetItem(QStringList()<<"X");
    ui->treeWidget->addTopLevelItem(Xitem);
    QTreeWidgetItem * Yitem = new QTreeWidgetItem(QStringList()<<"Y");
    ui->treeWidget->addTopLevelItem(Yitem);
    QTreeWidgetItem * Zitem = new QTreeWidgetItem(QStringList()<<"Z");
    ui->treeWidget->addTopLevelItem(Zitem);
    //追加子节点
    string file=username+"connecters.bat";
    ifstream in;
    in.open(file,ios::in);
    string currtext="";
    string currname="";
    string currnumber="";
    string curremail="";
    string currcompany="";
    string curraddress="";
    string currbirth="";
    string currsocial="";
    QString Currtext="";
    i=0;
    while(getline(in,currtext))//逐行读取，直到结尾或者相等
    {
        getline(in,currname);
        getline(in,currnumber);
        getline(in,curremail);
        getline(in,currcompany);
        getline(in,curraddress);
        getline(in,currbirth);
        getline(in,currsocial);
        connects[i].currtext=currtext;
        connects[i].currname=currname;
        connects[i].currnumber=currnumber;
        connects[i].curremail=curremail;
        connects[i].currcompany=currcompany;
        connects[i].curraddress=curraddress;
        connects[i].currbirth=currbirth;
        connects[i].currsocial=currsocial;

        if(!IncludeChinese(connects[i].currname.c_str()))
        {
            connects[i].check=connects[i].currname;
        }
        else
        {
            CNLHelper *cnl=new CNLHelper;
            Currtext=Currtext.fromStdString(connects[i].currname);
            Currtext=cnl->CNToPY(Currtext);
            connects[i].check=Currtext.toStdString();
        }
        i++;
    }
    int sum=i;
    QuickSort(sum);
    in.close();
    for(int j=0;j<i;j++)
    {
        if(connects[j].check[0]=='a'||connects[j].check[0]=='A')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Aitem->addChild(a);
        }
        else if(connects[j].check[0]=='b'||connects[j].check[0]=='B')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Bitem->addChild(a);
        }
        else if(connects[j].check[0]=='c'||connects[j].check[0]=='C')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Citem->addChild(a);
        }
        else if(connects[j].check[0]=='d'||connects[j].check[0]=='D')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Ditem->addChild(a);
        }
        else if(connects[j].check[0]=='e'||connects[j].check[0]=='E')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Eitem->addChild(a);
        }
        else if(connects[j].check[0]=='f'||connects[j].check[0]=='F')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Fitem->addChild(a);
        }
        else if(connects[j].check[0]=='g'||connects[j].check[0]=='G')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Gitem->addChild(a);
        }
        else if(connects[j].check[0]=='h'||connects[j].check[0]=='H')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Hitem->addChild(a);
        }
        else if(connects[j].check[0]=='a'||connects[j].check[0]=='A')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Aitem->addChild(a);
        }
        else if(connects[j].check[0]=='i'||connects[j].check[0]=='I')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Iitem->addChild(a);
        }
        else if(connects[j].check[0]=='j'||connects[j].check[0]=='J')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Jitem->addChild(a);
        }
        else if(connects[j].check[0]=='l'||connects[j].check[0]=='L')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Litem->addChild(a);
        }
        else if(connects[j].check[0]=='M'||connects[j].check[0]=='m')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Mitem->addChild(a);
        }
        else if(connects[j].check[0]=='n'||connects[j].check[0]=='N')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Nitem->addChild(a);
        }
        else if(connects[j].check[0]=='o'||connects[j].check[0]=='O')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Oitem->addChild(a);
        }
        else if(connects[j].check[0]=='p'||connects[j].check[0]=='P')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Pitem->addChild(a);
        }
        else if(connects[j].check[0]=='q'||connects[j].check[0]=='Q')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Qitem->addChild(a);
        }
        else if(connects[j].check[0]=='r'||connects[j].check[0]=='R')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Ritem->addChild(a);
        }
        else if(connects[j].check[0]=='s'||connects[j].check[0]=='S')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Sitem->addChild(a);
        }
        else if(connects[j].check[0]=='t'||connects[j].check[0]=='T')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Titem->addChild(a);
        }
        else if(connects[j].check[0]=='u'||connects[j].check[0]=='U')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Uitem->addChild(a);
        }
        else if(connects[j].check[0]=='v'||connects[j].check[0]=='V')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Vitem->addChild(a);
        }
        else if(connects[j].check[0]=='w'||connects[j].check[0]=='W')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Witem->addChild(a);
        }
        else if(connects[j].check[0]=='x'||connects[j].check[0]=='X')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Xitem->addChild(a);
        }
        else if(connects[j].check[0]=='y'||connects[j].check[0]=='Y')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Yitem->addChild(a);
        }
        else if(connects[j].check[0]=='z'||connects[j].check[0]=='Z')
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            Zitem->addChild(a);
        }
        else
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            signitem->addChild(a);
        }
    }
    string filebest=username+"bestconnexters.bat";
    ifstream inbest;
    inbest.open(filebest,ios::in);
    while(getline(inbest,currtext))//逐行读取，直到结尾或者相等
    {
        getline(inbest,currname);
        getline(inbest,currnumber);
        getline(inbest,curremail);
        getline(inbest,currcompany);
        getline(inbest,curraddress);
        getline(inbest,currbirth);
        getline(inbest,currsocial);
        QStringList lianxirena1;
        lianxirena1<<Currtext.fromStdString(currname)<<Currtext.fromStdString(currnumber);
        QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
        bestitem->addChild(a);
    }
    ui->treeWidget->setItemsExpandable(true);
    ui->treeWidget->expandAll();
}

void QuickSort(int sum)//排序
{
    for(int j=0;j<sum;j++)
    {
        for(int k=j+1;k<sum;k++)
        {
            if(connects[j].check>connects[k].check)
            {
                swap(connects[j],connects[k]);
            }
        }
    }
}

int IncludeChinese(const char *str)//查看是否含有中文
{
    char c;
    int j=0;
    while(1)
    {
        c=str[j++];
        if (c==0) break;  //如果到字符串尾则说明该字符串没有中文字符
        if (c&0x80)        //如果字符高位为1且下一字符高位也是1则有中文字符
            if (str[j] & 0x80) return 1;
    }
    return 0;
}

void MainWindow::on_pushButton_4_clicked()//个人信息
{

    Owninformation *own=new Owninformation(username);
    own->show();
    this->close();
}

void MainWindow::on_pushButton_clicked()//查询按钮实现
{
    QString Currtext;
    Queryinterface *query=new Queryinterface(username);
    query->ui->treeWidget->clear();
    query->ui->treeWidget->setHeaderLabels(QStringList()<<"查询结果"<<" ");
    QTreeWidgetItem * searchitem = new QTreeWidgetItem(QStringList()<<"联系人"<<"电话号");
    query->ui->treeWidget->addTopLevelItem(searchitem);
    QString Searchname=ui->lineEdit->text();
    string searchname=Searchname.toStdString();
    for(int j=0;j<i;j++)
    {
        if(connects[j].currname.find(searchname)!=connects[j].currname.npos||connects[j].currnumber.find(searchname)!=connects[j].currnumber.npos)
        {
            QStringList lianxirena1;
            lianxirena1<<Currtext.fromStdString(connects[j].currname)<<Currtext.fromStdString(connects[j].currnumber);
            QTreeWidgetItem * a = new QTreeWidgetItem(lianxirena1);
            searchitem->addChild(a);
        }
    }
    query->show();
    query->ui->treeWidget->setItemsExpandable(true);
    query->ui->treeWidget->expandAll();
    this->close();
}
