#include "Login.h"
#include "ui_Login.h"
#include "mainwindow.h"
#include "signup.h"
#include "retrieverpassword.h"
#include "ui_retrieverpassword.h"
#include "delete.h"

using namespace std;

typedef struct Users//定义用户的结构体，存储用户的数据
{
    string name;
    string password;
    string email;
    Users *next;
}*user,User;
User CurrentUser;//当前的使用者的账户和密码
User Adiminatoner;//管理员账号
user CorrectUser=(user)malloc(sizeof(User));//正确的使用者的账户和密码
bool flag=1;//有关是否显示密码的bool类型值
user head=(user)malloc(sizeof(User)*100);
char characterx[4]={'+','-','*'};

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->lineEdit_2->setPlaceholderText("请输入用户名");//这两行为用户名和密码的输入的提示
    ui->lineEdit->setPlaceholderText("请输入密码");
    ui->lineEdit->setEchoMode(QLineEdit::Password);//密码显示为小圆点，不可见
    ui->toolButton->setIcon(QIcon(":/eyesopen.png"));
}

Login::~Login()
{
    delete ui;
}

int check()//比较输入的信息和用户信息是否相同tyx
{
    ifstream in;
    in.open("User.bat");
    string name_f,password_f,email_f;
    while(getline(in,name_f))
    {
        getline(in,password_f);
        getline(in,email_f);
        if(name_f==CurrentUser.name&&password_f==CurrentUser.password)
        {
            in.close();
            return 1;
        }
    }
    in.close();
    return 0;
}

void Login::on_pushButton_2_clicked()//退出键的实现，按下按钮退出
{
    Login::close();
}

void Login::on_pushButton_clicked()//登录按钮的实现，当按下登录按钮的时候，判断是否与注册的账号密码相同tyx
{
    ifstream in;
    in.open("User.bat");
    in.close();
    QString name = ui->lineEdit_2->text();//获取用户名的文本
    QString password = ui->lineEdit->text();//获取密码的文本
    string Name=name.toStdString();//强制转换qstring为string
    string Password=password.toStdString();
    CurrentUser.name=Name;
    CurrentUser.password=Password;
    Adiminatoner.name="pikachu";
    Adiminatoner.password="2005415qwer";
    string currentuser=CurrentUser.name;
    if(CurrentUser.name==Adiminatoner.name&&CurrentUser.password==Adiminatoner.password)
    {
        QMessageBox::information(this,"提示","你好，管理员");
        Delete *del=new Delete();
        del->show();
    }
    else if(check())//当前的用户名和密码与设置的用户名密码相同
    {
        //生成登录成功的对话框
        QMessageBox::information(this,"提示","登录成功");
        //跳转至主界面并关闭当前界面
        MainWindow *main=new MainWindow(currentuser);
        main->show();
        this->close();
    }
    else
    {
        QMessageBox::warning(this,"警告","输入错误");
    }
}

void Login::on_toolButton_clicked()//实现密码显示时，眼睛图标的转换
{

    if(!flag)//如果判定flag为假，显示眼睛开始的状态
    {
        ui->toolButton->setIcon(QIcon(":/eyesopen.png"));
        ui->lineEdit->setEchoMode(QLineEdit::Password);
        flag=!flag;//flag标签反转
    }
    else//反之，显示眼睛关闭的状态
    {
        ui->toolButton->setIcon(QIcon(":/eyesclose.png"));
        ui->lineEdit->setEchoMode(QLineEdit::Normal);//转换密码形式为可见，用户查看密码
        flag=!flag;
    }
}

void Login::on_pushButton_3_clicked()//创建用户
{
    Signup *signup=new Signup;
    signup->setWindowModality(Qt::WindowModal);
    signup->show();
}

void Login::on_pushButton_4_clicked()//忘记密码按钮实现
{
    srand((unsigned)time(NULL));
    int randnum1 = rand() % 10+1;
    int randnum2 = rand() % 10+1;
    int randchar = rand() % (3-1);
    char x;
    x=characterx[randchar];
    string str=std::to_string(randnum1)+x+std::to_string(randnum2);
    Retrieverpassword *retrie2=new Retrieverpassword();
    retrie2->ui->lineEdit_5->setText(QString::fromStdString(str));
    int randnum3 = rand() % 10+1;
    int randnum4 = rand() % 10+1;
    int randchar2 = rand() % (3-1);
    x=characterx[randchar2];
    str=std::to_string(randnum3)+x+std::to_string(randnum4);
    retrie2->ui->lineEdit_8->setText(QString::fromStdString(str));
    retrie2->show();
}
