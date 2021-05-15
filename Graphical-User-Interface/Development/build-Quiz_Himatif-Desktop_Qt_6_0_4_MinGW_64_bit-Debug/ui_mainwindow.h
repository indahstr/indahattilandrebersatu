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
#include <QtWidgets/QGroupBox>
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
    QWidget *page_1;
    QPushButton *pushButton_Masuk;
    QToolButton *toolButton;
    QLabel *label_Welcome;
    QWidget *page_2;
    QLineEdit *lineEdit_Password;
    QLabel *label_Warning;
    QLineEdit *lineEdit_Username;
    QToolButton *toolButton_Logo;
    QPushButton *pushButton_Ready;
    QWidget *page_3;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *LayoutSoal;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_Soal;
    QSpacerItem *horizontalSpacer_7;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *opsiA;
    QRadioButton *opsiB;
    QRadioButton *opsiC;
    QRadioButton *opsiD;
    QPushButton *pushButton_Next;
    QLabel *label_JudulQuiz;
    QLabel *label_outOfTen;
    QLabel *label_SoalTxt;
    QLabel *label_n;
    QWidget *page;
    QLabel *label_BKTxt;
    QLabel *label_score_BK;
    QLabel *label_SejarahTxt;
    QLabel *label_score_Sejarah;
    QLabel *label_TITxt;
    QLabel *label_score_TI;
    QLabel *label_TotalTxt;
    QLabel *label_score_Total;
    QLabel *label_HaiTxt;
    QLabel *label_Nama;
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
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color: #FFFFFF;\n"
"}\n"
"QToolButton {\n"
"	border-radius:50px;\n"
"	background-color: #c4c4c4;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	padding-left:5px;\n"
"	border-radius:7px;\n"
"	border: 1px solid #FCC100;\n"
"}\n"
"\n"
"QPushButton {\n"
"	padding: 0px;\n"
"	border: 0px;\n"
"	border-radius:2px;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QLabel{\n"
"	color: #718096;\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Stack_Pages = new QStackedWidget(centralwidget);
        Stack_Pages->setObjectName(QString::fromUtf8("Stack_Pages"));
        Stack_Pages->setGeometry(QRect(0, 0, 360, 640));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Stack_Pages->sizePolicy().hasHeightForWidth());
        Stack_Pages->setSizePolicy(sizePolicy);
        Stack_Pages->setMinimumSize(QSize(360, 0));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        page_1->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_Masuk{\n"
"	padding: 0px;\n"
"	border: 0px;\n"
"	border-radius:7px;\n"
"	background-color: #FCC100;\n"
"}\n"
"\n"
"QToolButton {\n"
"	background-color: transparent;\n"
"}"));
        pushButton_Masuk = new QPushButton(page_1);
        pushButton_Masuk->setObjectName(QString::fromUtf8("pushButton_Masuk"));
        pushButton_Masuk->setEnabled(true);
        pushButton_Masuk->setGeometry(QRect(52, 466, 251, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font.setPointSize(10);
        font.setBold(true);
        pushButton_Masuk->setFont(font);
        pushButton_Masuk->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Masuk->setMouseTracking(false);
        pushButton_Masuk->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(shortcut)
        pushButton_Masuk->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        toolButton = new QToolButton(page_1);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(33, 182, 290, 290));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Pict.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(500, 500));
        label_Welcome = new QLabel(page_1);
        label_Welcome->setObjectName(QString::fromUtf8("label_Welcome"));
        label_Welcome->setGeometry(QRect(63, 70, 241, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(16);
        font1.setBold(true);
        label_Welcome->setFont(font1);
        label_Welcome->setAlignment(Qt::AlignCenter);
        label_Welcome->setWordWrap(true);
        Stack_Pages->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_Ready{\n"
"	padding: 0px;\n"
"	border: 0px;\n"
"	border-radius:7px;\n"
"	background-color: #FCC100;\n"
"}\n"
""));
        lineEdit_Password = new QLineEdit(page_2);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(50, 350, 251, 41));
        lineEdit_Password->setAcceptDrops(true);
        lineEdit_Password->setAutoFillBackground(false);
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        label_Warning = new QLabel(page_2);
        label_Warning->setObjectName(QString::fromUtf8("label_Warning"));
        label_Warning->setGeometry(QRect(0, 260, 351, 20));
        label_Warning->setAlignment(Qt::AlignCenter);
        lineEdit_Username = new QLineEdit(page_2);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));
        lineEdit_Username->setGeometry(QRect(50, 290, 251, 41));
        lineEdit_Username->setAcceptDrops(true);
        lineEdit_Username->setAutoFillBackground(false);
        toolButton_Logo = new QToolButton(page_2);
        toolButton_Logo->setObjectName(QString::fromUtf8("toolButton_Logo"));
        toolButton_Logo->setGeometry(QRect(120, 120, 101, 101));
        toolButton_Logo->setLayoutDirection(Qt::LeftToRight);
        toolButton_Logo->setAutoFillBackground(false);
        toolButton_Logo->setStyleSheet(QString::fromUtf8(""));
        toolButton_Logo->setIcon(icon);
        toolButton_Logo->setIconSize(QSize(100, 100));
        pushButton_Ready = new QPushButton(page_2);
        pushButton_Ready->setObjectName(QString::fromUtf8("pushButton_Ready"));
        pushButton_Ready->setEnabled(true);
        pushButton_Ready->setGeometry(QRect(50, 410, 251, 41));
        pushButton_Ready->setFont(font);
        pushButton_Ready->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Ready->setMouseTracking(false);
        pushButton_Ready->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(shortcut)
        pushButton_Ready->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        Stack_Pages->addWidget(page_2);
        label_Warning->raise();
        toolButton_Logo->raise();
        lineEdit_Password->raise();
        pushButton_Ready->raise();
        lineEdit_Username->raise();
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	padding:12px;\n"
"	border-radius:7px;\n"
"	border: 1px solid #FCC100;\n"
"	text-align: center;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QRadioButton::checked {\n"
"    background-color: #FCC100;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QLabel {\n"
"	background-color : transparent;\n"
"}\n"
"\n"
"QLabel#label_JudulQuiz{\n"
"	background-color : transparent;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QLabel#label_SoalTxt{\n"
"	background-color : transparent;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QLabel#label_n{\n"
"	background-color : transparent;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QLabel#label_outOfTen{\n"
"\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QWidget#page_3 { \n"
"	background-color: #FCC100;\n"
"}\n"
"\n"
"QGroupBox {\n"
"	background-color: #FFFFFF;\n"
"	border : 0px;\n"
"	border-radius: 14px;\n"
"}"));
        groupBox = new QGroupBox(page_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 80, 361, 561));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 30, 361, 111));
        LayoutSoal = new QHBoxLayout(layoutWidget);
        LayoutSoal->setObjectName(QString::fromUtf8("LayoutSoal"));
        LayoutSoal->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutSoal->addItem(horizontalSpacer_8);

        label_Soal = new QLabel(layoutWidget);
        label_Soal->setObjectName(QString::fromUtf8("label_Soal"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(11);
        font2.setBold(true);
        label_Soal->setFont(font2);
        label_Soal->setAlignment(Qt::AlignCenter);
        label_Soal->setWordWrap(true);

        LayoutSoal->addWidget(label_Soal);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LayoutSoal->addItem(horizontalSpacer_7);

        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 190, 291, 241));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        opsiA = new QRadioButton(verticalLayoutWidget);
        opsiA->setObjectName(QString::fromUtf8("opsiA"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(opsiA->sizePolicy().hasHeightForWidth());
        opsiA->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        opsiA->setFont(font3);
        opsiA->setFocusPolicy(Qt::NoFocus);
        opsiA->setChecked(true);

        verticalLayout_2->addWidget(opsiA);

        opsiB = new QRadioButton(verticalLayoutWidget);
        opsiB->setObjectName(QString::fromUtf8("opsiB"));
        sizePolicy1.setHeightForWidth(opsiB->sizePolicy().hasHeightForWidth());
        opsiB->setSizePolicy(sizePolicy1);
        opsiB->setFont(font3);
        opsiB->setFocusPolicy(Qt::NoFocus);
        opsiB->setChecked(false);

        verticalLayout_2->addWidget(opsiB);

        opsiC = new QRadioButton(verticalLayoutWidget);
        opsiC->setObjectName(QString::fromUtf8("opsiC"));
        sizePolicy1.setHeightForWidth(opsiC->sizePolicy().hasHeightForWidth());
        opsiC->setSizePolicy(sizePolicy1);
        opsiC->setFont(font3);
        opsiC->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(opsiC);

        opsiD = new QRadioButton(verticalLayoutWidget);
        opsiD->setObjectName(QString::fromUtf8("opsiD"));
        sizePolicy1.setHeightForWidth(opsiD->sizePolicy().hasHeightForWidth());
        opsiD->setSizePolicy(sizePolicy1);
        opsiD->setFont(font3);
        opsiD->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(opsiD);

        pushButton_Next = new QPushButton(groupBox);
        pushButton_Next->setObjectName(QString::fromUtf8("pushButton_Next"));
        pushButton_Next->setGeometry(QRect(280, 460, 61, 41));
        pushButton_Next->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Next->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Btn.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Next->setIcon(icon2);
        pushButton_Next->setIconSize(QSize(60, 60));
        pushButton_Next->setCheckable(true);
        label_JudulQuiz = new QLabel(page_3);
        label_JudulQuiz->setObjectName(QString::fromUtf8("label_JudulQuiz"));
        label_JudulQuiz->setGeometry(QRect(1, 20, 360, 20));
        QFont font4;
        font4.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font4.setPointSize(12);
        font4.setBold(true);
        label_JudulQuiz->setFont(font4);
        label_JudulQuiz->setLayoutDirection(Qt::LeftToRight);
        label_JudulQuiz->setAlignment(Qt::AlignCenter);
        label_JudulQuiz->setWordWrap(true);
        label_outOfTen = new QLabel(page_3);
        label_outOfTen->setObjectName(QString::fromUtf8("label_outOfTen"));
        label_outOfTen->setGeometry(QRect(192, 51, 29, 18));
        QFont font5;
        font5.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font5.setPointSize(9);
        font5.setBold(true);
        label_outOfTen->setFont(font5);
        label_outOfTen->setLayoutDirection(Qt::LeftToRight);
        label_outOfTen->setAlignment(Qt::AlignCenter);
        label_outOfTen->setWordWrap(true);
        label_SoalTxt = new QLabel(page_3);
        label_SoalTxt->setObjectName(QString::fromUtf8("label_SoalTxt"));
        label_SoalTxt->setGeometry(QRect(134, 51, 33, 18));
        label_SoalTxt->setFont(font5);
        label_SoalTxt->setLayoutDirection(Qt::LeftToRight);
        label_SoalTxt->setAlignment(Qt::AlignCenter);
        label_SoalTxt->setWordWrap(true);
        label_n = new QLabel(page_3);
        label_n->setObjectName(QString::fromUtf8("label_n"));
        label_n->setGeometry(QRect(171, 51, 20, 18));
        label_n->setFont(font5);
        label_n->setLayoutDirection(Qt::LeftToRight);
        label_n->setAlignment(Qt::AlignCenter);
        label_n->setWordWrap(true);
        Stack_Pages->addWidget(page_3);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_BKTxt = new QLabel(page);
        label_BKTxt->setObjectName(QString::fromUtf8("label_BKTxt"));
        label_BKTxt->setGeometry(QRect(0, 80, 361, 21));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_BKTxt->sizePolicy().hasHeightForWidth());
        label_BKTxt->setSizePolicy(sizePolicy2);
        QFont font6;
        font6.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font6.setPointSize(13);
        font6.setBold(true);
        label_BKTxt->setFont(font6);
        label_BKTxt->setAlignment(Qt::AlignCenter);
        label_BKTxt->setWordWrap(true);
        label_score_BK = new QLabel(page);
        label_score_BK->setObjectName(QString::fromUtf8("label_score_BK"));
        label_score_BK->setGeometry(QRect(140, 140, 71, 41));
        sizePolicy2.setHeightForWidth(label_score_BK->sizePolicy().hasHeightForWidth());
        label_score_BK->setSizePolicy(sizePolicy2);
        QFont font7;
        font7.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font7.setPointSize(20);
        font7.setBold(true);
        label_score_BK->setFont(font7);
        label_score_BK->setAlignment(Qt::AlignCenter);
        label_score_BK->setWordWrap(true);
        label_SejarahTxt = new QLabel(page);
        label_SejarahTxt->setObjectName(QString::fromUtf8("label_SejarahTxt"));
        label_SejarahTxt->setGeometry(QRect(-10, 210, 361, 21));
        sizePolicy2.setHeightForWidth(label_SejarahTxt->sizePolicy().hasHeightForWidth());
        label_SejarahTxt->setSizePolicy(sizePolicy2);
        label_SejarahTxt->setFont(font6);
        label_SejarahTxt->setAlignment(Qt::AlignCenter);
        label_SejarahTxt->setWordWrap(true);
        label_score_Sejarah = new QLabel(page);
        label_score_Sejarah->setObjectName(QString::fromUtf8("label_score_Sejarah"));
        label_score_Sejarah->setGeometry(QRect(140, 250, 71, 41));
        sizePolicy2.setHeightForWidth(label_score_Sejarah->sizePolicy().hasHeightForWidth());
        label_score_Sejarah->setSizePolicy(sizePolicy2);
        label_score_Sejarah->setFont(font7);
        label_score_Sejarah->setAlignment(Qt::AlignCenter);
        label_score_Sejarah->setWordWrap(true);
        label_TITxt = new QLabel(page);
        label_TITxt->setObjectName(QString::fromUtf8("label_TITxt"));
        label_TITxt->setGeometry(QRect(-10, 350, 361, 21));
        sizePolicy2.setHeightForWidth(label_TITxt->sizePolicy().hasHeightForWidth());
        label_TITxt->setSizePolicy(sizePolicy2);
        label_TITxt->setFont(font6);
        label_TITxt->setAlignment(Qt::AlignCenter);
        label_TITxt->setWordWrap(true);
        label_score_TI = new QLabel(page);
        label_score_TI->setObjectName(QString::fromUtf8("label_score_TI"));
        label_score_TI->setGeometry(QRect(140, 390, 71, 41));
        sizePolicy2.setHeightForWidth(label_score_TI->sizePolicy().hasHeightForWidth());
        label_score_TI->setSizePolicy(sizePolicy2);
        label_score_TI->setFont(font7);
        label_score_TI->setAlignment(Qt::AlignCenter);
        label_score_TI->setWordWrap(true);
        label_TotalTxt = new QLabel(page);
        label_TotalTxt->setObjectName(QString::fromUtf8("label_TotalTxt"));
        label_TotalTxt->setGeometry(QRect(0, 470, 361, 21));
        sizePolicy2.setHeightForWidth(label_TotalTxt->sizePolicy().hasHeightForWidth());
        label_TotalTxt->setSizePolicy(sizePolicy2);
        label_TotalTxt->setFont(font6);
        label_TotalTxt->setAlignment(Qt::AlignCenter);
        label_TotalTxt->setWordWrap(true);
        label_score_Total = new QLabel(page);
        label_score_Total->setObjectName(QString::fromUtf8("label_score_Total"));
        label_score_Total->setGeometry(QRect(140, 510, 71, 41));
        sizePolicy2.setHeightForWidth(label_score_Total->sizePolicy().hasHeightForWidth());
        label_score_Total->setSizePolicy(sizePolicy2);
        label_score_Total->setFont(font7);
        label_score_Total->setAlignment(Qt::AlignCenter);
        label_score_Total->setWordWrap(true);
        label_HaiTxt = new QLabel(page);
        label_HaiTxt->setObjectName(QString::fromUtf8("label_HaiTxt"));
        label_HaiTxt->setGeometry(QRect(1, 81, 16, 21));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_HaiTxt->sizePolicy().hasHeightForWidth());
        label_HaiTxt->setSizePolicy(sizePolicy3);
        label_HaiTxt->setFont(font);
        label_HaiTxt->setAlignment(Qt::AlignCenter);
        label_HaiTxt->setWordWrap(true);
        label_Nama = new QLabel(page);
        label_Nama->setObjectName(QString::fromUtf8("label_Nama"));
        label_Nama->setGeometry(QRect(0, 0, 181, 61));
        sizePolicy1.setHeightForWidth(label_Nama->sizePolicy().hasHeightForWidth());
        label_Nama->setSizePolicy(sizePolicy1);
        label_Nama->setFont(font);
        label_Nama->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Nama->setWordWrap(true);
        Stack_Pages->addWidget(page);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(lineEdit_Username, &QLineEdit::returnPressed, lineEdit_Password, qOverload<>(&QLineEdit::setFocus));
        QObject::connect(lineEdit_Password, &QLineEdit::returnPressed, pushButton_Ready, qOverload<>(&QPushButton::click));
        QObject::connect(Stack_Pages, &QStackedWidget::currentChanged, opsiA, qOverload<>(&QRadioButton::toggle));

        Stack_Pages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Quiz Himatif", nullptr));
        pushButton_Masuk->setText(QCoreApplication::translate("MainWindow", "Lanjutkan", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_Welcome->setText(QCoreApplication::translate("MainWindow", "Selamat Datang di Quiz Himatif!", nullptr));
        lineEdit_Password->setPlaceholderText(QCoreApplication::translate("MainWindow", " Password", nullptr));
        label_Warning->setText(QString());
        lineEdit_Username->setPlaceholderText(QCoreApplication::translate("MainWindow", " Username / NPM", nullptr));
        toolButton_Logo->setText(QString());
        pushButton_Ready->setText(QCoreApplication::translate("MainWindow", "Mulai Kuis!", nullptr));
        groupBox->setTitle(QString());
        label_Soal->setText(QCoreApplication::translate("MainWindow", "Lorem ipsum dolor sit amet Lorem ipsum dolor sit amet Lorem ipsum dolor sit ametLorem ipsum dolor sit amet", nullptr));
        opsiA->setText(QCoreApplication::translate("MainWindow", "Opsi A", nullptr));
        opsiB->setText(QCoreApplication::translate("MainWindow", "Opsi B", nullptr));
        opsiC->setText(QCoreApplication::translate("MainWindow", "Opsi C", nullptr));
        opsiD->setText(QCoreApplication::translate("MainWindow", "Opsi D", nullptr));
        pushButton_Next->setText(QString());
        label_JudulQuiz->setText(QCoreApplication::translate("MainWindow", "Tema", nullptr));
        label_outOfTen->setText(QCoreApplication::translate("MainWindow", "/10", nullptr));
        label_SoalTxt->setText(QCoreApplication::translate("MainWindow", "Soal", nullptr));
        label_n->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_BKTxt->setText(QCoreApplication::translate("MainWindow", "Badan Kelengkapan Himatif", nullptr));
        label_score_BK->setText(QCoreApplication::translate("MainWindow", "XX", nullptr));
        label_SejarahTxt->setText(QCoreApplication::translate("MainWindow", "Sejarah Himatif", nullptr));
        label_score_Sejarah->setText(QCoreApplication::translate("MainWindow", "XX", nullptr));
        label_TITxt->setText(QCoreApplication::translate("MainWindow", "Teknik Informatika", nullptr));
        label_score_TI->setText(QCoreApplication::translate("MainWindow", "XX", nullptr));
        label_TotalTxt->setText(QCoreApplication::translate("MainWindow", "Total ", nullptr));
        label_score_Total->setText(QCoreApplication::translate("MainWindow", "XX", nullptr));
        label_HaiTxt->setText(QString());
        label_Nama->setText(QCoreApplication::translate("MainWindow", "nama User", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
