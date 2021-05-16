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
    QWidget *page_Intro;
    QPushButton *pushButton_Masuk;
    QToolButton *toolButton;
    QLabel *label_Welcome;
    QWidget *page_Login;
    QLineEdit *lineEdit_Password;
    QLabel *label_Warning;
    QLineEdit *lineEdit_Username;
    QToolButton *toolButton_Logo;
    QPushButton *pushButton_Ready;
    QWidget *page_Quiz;
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
    QWidget *page_Konjungsi;
    QGroupBox *box_bg1;
    QPushButton *pushButton_NextKon;
    QGroupBox *box_bg2;
    QLabel *label_SelesaiTxt;
    QLabel *label_NamaKon;
    QLabel *label_ScoreKonTxt;
    QLabel *label_scoreKon;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_TemaNo;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_NPMKon;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_Warn;
    QToolButton *toolButton_Checklist;
    QWidget *page_unUsed;
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
        page_Intro = new QWidget();
        page_Intro->setObjectName(QString::fromUtf8("page_Intro"));
        page_Intro->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_Masuk{\n"
"	padding: 0px;\n"
"	border: 0px;\n"
"	border-radius:7px;\n"
"	background-color: #FCC100;\n"
"}\n"
"\n"
"QLabel#label_Welcome { \n"
"	color : #000000;\n"
"}\n"
"\n"
"QToolButton {\n"
"	background-color: transparent;\n"
"}"));
        pushButton_Masuk = new QPushButton(page_Intro);
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
        toolButton = new QToolButton(page_Intro);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(33, 182, 290, 290));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Pict.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(500, 500));
        label_Welcome = new QLabel(page_Intro);
        label_Welcome->setObjectName(QString::fromUtf8("label_Welcome"));
        label_Welcome->setGeometry(QRect(63, 70, 241, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font1.setPointSize(16);
        font1.setBold(true);
        label_Welcome->setFont(font1);
        label_Welcome->setAlignment(Qt::AlignCenter);
        label_Welcome->setWordWrap(true);
        Stack_Pages->addWidget(page_Intro);
        page_Login = new QWidget();
        page_Login->setObjectName(QString::fromUtf8("page_Login"));
        page_Login->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_Ready{\n"
"	padding: 0px;\n"
"	border: 0px;\n"
"	border-radius:7px;\n"
"	background-color: #FCC100;\n"
"}\n"
""));
        lineEdit_Password = new QLineEdit(page_Login);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setGeometry(QRect(50, 350, 251, 41));
        lineEdit_Password->setAcceptDrops(true);
        lineEdit_Password->setAutoFillBackground(false);
        lineEdit_Password->setEchoMode(QLineEdit::Password);
        label_Warning = new QLabel(page_Login);
        label_Warning->setObjectName(QString::fromUtf8("label_Warning"));
        label_Warning->setGeometry(QRect(0, 260, 351, 20));
        label_Warning->setAlignment(Qt::AlignCenter);
        lineEdit_Username = new QLineEdit(page_Login);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));
        lineEdit_Username->setGeometry(QRect(50, 290, 251, 41));
        lineEdit_Username->setAcceptDrops(true);
        lineEdit_Username->setAutoFillBackground(false);
        toolButton_Logo = new QToolButton(page_Login);
        toolButton_Logo->setObjectName(QString::fromUtf8("toolButton_Logo"));
        toolButton_Logo->setGeometry(QRect(120, 120, 101, 101));
        toolButton_Logo->setLayoutDirection(Qt::LeftToRight);
        toolButton_Logo->setAutoFillBackground(false);
        toolButton_Logo->setStyleSheet(QString::fromUtf8(""));
        toolButton_Logo->setIcon(icon);
        toolButton_Logo->setIconSize(QSize(100, 100));
        pushButton_Ready = new QPushButton(page_Login);
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
        Stack_Pages->addWidget(page_Login);
        label_Warning->raise();
        toolButton_Logo->raise();
        lineEdit_Password->raise();
        pushButton_Ready->raise();
        lineEdit_Username->raise();
        page_Quiz = new QWidget();
        page_Quiz->setObjectName(QString::fromUtf8("page_Quiz"));
        page_Quiz->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
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
"QLabel#label_Soal {\n"
"	color : #000000;\n"
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
"QWidget#page_Quiz{ \n"
"	background-color: #FCC100;\n"
"}\n"
"\n"
"QGroupBox {\n"
"	background-color: #FFFFFF;\n"
"	border : 0px;\n"
"	border-radius: 14px;\n"
"}"));
        groupBox = new QGroupBox(page_Quiz);
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
        pushButton_Next->setGeometry(QRect(280, 498, 61, 41));
        pushButton_Next->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Next->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Btn.svg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Next->setIcon(icon2);
        pushButton_Next->setIconSize(QSize(60, 60));
        pushButton_Next->setCheckable(true);
        label_JudulQuiz = new QLabel(page_Quiz);
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
        label_outOfTen = new QLabel(page_Quiz);
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
        label_SoalTxt = new QLabel(page_Quiz);
        label_SoalTxt->setObjectName(QString::fromUtf8("label_SoalTxt"));
        label_SoalTxt->setGeometry(QRect(134, 51, 33, 18));
        label_SoalTxt->setFont(font5);
        label_SoalTxt->setLayoutDirection(Qt::LeftToRight);
        label_SoalTxt->setAlignment(Qt::AlignCenter);
        label_SoalTxt->setWordWrap(true);
        label_n = new QLabel(page_Quiz);
        label_n->setObjectName(QString::fromUtf8("label_n"));
        label_n->setGeometry(QRect(171, 51, 20, 18));
        label_n->setFont(font5);
        label_n->setLayoutDirection(Qt::LeftToRight);
        label_n->setAlignment(Qt::AlignCenter);
        label_n->setWordWrap(true);
        Stack_Pages->addWidget(page_Quiz);
        page_Konjungsi = new QWidget();
        page_Konjungsi->setObjectName(QString::fromUtf8("page_Konjungsi"));
        page_Konjungsi->setStyleSheet(QString::fromUtf8("QWidget#page_Konjungsi { \n"
"	background-color: #FCC100;\n"
"}\n"
"\n"
"QGroupBox#box_bg1 {\n"
"	background-color: #FFFFFF;\n"
"	border : 0px;\n"
"}\n"
"\n"
"QLabel {\n"
"	color : #000000;\n"
"	background-color : transparent;	\n"
"}\n"
"\n"
"QLabel#label_scoreKon {\n"
"	color: #FCC100;\n"
"}\n"
"\n"
"QLabel#label_Warn {\n"
"	color: #FC4300;\n"
"	\n"
"}\n"
"\n"
"QGroupBox#box_bg2 {\n"
"	background-color : #FFFFFF;\n"
"	border : 2px solid #FCC100;\n"
"	border-radius : 10px;\n"
"}\n"
"\n"
"QToolButton{\n"
"	background-color : transparent;\n"
"}\n"
"\n"
"QPushButton { \n"
"	background-color : #FCC100;\n"
"	border-radius : 8px;\n"
"}"));
        box_bg1 = new QGroupBox(page_Konjungsi);
        box_bg1->setObjectName(QString::fromUtf8("box_bg1"));
        box_bg1->setGeometry(QRect(0, 200, 360, 420));
        box_bg1->setMaximumSize(QSize(360, 420));
        pushButton_NextKon = new QPushButton(box_bg1);
        pushButton_NextKon->setObjectName(QString::fromUtf8("pushButton_NextKon"));
        pushButton_NextKon->setEnabled(true);
        pushButton_NextKon->setGeometry(QRect(53, 326, 257, 41));
        pushButton_NextKon->setFont(font);
        pushButton_NextKon->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_NextKon->setMouseTracking(false);
        pushButton_NextKon->setFocusPolicy(Qt::NoFocus);
#if QT_CONFIG(shortcut)
        pushButton_NextKon->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        box_bg2 = new QGroupBox(page_Konjungsi);
        box_bg2->setObjectName(QString::fromUtf8("box_bg2"));
        box_bg2->setGeometry(QRect(37, 100, 286, 411));
        box_bg2->setMinimumSize(QSize(286, 221));
        label_SelesaiTxt = new QLabel(box_bg2);
        label_SelesaiTxt->setObjectName(QString::fromUtf8("label_SelesaiTxt"));
        label_SelesaiTxt->setGeometry(QRect(28, 90, 235, 22));
        label_SelesaiTxt->setFont(font);
        label_SelesaiTxt->setAlignment(Qt::AlignCenter);
        label_SelesaiTxt->setWordWrap(true);
        label_NamaKon = new QLabel(box_bg2);
        label_NamaKon->setObjectName(QString::fromUtf8("label_NamaKon"));
        label_NamaKon->setGeometry(QRect(27, 162, 235, 22));
        QFont font6;
        font6.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font6.setPointSize(10);
        font6.setBold(false);
        label_NamaKon->setFont(font6);
        label_NamaKon->setAlignment(Qt::AlignCenter);
        label_NamaKon->setWordWrap(true);
        label_ScoreKonTxt = new QLabel(box_bg2);
        label_ScoreKonTxt->setObjectName(QString::fromUtf8("label_ScoreKonTxt"));
        label_ScoreKonTxt->setGeometry(QRect(28, 260, 235, 22));
        label_ScoreKonTxt->setFont(font);
        label_ScoreKonTxt->setAlignment(Qt::AlignCenter);
        label_ScoreKonTxt->setWordWrap(true);
        label_scoreKon = new QLabel(box_bg2);
        label_scoreKon->setObjectName(QString::fromUtf8("label_scoreKon"));
        label_scoreKon->setGeometry(QRect(6, 300, 271, 61));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_scoreKon->sizePolicy().hasHeightForWidth());
        label_scoreKon->setSizePolicy(sizePolicy2);
        QFont font7;
        font7.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font7.setPointSize(31);
        font7.setBold(true);
        font7.setUnderline(false);
        label_scoreKon->setFont(font7);
        label_scoreKon->setAlignment(Qt::AlignCenter);
        label_scoreKon->setWordWrap(true);
        layoutWidget1 = new QWidget(box_bg2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(4, 50, 279, 34));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_TemaNo = new QLabel(layoutWidget1);
        label_TemaNo->setObjectName(QString::fromUtf8("label_TemaNo"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font8.setPointSize(8);
        font8.setBold(true);
        label_TemaNo->setFont(font8);
        label_TemaNo->setAlignment(Qt::AlignCenter);
        label_TemaNo->setWordWrap(true);

        horizontalLayout_2->addWidget(label_TemaNo);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        layoutWidget2 = new QWidget(box_bg2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(3, 190, 280, 23));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_NPMKon = new QLabel(layoutWidget2);
        label_NPMKon->setObjectName(QString::fromUtf8("label_NPMKon"));
        label_NPMKon->setFont(font6);
        label_NPMKon->setAlignment(Qt::AlignCenter);
        label_NPMKon->setWordWrap(true);

        horizontalLayout_3->addWidget(label_NPMKon);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_Warn = new QLabel(box_bg2);
        label_Warn->setObjectName(QString::fromUtf8("label_Warn"));
        label_Warn->setGeometry(QRect(30, 380, 235, 22));
        label_Warn->setFont(font5);
        label_Warn->setAlignment(Qt::AlignCenter);
        label_Warn->setWordWrap(true);
        toolButton_Checklist = new QToolButton(page_Konjungsi);
        toolButton_Checklist->setObjectName(QString::fromUtf8("toolButton_Checklist"));
        toolButton_Checklist->setGeometry(QRect(140, 60, 81, 81));
        toolButton_Checklist->setLayoutDirection(Qt::LeftToRight);
        toolButton_Checklist->setAutoFillBackground(false);
        toolButton_Checklist->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Checklist.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Checklist->setIcon(icon3);
        toolButton_Checklist->setIconSize(QSize(500, 500));
        Stack_Pages->addWidget(page_Konjungsi);
        page_unUsed = new QWidget();
        page_unUsed->setObjectName(QString::fromUtf8("page_unUsed"));
        page_unUsed->setEnabled(true);
        Stack_Pages->addWidget(page_unUsed);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(Stack_Pages, &QStackedWidget::currentChanged, lineEdit_Username, qOverload<>(&QLineEdit::setFocus));
        QObject::connect(lineEdit_Password, &QLineEdit::returnPressed, pushButton_Ready, qOverload<>(&QPushButton::click));
        QObject::connect(Stack_Pages, &QStackedWidget::currentChanged, opsiA, qOverload<>(&QRadioButton::toggle));
        QObject::connect(lineEdit_Username, &QLineEdit::returnPressed, lineEdit_Password, qOverload<>(&QLineEdit::setFocus));

        Stack_Pages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Quiz Himatif", nullptr));
        pushButton_Masuk->setText(QCoreApplication::translate("MainWindow", "Lanjutkan", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_Welcome->setText(QCoreApplication::translate("MainWindow", "Selamat Datang di Himatif Quiz!", nullptr));
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
        box_bg1->setTitle(QString());
        pushButton_NextKon->setText(QCoreApplication::translate("MainWindow", "Lanjut Mengerjakan!", nullptr));
        box_bg2->setTitle(QString());
        label_SelesaiTxt->setText(QCoreApplication::translate("MainWindow", "Selesai Dikerjakan!", nullptr));
        label_NamaKon->setText(QCoreApplication::translate("MainWindow", "<<Nama>>", nullptr));
        label_ScoreKonTxt->setText(QCoreApplication::translate("MainWindow", "Skor mu : ", nullptr));
        label_scoreKon->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        label_TemaNo->setText(QCoreApplication::translate("MainWindow", "Quiz 1: Badan Kelengkapan Himatif", nullptr));
        label_NPMKon->setText(QCoreApplication::translate("MainWindow", "<<NPM>>", nullptr));
        label_Warn->setText(QString());
        toolButton_Checklist->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
