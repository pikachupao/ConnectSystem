#include "owninformation.h"
#include "ui_owninformation.h"
#include "Login.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newperson.h"

Owninformation::Owninformation(string name,QWidget *parent)
    : QMainWindow(parent),username(name)
    , ui(new Ui::Owninformation)
{
    ui->setupUi(this);
    QString Username_c=Username_c.fromStdString(username);
    this->setWindowTitle(Username_c);
    QString Username=Username.fromStdString(username);
    Owninformation::setToolTip(Username);
    ifstream in;
    string file=username+"owninformation.bat";
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
    while(getline(in,currtext))//逐行读取，直到结尾或者相等
    {
        getline(in,currname);
        getline(in,currnumber);
        getline(in,curremail);
        getline(in,currcompany);
        getline(in,curraddress);
        getline(in,currbirth);
        getline(in,currsocial);
        ui->textEdit->setPlainText(Currtext.fromStdString(currtext));
        ui->lineEdit_address->setText(Currtext.fromStdString(curraddress));
        ui->lineEdit_birth->setText(Currtext.fromStdString(currbirth));
        ui->lineEdit_company->setText(Currtext.fromStdString(currcompany));
        ui->lineEdit_email->setText(Currtext.fromStdString(curremail));
        ui->lineEdit_name->setText(Currtext.fromStdString(currname));
        ui->lineEdit_number->setText(Currtext.fromStdString(currnumber));
        ui->lineEdit_social->setText(Currtext.fromStdString(currsocial));
    }
}

Owninformation::~Owninformation()
{
    delete ui;
}

void Owninformation::on_pushButton_clicked()//保存按钮实现
{
    if(Newperson::checknumber(ui->lineEdit_number->text().toStdString()))
    {
        string file=username+"owninformation.bat";
        string file_new=username+"owninformationnew.bat";
        ifstream in;
        in.open(file);
        ofstream out;
        out.open(file_new,ios::trunc);
        string currtext="";
        string currname="";
        string currnumber="";
        string curremail="";
        string currcompany="";
        string curraddress="";
        string currbirth="";
        string currsocial="";
        out<<ui->textEdit->toPlainText().toStdString()<<"\n"<<ui->lineEdit_name->text().toStdString()
            <<"\n"<<ui->lineEdit_number->text().toStdString()<<"\n"<<ui->lineEdit_email->text().toStdString()
            <<"\n"<<ui->lineEdit_company->text().toStdString()<<"\n"<<ui->lineEdit_address->text().toStdString()
            <<"\n"<<ui->lineEdit_birth->text().toStdString()<<"\n"<<ui->lineEdit_social->text().toStdString()<<"\n";
        in.close();
        out.close();
        const char * file_f;
        const char *filenew_f;
        file_f=file.c_str();
        filenew_f=file_new.c_str();
        remove(file_f);
        rename(filenew_f,file_f);
        QMessageBox::information(this,"提示","修改成功");
        this->close();
        MainWindow *main=new MainWindow(username);
        main->ini();
        main->show();
    }
    else
    {
        QMessageBox::information(this,"提示","电话号格式不正确");
    }
}

void Owninformation::on_pushButton_2_clicked()//退出按钮实现
{
    this->close();
    MainWindow *main=new MainWindow(username);
    main->ini();
    main->show();
}
