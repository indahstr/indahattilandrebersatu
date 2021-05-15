#include "mainwindow.h"
#include "ui_mainwindow.h"

// Data Structures Goes Here!.
#include "BST_DataMhs.h"
#include "LinkedList_Soal.h"
#include "Stack_Points.h"


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

//Variabel-variabel
    // per akar-akaran
Tree pohon = nullptr;
linkedList head = nullptr;
Stack Top = nullptr;
    // per penunjukan
pointerTree NewTree = nullptr;
pointerLL NewLL = nullptr;
pointerStack NewStack = nullptr;
    // Tambahan
pointerLL curr;
char pilihan = 'A';
void MainWindow::on_pushButton_Masuk_clicked()
{
    ui->Stack_Pages->setCurrentIndex(1);
}


void MainWindow::on_pushButton_Ready_clicked()
{
    // pengganti int main()
   createDataMhs(pohon,NewTree);
   createSoal(head,NewLL);
   curr = head;
   createStack(Top);


   //Fungsi on_push
   QString username = ui->lineEdit_Username->text().toLower();
   QString password = ui->lineEdit_Password->text().toLower();
   NPM = username.right(2);


   if(username == password && username.length()>0){
       ui->Stack_Pages->setCurrentIndex(2);

       ui->label_Soal->setText(curr->soal);
       ui->opsiA->setText(curr->opsiA);
       ui->opsiB->setText(curr->opsiB);
       ui->opsiC->setText(curr->opsiC);
       ui->opsiD->setText(curr->opsiD);
       if(curr->tema== 1){
           ui->label_JudulQuiz->setText("Badan Kelengkapan Himatif");
       }else if(curr->tema == 2){
           ui->label_JudulQuiz->setText("Sejarah Himatif");
       }else {
           ui->label_JudulQuiz->setText("Teknik Informatika");
       }

       if(curr->noSoal>10 && curr->noSoal<=20){
           curr->noSoal -= 10;
       }else if (curr->noSoal>20){
           curr->noSoal -= 20;
       }
       ui->label_n->setText(QString::number(curr->noSoal));
   }else {
       ui->label_Warning->setText("Username/Password Kamu Salah!");
   }
}



void MainWindow::on_opsiA_toggled(bool checked)
{
    if (checked){
        pilihan='A';
    }
}


void MainWindow::on_opsiB_toggled(bool checked)
{
    if (checked){
        pilihan='B';
    }
}



void MainWindow::on_opsiC_toggled(bool checked)
{
    if (checked){
        pilihan='C';
    }
}

void MainWindow::on_opsiD_toggled(bool checked)
{
    if (checked){
        pilihan='D';
    }
}

void MainWindow::on_pushButton_Next_clicked()
{
    // points!!
    if(pilihan==curr->jawaban){
        createNodeStack(NewStack,curr->tema,5);
        push(Top,NewStack);
    }else {
        createNodeStack(NewStack,curr->tema,0);
        push(Top,NewStack);
    }


    curr=curr->next;

    // update Soal!
    if(curr!=nullptr){
        ui->label_Soal->setText(curr->soal);
        ui->opsiA->setText(curr->opsiA);
        ui->opsiB->setText(curr->opsiB);
        ui->opsiC->setText(curr->opsiC);
        ui->opsiD->setText(curr->opsiD);
        if(curr->tema== 1){
            ui->label_JudulQuiz->setText("Badan Kelengkapan Himatif");
        }else if(curr->tema == 2){
            ui->label_JudulQuiz->setText("Sejarah Himatif");
        }else {
            ui->label_JudulQuiz->setText("Teknik Informatika");
        }

        if(curr->noSoal>10 && curr->noSoal<=20){
            curr->noSoal -= 10;
        }else if (curr->noSoal>20){
            curr->noSoal -= 20;
        }
        ui->label_n->setText(QString::number(curr->noSoal));
    }else {
        ui->Stack_Pages->setCurrentIndex(3);
        ui->label_Nama->setText(cariNamaMhs(pohon,NPM.toInt()));
        ui->label_score_BK->setText(QString::number(getPoint(Top,1)));
        ui->label_score_Sejarah->setText(QString::number(getPoint(Top,2)));
        ui->label_score_TI->setText(QString::number(getPoint(Top,3)));
        ui->label_score_Total->setText(QString::number((getPoint(Top,1)+getPoint(Top,2)+getPoint(Top,3))*100/150));
    }
}

