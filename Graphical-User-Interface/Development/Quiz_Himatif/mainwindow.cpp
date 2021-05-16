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
bool done = false;
qint16 attempt = 3;

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


   if(username == password && username.length()>0 && username.left(6)=="140810"){
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
       if(attempt!=0){
        ui->label_Warning->setText("Username/Password Kamu Salah! ["+QString::number(attempt)+"]");
        attempt--;
       }else{
           ui->label_Warning->setText("3x Percobaan Salah, Harap Hubungi Asesor!");
           QFont font = ui->label_Warning->font();
           font.setPointSize(7);
           ui->label_TemaNo->setFont(font);
           ui->lineEdit_Password->setDisabled(1);
           ui->lineEdit_Username->setDisabled(1);
       }
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

    if(curr->noSoal==10 || curr->noSoal==20 || curr->noSoal==30){
        ui->Stack_Pages->setCurrentIndex(3);
        if(curr->tema==1){
            ui->label_TemaNo->setText("Quiz 1: Badan Kelengkapan Himatif");
        }else if (curr->tema==2){
            ui->label_TemaNo->setText("Quiz 2: Sejarah Himatif");
            QFont font = ui->label_TemaNo->font();
            font.setPointSize(9);
            ui->label_TemaNo->setFont(font);
        }else {
            ui->label_TemaNo->setText("Quiz 3: Teknik Informatika");
            QFont font = ui->label_TemaNo->font();
            font.setPointSize(9);
            ui->label_TemaNo->setFont(font);
            ui->pushButton_NextKon->setText("Lihat Skor Akhir!");
        }
        ui->label_NamaKon->setText(cariNamaMhs(pohon,NPM.toInt()));
        ui->label_NPMKon->setText(QString::number(140810200000+NPM.toInt()));
        ui->label_scoreKon->setText(QString::number(getPoint(Top,curr->tema)));
    }else {
        curr=curr->next;

        // update Soal!
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
    }
}


void MainWindow::on_pushButton_NextKon_clicked()
{
    if(!done){
        ui->Stack_Pages->setCurrentIndex(2);
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
            ui->label_TemaNo->setText("Terima kasih");
            QFont font = ui->label_TemaNo->font();
            font.setPointSize(12);
            ui->label_TemaNo->setFont(font);
            ui->label_ScoreKonTxt->setText("Skor Akhir mu :");
            ui->label_SelesaiTxt->setText("Telah menyelesaikan kuis!");
            ui->pushButton_NextKon->setText("Keluar");
            done = true;
            ui->label_NamaKon->setText(cariNamaMhs(pohon,NPM.toInt()));
            ui->label_NPMKon->setText(QString::number(140810200000+NPM.toInt()));
            ui->label_scoreKon->setText(QString::number((getPoint(Top,1)+getPoint(Top,2)+getPoint(Top,3))*100/150));
            if((getPoint(Top,1)+getPoint(Top,2)+getPoint(Top,3))*100/150 < 60){
                ui->label_Warn->setText("(Harap Ikuti Treatment!)");
            }
        }
    }else {
        hide();
    }
}
