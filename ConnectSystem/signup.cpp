#include "signup.h"
#include "ui_signup.h"
#include "mainwindow.h"
#include "Login.h"

using namespace std;

Signup::Signup(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Signup)
{
    ui->setupUi(this);
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_clicked()//获取创建用户的用户信息
{
    //获取信息
    QString Name=ui->lineEdit->text();
    QString Email=ui->lineEdit_2->text();
    QString Password=ui->lineEdit_3->text();
    QString Confirmpassword=ui->lineEdit_4->text();
    string name=Name.toStdString();
    string email=Email.toStdString();
    string password=Password.toStdString();
    string confirmpassword=Confirmpassword.toStdString();
    char name_c[100];
    strcpy(name_c,name.c_str());
    if(checkusername(name))
    {
        QMessageBox::information(this,"提示","用户名已存在");
    }
    else
    {
        if(password!=""&&name!=""&&email!="")
        {
            if(password==confirmpassword)//若相同，记录users的信息
            {
                const char *name_f=name.c_str();
                const char *password_f=password.c_str();
                const char *email_f=email.c_str();
                FILE *file;
                file=fopen("User.bat","ab+");
                fputs(name_f,file);
                fprintf(file,"\n");
                fputs(password_f,file);
                fprintf(file,"\n");
                fputs(email_f,file);
                fprintf(file,"\n");
                fclose(file);
                QMessageBox::information(this,"提示","创建成功");
                this->close();
            }
            else
            {
                QMessageBox::warning(this,"警告","两次输入密码不正确");
            }
        }
        else
        {
            QMessageBox::warning(this,"警告","输入信息不能为空");
        }
    }

}

void Signup::on_pushButton_2_clicked()//退出界面
{
    Signup::close();
}

int checkusername(string name)//查看文件里是否有相同的用户名
{
    ifstream in("User.bat");
    string namesc,emailsc,passwordsc;
    while(getline(in,namesc))//着行读取数据并存于namesc中，直至数据全部读取
    {
        getline(in,emailsc);
        getline(in,passwordsc);
        if(namesc==name)
        {
            return 1;
        }
    }
    return 0;
}
