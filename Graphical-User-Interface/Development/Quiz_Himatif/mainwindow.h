#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_Ready_clicked();

    void on_opsiA_toggled(bool checked);

    void on_opsiB_toggled(bool checked);


    void on_opsiC_toggled(bool checked);

    void on_opsiD_toggled(bool checked);

    void on_pushButton_Next_clicked();

    void on_pushButton_Masuk_clicked();

    void on_pushButton_NextKon_clicked();

private:
    Ui::MainWindow *ui;
    QString NPM; //coba2 taro variable


};
#endif // MAINWINDOW_H
