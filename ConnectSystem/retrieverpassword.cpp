#include "retrieverpassword.h"
#include "ui_retrieverpassword.h"
#include "Login.h"

using namespace std;

Retrieverpassword::Retrieverpassword(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Retrieverpassword)
{
    ui->setupUi(this);
}

Retrieverpassword::~Retrieverpassword()
{
    delete ui;
}

void Retrieverpassword::on_pushButton_clicked()//修改密码实现
{
    QString ANS2=ui->lineEdit_6->text();
    QString Password=ui->lineEdit_3->text();
    QString Password_confirm=ui->lineEdit_4->text();
    QString str1=ui->lineEdit_5->text();
    QString ANS1=ui->lineEdit_6->text();
    QString Name=ui->lineEdit_2->text();
    QString Email=ui->lineEdit->text();
    string str_2=str1.toStdString();
    string str_1=str1.toStdString();
    string line6=ANS1.toStdString();
    string line7=ANS2.toStdString();
    string password=Password.toStdString();
    string password_confirm=Password_confirm.toStdString();
    string name=Name.toStdString();
    string email=Email.toStdString();
    int ans6;
    int ans7;
    sscanf(line6.c_str(), "%d", &ans6);//读取文本框中用户写的答案
    sscanf(line7.c_str(), "%d", &ans7);//读取文本框中用户写的答案
    if(!check(name))
    {
        QMessageBox::information(this,"提示","没有此用户");
    }
    else if(ans6==compare(str_1)&&ans7==compare(str_2)&&password==password_confirm)
    {
        writeUser(name,email,password);//写入新的密码
        QMessageBox::information(this,"提示","更改成功");
        this->close();
    }
    else if(ans6!=compare(str_1)||ans7!=compare(str_2))
    {
        QMessageBox::warning(this,"警告","你的计算不如小学生");
    }
    else if(password!=password_confirm)
    {
        QMessageBox::warning(this,"警告","两次密码不一样");
    }
}

int compare(string str)//验证码随机数加减乘
{
    int ans;
    if(str[1]=='*')
    {
        ans=(str[0]-'0')*(str[2]-'0');
    }
    if(str[1]=='-')
    {
        ans=(str[0]-'0')-(str[2]-'0');
    }
    if(str[1]=='+')
    {
        ans=(str[0]-'0')+(str[2]-'0');
    }
    return ans;
}

void writeUser(string name,string email,string password)//写入改User文件
{
    ifstream in("User.bat");
    ofstream out;
    out.open("Usernew.bat",ios::trunc); //ios::trunc表示在打开文件前将文件清空,由于是写入,文件不存在则创建
    string name_f,email_f,password_f;
    while(getline(in,name_f))//着行读取数据并存于namesc中，直至数据全部读取
    {
        getline(in,password_f);
        getline(in,email_f);
        if(name_f!=name)
        {

            out<<name_f<<"\n"<<password_f<<"\n"<<email_f<<"\n";
        }
    }
    out<<name<<"\n"<<password<<"\n"<<email<<"\n";
    in.close();
    out.close();
    remove("User.bat");
    rename("Usernew.bat", "User.bat");
}

void Retrieverpassword::on_pushButton_2_clicked()//退出按钮实现
{
    this->close();
}

int check(string namebase)//比较输入的信息和用户信息是否相同
{
    ifstream in;
    in.open("User.bat");
    string name_f,password_f,email_f;
    while(getline(in,name_f))
    {
        getline(in,password_f);
        getline(in,email_f);
        if(name_f==namebase)
        {
            in.close();
            return 1;
        }
    }
    in.close();
    return 0;
}
