#include "newperson.h"
#include "ui_newperson.h"
#include "cstring"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Login.h"

Newperson::Newperson(string username,QWidget *parent)
    : QMainWindow(parent),currentname(username)
    , ui(new Ui::Newperson)
{
    ui->setupUi(this);
}

Newperson::~Newperson()
{
    delete ui;
}

void Newperson::on_pushButton_clicked()//新建联系人实现
{
    QString Usertext=ui->textEdit->toPlainText();
    QString Name=ui->lineEdit_3->text();
    QString Number=ui->lineEdit_4->text();
    QString Email=ui->lineEdit_5->text();
    QString Company=ui->lineEdit_6->text();
    QString Address=ui->lineEdit_7->text();
    QString Birth=ui->lineEdit_8->text();
    QString Social=ui->lineEdit_9->text();
    string usertext=Usertext.toStdString();
    string name=Name.toStdString();
    string number=Number.toStdString();
    string email=Email.toStdString();
    string company=Company.toStdString();
    string address=Address.toStdString();
    string birth=Birth.toStdString();
    string social=Social.toStdString();
    if(Newperson::checknumber(number))
    {
        ofstream out;
        string file=currentname+"connecters.bat";
        out.open(file,ios::app);//定位到文件的末尾
        out<<usertext<<"\n"<<name<<"\n"<<number<<"\n"<<email<<"\n"<<company<<"\n"<<address<<"\n"<<birth<<"\n"<<social<<"\n";
        out.close();
        QMessageBox::information(this,"提示","新建联系人成功");
        this->close();
        MainWindow *main=new MainWindow(currentname);
        main->ini();
        main->show();
    }
    else
    {
        QMessageBox::information(this,"提示","电话号码格式不正确");
    }

}

void Newperson::on_pushButton_2_clicked()//退出实现
{
    this->close();
    MainWindow *main=new MainWindow(currentname);
    main->ini();
    main->show();
    this->close();
}
int Newperson::checknumber(string number)
{
    if(number.length()==11||number.length()==8)
    {
        for(int i=0;i<number.length();i++)
        {
            if(!isdigit(number[i]))
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    return 1;
}
