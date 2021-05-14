#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Variables
QString pilihan;
QString NPM;

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_Username->text().toLower();
    QString password = ui->lineEdit_Password->text().toLower();


    if(username == password && username.length()>0){
        ui->Stack_Pages->setCurrentIndex(1);
    }else {
        ui->label_Warning->setText("Username/Password Kamu Salah!");
    }
}

void MainWindow::on_Stack_Pages_currentChanged(int arg1)
{
    ui->label_Nama->setText(NPM);
}

void MainWindow::on_pushButton_Ready_clicked()
{
    ui->Stack_Pages->setCurrentIndex(2);
}



void MainWindow::on_opsiA_toggled(bool checked)
{
    if (checked){
        pilihan="A";
    }
    ui->label_n->setText(pilihan);
}


void MainWindow::on_opsiB_toggled(bool checked)
{
    if (checked){
        pilihan="B";
    }
    ui->label_n->setText(pilihan);
}


