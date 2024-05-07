#include "detailpage.h"
#include "ui_detailpage.h"
#include "Login.h"
#include "mainwindow.h"
#include "cnlhelper.h"
#include<newperson.h>

Detailpage::Detailpage(string name,string number,string Username,QWidget *parent)
    : QMainWindow(parent),ui(new Ui::Detailpage),conname(name),connumber(number)
    , username(Username)
{
    ui->setupUi(this);
    QString name_ccc=name_ccc.fromStdString(conname);
    this->setWindowTitle(name_ccc);
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
    while(getline(in,currtext))//逐行读取，直到结尾或者相等
    {
        getline(in,currname);
        getline(in,currnumber);
        getline(in,curremail);
        getline(in,currcompany);
        getline(in,curraddress);
        getline(in,currbirth);
        getline(in,currsocial);
        if(currname==conname&&currnumber==connumber)
        {
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
}

Detailpage::~Detailpage()
{
    delete ui;
}

void Detailpage::on_pushButton_clicked()//返回功能实现
{
    MainWindow *main=new MainWindow(username);
    main->ini();
    main->show();
    this->close();
}

void Detailpage::on_pushButton_4_clicked()//删除联系人功能实现
{
    string file=username+"connecters.bat";
    string file_new=username+"connectersnew.bat";
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
    while(getline(in,currtext))//逐行读取，直到结尾或者相等
    {
        getline(in,currname);
        getline(in,currnumber);
        getline(in,curremail);
        getline(in,currcompany);
        getline(in,curraddress);
        getline(in,currbirth);
        getline(in,currsocial);
        if(!(currname==conname&&currnumber==connumber))
        {
            out<<currtext<<"\n"<<currname<<"\n"<<currnumber<<"\n"<<curremail<<"\n"<<currcompany<<"\n"<<curraddress<<"\n"<<currbirth<<"\n"<<currsocial<<"\n";
        }
    }
    in.close();
    out.close();
    const char * file_f;
    const char *filenew_f;
    file_f=file.c_str();
    filenew_f=file_new.c_str();
    remove(file_f);
    rename(filenew_f,file_f);
    file=username+"bestconnexters.bat";
    file_new=username+"bestconnextersnew.bat";
    in.open(file);
    out.open(file_new,ios::trunc);
    while(getline(in,currtext))//逐行读取，直到结尾或者相等
    {
        getline(in,currname);
        getline(in,currnumber);
        getline(in,curremail);
        getline(in,currcompany);
        getline(in,curraddress);
        getline(in,currbirth);
        getline(in,currsocial);
        if(!(currname==conname&&currnumber==connumber))
        {
            out<<currtext<<"\n"<<currname<<"\n"<<currnumber<<"\n"<<curremail<<"\n"<<currcompany<<"\n"<<curraddress<<"\n"<<currbirth<<"\n"<<currsocial<<"\n";
        }
    }
    in.close();
    out.close();
    file_f=file.c_str();
    filenew_f=file_new.c_str();
    remove(file_f);
    rename(filenew_f,file_f);
    QMessageBox::information(this,"提示","删除成功");
    this->close();
    MainWindow *main=new MainWindow(username);
    main->ini();
    main->show();
}

void Detailpage::on_pushButton_6_clicked()//保存修改按钮实现
{
    if(QMessageBox::question(this,"提示","是否要修改",QMessageBox::Yes|QMessageBox::No, QMessageBox::No)== QMessageBox::Yes)
    {
        QString uinumber;
        uinumber=ui->lineEdit_number->text();
        if(Newperson::checknumber(uinumber.toStdString()))
        {
            string file=username+"connecters.bat";
            string file_new=username+"connectersnew.bat";
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
            while(getline(in,currtext))//逐行读取，直到结尾或者相等
            {
                getline(in,currname);
                getline(in,currnumber);
                getline(in,curremail);
                getline(in,currcompany);
                getline(in,curraddress);
                getline(in,currbirth);
                getline(in,currsocial);
                if(!(currname==conname&&currnumber==connumber))
                {
                    out<<currtext<<"\n"<<currname<<"\n"<<currnumber<<"\n"<<
                    curremail<<"\n"<<currcompany<<"\n"<<curraddress<<"\n"<<currbirth<<"\n"<<currsocial<<"\n";
                }
            }
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
            file=username+"bestconnexters.bat";
            file_new=username+"bestconnextersnew.bat";
            in.open(file);
            out.open(file_new,ios::trunc);
            currtext="";
            currname="";
            currnumber="";
            curremail="";
            currcompany="";
            curraddress="";
            currbirth="";
            currsocial="";
            int flag=0;
        while(getline(in,currtext))//逐行读取，直到结尾或者相等
        {
            getline(in,currname);
            getline(in,currnumber);
            getline(in,curremail);
            getline(in,currcompany);
            getline(in,curraddress);
            getline(in,currbirth);
            getline(in,currsocial);
            if(!(currname==conname&&currnumber==connumber))
            {
                out<<currtext<<"\n"<<currname<<"\n"<<currnumber<<"\n"<<
                    curremail<<"\n"<<currcompany<<"\n"<<curraddress<<"\n"<<currbirth<<"\n"<<currsocial<<"\n";
            }
            else
            {
                flag=1;
            }
        }
        if(flag==1)
        {
        out<<ui->textEdit->toPlainText().toStdString()<<"\n"<<ui->lineEdit_name->text().toStdString()
            <<"\n"<<ui->lineEdit_number->text().toStdString()<<"\n"<<ui->lineEdit_email->text().toStdString()
            <<"\n"<<ui->lineEdit_company->text().toStdString()<<"\n"<<ui->lineEdit_address->text().toStdString()
            <<"\n"<<ui->lineEdit_birth->text().toStdString()<<"\n"<<ui->lineEdit_social->text().toStdString()<<"\n";
        }
        in.close();
        out.close();
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
            QMessageBox::information(this,"提示","电话号码不正确");
        }
    }

}


void Detailpage::on_pushButton_2_clicked()//分享联系人按钮实现
{
    string file=username+"connecters.bat";
    CNLHelper *cnl=new CNLHelper;
    QString name;
    QString file_q=cnl->CNToPY(name.fromStdString(conname));
    string file_con=file_q.toStdString();
    ifstream in;
    in.open(file);
    ofstream out;
    out.open(file_con+".txt",ios::trunc);
    string currtext="";
    string currname="";
    string currnumber="";
    string curremail="";
    string currcompany="";
    string curraddress="";
    string currbirth="";
    string currsocial="";
    while(getline(in,currtext))//逐行读取，直到结尾或者相等
    {
        getline(in,currname);
        getline(in,currnumber);
        getline(in,curremail);
        getline(in,currcompany);
        getline(in,curraddress);
        getline(in,currbirth);
        getline(in,currsocial);
        if(currname==conname&&currnumber==connumber)
        {
            out<<"备注:\n"<<currtext<<"\n联系人名称:\n"<<currname<<"\n电话号:\n"<<currnumber<<"\n邮箱:\n"
                <<curremail<<"\n联系人公司:\n"<<currcompany<<"\n联系人地址:\n"<<curraddress<<"\n联系人生日:\n"
                <<currbirth<<"\n联系人社交资料\n";
            break;
        }
    }
    out.close();
    in.close();
    QMessageBox::information(this,"提示","分享成功");
    this->close();
    MainWindow *main=new MainWindow(username);
    main->ini();
    main->show();
}

void Detailpage::on_pushButton_3_clicked()//收藏联系人功能实现
{
    string file=username+"connecters.bat";
    ifstream in;
    in.open(file);
    ofstream out;
    out.open(username+"bestconnexters.bat",ios::app);
    string currtext="";
    string currname="";
    string currnumber="";
    string curremail="";
    string currcompany="";
    string curraddress="";
    string currbirth="";
    string currsocial="";
    while(getline(in,currtext))//逐行读取，直到结尾或者相等
    {
        getline(in,currname);
        getline(in,currnumber);
        getline(in,curremail);
        getline(in,currcompany);
        getline(in,curraddress);
        getline(in,currbirth);
        getline(in,currsocial);
        if(currname==conname&&currnumber==connumber)
        {
            out<<currtext<<"\n"<<currname<<"\n"<<currnumber<<"\n"<<
            curremail<<"\n"<<currcompany<<"\n"<<curraddress<<"\n"<<currbirth<<"\n"<<currsocial<<"\n";
            break;
        }
    }
    out.close();
    in.close();
    QMessageBox::information(this,"提示","收藏成功");
    this->close();
    MainWindow *main=new MainWindow(username);
    main->ini();
    main->show();
}
