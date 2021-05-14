/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *Stack_Pages;
    QWidget *page;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Login;
    QLabel *label_Warning;
    QLineEdit *lineEdit_Username;
    QToolButton *toolButton_Logo;
    QWidget *page_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *LayoutJudul;
    QSpacerItem *horizontalSpacer;
    QLabel *label_Judul;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget;
    QHBoxLayout *LayoutDeskripsi;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_Deskripsi;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_Ready;
    QWidget *layoutWidget1;
    QHBoxLayout *LayoutDeskripsiBtn;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_NamaTxt;
    QLabel *label_Nama;
    QWidget *page_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *LayoutJudulQuiz;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_JudulQuiz;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *LayoutNoSOal;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_SoalTxt;
    QLabel *label_n;
    QSpacerItem *horizontalSpacer_12;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *opsiA;
    QRadioButton *opsiB;
    QRadioButton *opsiC;
    QRadioButton *opsiD;
    QPushButton *pushButton_Next;
    QWidget *layoutWidget3;
    QHBoxLayout *LayoutSoal;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_Soal;
    QSpacerItem *horizontalSpacer_7;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(360, 640);
        MainWindow->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	border-radius:50px;\n"
"	background-color: #c4c4c4;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	padding-left:5px;\n"
"	border-radius:7px;\n"
"	border: 1px solid rgba(0,0,0,50);\n"
"}\n"
"\n"
"QPushButton {\n"
"	padding: 0px;\n"
"	border: 0px;\n"
"	border-radius:2px;\n"
"}\n"
"\n"
"QLabel{\n"
"	color: #718096;\n"
"}\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Stack_Pages = new QStackedWidget(centralwidget);
        Stack_Pages->setObjectName(QString::fromUtf8("Stack_Pages"));
        Stack_Pages->setGeometry(QRect(0, 0, 360, 640));
        Stack_Pages->setMinimumSize(QSize(360, 0));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        lineEdit_Password = new QLineEdit(page);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(50, 350, 251, 41));
        lineEdit_Password->setAcceptDrops(true);
        lineEdit_Password->setAutoFillBackground(false);
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        pushButton_Login = new QPushButton(page);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(260, 430, 41, 28));
        pushButton_Login->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Login->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Btn.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Login->setIcon(icon1);
        pushButton_Login->setIconSize(QSize(40, 40));
        pushButton_Login->setCheckable(true);
        label_Warning = new QLabel(page);
        label_Warning->setObjectName(QString::fromUtf8("label_Warning"));
        label_Warning->setGeometry(QRect(0, 260, 351, 20));
        label_Warning->setAlignment(Qt::AlignCenter);
        lineEdit_Username = new QLineEdit(page);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));
        lineEdit_Username->setGeometry(QRect(50, 290, 251, 41));
        lineEdit_Username->setAcceptDrops(true);
        lineEdit_Username->setAutoFillBackground(false);
        toolButton_Logo = new QToolButton(page);
        toolButton_Logo->setObjectName(QString::fromUtf8("toolButton_Logo"));
        toolButton_Logo->setGeometry(QRect(120, 120, 101, 101));
        toolButton_Logo->setLayoutDirection(Qt::LeftToRight);
        toolButton_Logo->setAutoFillBackground(false);
        toolButton_Logo->setStyleSheet(QString::fromUtf8(""));
        toolButton_Logo->setIcon(icon);
        toolButton_Logo->setIconSize(QSize(100, 100));
        Stack_Pages->addWidget(page);
        label_Warning->raise();
        toolButton_Logo->raise();
        pushButton_Login->raise();
        lineEdit_Password->raise();
        lineEdit_Username->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_Ready {\n"
"	padding:5px;\n"
"	border-radius:7px;\n"
"	border: 1px solid rgba(0,0,0,50);\n"
"}"));
        horizontalLayoutWidget = new QWidget(page_2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 30, 361, 80));
        LayoutJudul = new QHBoxLayout(horizontalLayoutWidget);
        LayoutJudul->setObjectName(QString::fromUtf8("LayoutJudul"));
        LayoutJudul->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutJudul->addItem(horizontalSpacer);

        label_Judul = new QLabel(horizontalLayoutWidget);
        label_Judul->setObjectName(QString::fromUtf8("label_Judul"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS UI Gothic"));
        font.setPointSize(17);
        font.setBold(true);
        label_Judul->setFont(font);
        label_Judul->setLayoutDirection(Qt::LeftToRight);
        label_Judul->setAlignment(Qt::AlignCenter);
        label_Judul->setWordWrap(true);

        LayoutJudul->addWidget(label_Judul);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutJudul->addItem(horizontalSpacer_2);

        layoutWidget = new QWidget(page_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 170, 361, 91));
        LayoutDeskripsi = new QHBoxLayout(layoutWidget);
        LayoutDeskripsi->setObjectName(QString::fromUtf8("LayoutDeskripsi"));
        LayoutDeskripsi->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutDeskripsi->addItem(horizontalSpacer_4);

        label_Deskripsi = new QLabel(layoutWidget);
        label_Deskripsi->setObjectName(QString::fromUtf8("label_Deskripsi"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferAntialias);
        label_Deskripsi->setFont(font1);
        label_Deskripsi->setAlignment(Qt::AlignCenter);
        label_Deskripsi->setWordWrap(true);

        LayoutDeskripsi->addWidget(label_Deskripsi);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutDeskripsi->addItem(horizontalSpacer_3);

        pushButton_Ready = new QPushButton(page_2);
        pushButton_Ready->setObjectName(QString::fromUtf8("pushButton_Ready"));
        pushButton_Ready->setEnabled(true);
        pushButton_Ready->setGeometry(QRect(60, 410, 251, 41));
        pushButton_Ready->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Ready->setMouseTracking(false);
        pushButton_Ready->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(shortcut)
        pushButton_Ready->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        layoutWidget1 = new QWidget(page_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(1, 371, 359, 32));
        LayoutDeskripsiBtn = new QHBoxLayout(layoutWidget1);
        LayoutDeskripsiBtn->setObjectName(QString::fromUtf8("LayoutDeskripsiBtn"));
        LayoutDeskripsiBtn->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutDeskripsiBtn->addItem(horizontalSpacer_6);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(7);
        label->setFont(font2);

        LayoutDeskripsiBtn->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutDeskripsiBtn->addItem(horizontalSpacer_5);

        label_NamaTxt = new QLabel(page_2);
        label_NamaTxt->setObjectName(QString::fromUtf8("label_NamaTxt"));
        label_NamaTxt->setGeometry(QRect(10, 0, 55, 16));
        label_Nama = new QLabel(page_2);
        label_Nama->setObjectName(QString::fromUtf8("label_Nama"));
        label_Nama->setGeometry(QRect(50, 0, 55, 16));
        Stack_Pages->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	padding:10px;\n"
"	border-radius:7px;\n"
"	border: 1px solid rgba(0,0,0,50);\n"
"}\n"
""));
        layoutWidget2 = new QWidget(page_3);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(0, 20, 361, 112));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        LayoutJudulQuiz = new QHBoxLayout();
        LayoutJudulQuiz->setObjectName(QString::fromUtf8("LayoutJudulQuiz"));
        horizontalSpacer_9 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutJudulQuiz->addItem(horizontalSpacer_9);

        label_JudulQuiz = new QLabel(layoutWidget2);
        label_JudulQuiz->setObjectName(QString::fromUtf8("label_JudulQuiz"));
        label_JudulQuiz->setFont(font);
        label_JudulQuiz->setLayoutDirection(Qt::LeftToRight);
        label_JudulQuiz->setAlignment(Qt::AlignCenter);
        label_JudulQuiz->setWordWrap(true);

        LayoutJudulQuiz->addWidget(label_JudulQuiz);

        horizontalSpacer_10 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutJudulQuiz->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(LayoutJudulQuiz);

        LayoutNoSOal = new QHBoxLayout();
        LayoutNoSOal->setObjectName(QString::fromUtf8("LayoutNoSOal"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutNoSOal->addItem(horizontalSpacer_11);

        label_SoalTxt = new QLabel(layoutWidget2);
        label_SoalTxt->setObjectName(QString::fromUtf8("label_SoalTxt"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font3.setPointSize(15);
        font3.setBold(true);
        label_SoalTxt->setFont(font3);
        label_SoalTxt->setLayoutDirection(Qt::LeftToRight);
        label_SoalTxt->setAlignment(Qt::AlignCenter);
        label_SoalTxt->setWordWrap(true);

        LayoutNoSOal->addWidget(label_SoalTxt);

        label_n = new QLabel(layoutWidget2);
        label_n->setObjectName(QString::fromUtf8("label_n"));
        label_n->setFont(font3);
        label_n->setLayoutDirection(Qt::LeftToRight);
        label_n->setAlignment(Qt::AlignCenter);
        label_n->setWordWrap(true);

        LayoutNoSOal->addWidget(label_n);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutNoSOal->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(LayoutNoSOal);

        verticalLayoutWidget = new QWidget(page_3);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 320, 341, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        opsiA = new QRadioButton(verticalLayoutWidget);
        opsiA->setObjectName(QString::fromUtf8("opsiA"));
        opsiA->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(opsiA);

        opsiB = new QRadioButton(verticalLayoutWidget);
        opsiB->setObjectName(QString::fromUtf8("opsiB"));
        opsiB->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(opsiB);

        opsiC = new QRadioButton(verticalLayoutWidget);
        opsiC->setObjectName(QString::fromUtf8("opsiC"));
        opsiC->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(opsiC);

        opsiD = new QRadioButton(verticalLayoutWidget);
        opsiD->setObjectName(QString::fromUtf8("opsiD"));
        opsiD->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(opsiD);

        pushButton_Next = new QPushButton(page_3);
        pushButton_Next->setObjectName(QString::fromUtf8("pushButton_Next"));
        pushButton_Next->setGeometry(QRect(300, 560, 41, 28));
        pushButton_Next->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Next->setFocusPolicy(Qt::NoFocus);
        pushButton_Next->setIcon(icon1);
        pushButton_Next->setIconSize(QSize(40, 40));
        pushButton_Next->setCheckable(true);
        layoutWidget3 = new QWidget(page_3);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(0, 160, 361, 111));
        LayoutSoal = new QHBoxLayout(layoutWidget3);
        LayoutSoal->setObjectName(QString::fromUtf8("LayoutSoal"));
        LayoutSoal->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutSoal->addItem(horizontalSpacer_8);

        label_Soal = new QLabel(layoutWidget3);
        label_Soal->setObjectName(QString::fromUtf8("label_Soal"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font4.setPointSize(10);
        label_Soal->setFont(font4);
        label_Soal->setAlignment(Qt::AlignCenter);
        label_Soal->setWordWrap(true);

        LayoutSoal->addWidget(label_Soal);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutSoal->addItem(horizontalSpacer_7);

        Stack_Pages->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(lineEdit_Username, &QLineEdit::returnPressed, lineEdit_Password, qOverload<>(&QLineEdit::setFocus));
        QObject::connect(lineEdit_Password, &QLineEdit::returnPressed, pushButton_Login, qOverload<>(&QPushButton::click));

        Stack_Pages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Quiz Himatif", nullptr));
        lineEdit_Password->setPlaceholderText(QCoreApplication::translate("MainWindow", " Password", nullptr));
        pushButton_Login->setText(QString());
        label_Warning->setText(QString());
        lineEdit_Username->setPlaceholderText(QCoreApplication::translate("MainWindow", " Username / NPM", nullptr));
        toolButton_Logo->setText(QString());
        label_Judul->setText(QCoreApplication::translate("MainWindow", "Selamat Datang di Quiz Himatif!", nullptr));
        label_Deskripsi->setText(QCoreApplication::translate("MainWindow", "Selamat Datang di Quiz Himatif, Quiz ini akan terdiri dari 3 bab utama yaitu : Badan Kelengkapan Himatif, Sejarah Himatif, dan Pengetahuan Teknik Informatika. Dan setiap babnya akan terdiri dari 10 soal.", nullptr));
        pushButton_Ready->setText(QCoreApplication::translate("MainWindow", "Mulai Quiz!", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Tekan Tombol Mulai Quiz, untuk mulai mengerjakan", nullptr));
        label_NamaTxt->setText(QCoreApplication::translate("MainWindow", "NPM :", nullptr));
        label_Nama->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_JudulQuiz->setText(QCoreApplication::translate("MainWindow", "Nama Tema", nullptr));
        label_SoalTxt->setText(QCoreApplication::translate("MainWindow", "Soal", nullptr));
        label_n->setText(QCoreApplication::translate("MainWindow", "n", nullptr));
        opsiA->setText(QCoreApplication::translate("MainWindow", "Opsi A", nullptr));
        opsiB->setText(QCoreApplication::translate("MainWindow", "Opsi B", nullptr));
        opsiC->setText(QCoreApplication::translate("MainWindow", "Opsi C", nullptr));
        opsiD->setText(QCoreApplication::translate("MainWindow", "Opsi D", nullptr));
        pushButton_Next->setText(QString());
        label_Soal->setText(QCoreApplication::translate("MainWindow", "Lorem ipsum dolor sit amet Lorem ipsum dolor sit amet Lorem ipsum dolor sit ametLorem ipsum dolor sit amet", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
