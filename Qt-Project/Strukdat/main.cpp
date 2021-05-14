#include "mainwindow.h"


#include <QApplication>
#include <QFontDatabase>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("./images/icon.png"));

    MainWindow w;
    w.show();
    return a.exec();
}
