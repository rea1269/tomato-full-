/********************************************************************************
** Form generated from reading UI file 'starttime.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTTIME_H
#define UI_STARTTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartTime
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *buttonLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *start;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *reset;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *finish;
    QSpacerItem *horizontalSpacer_6;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *layoutWidget1;
    QVBoxLayout *themeLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_8;
    QWidget *layoutWidget2;
    QHBoxLayout *pkTimeLayout;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_5;
    QDateTimeEdit *dateTimeEdit;
    QSpacerItem *horizontalSpacer_11;
    QLabel *gpa_4;
    QLabel *gpa_3;
    QLabel *gpa_1;
    QLabel *gpa_2;

    void setupUi(QDialog *StartTime)
    {
        if (StartTime->objectName().isEmpty())
            StartTime->setObjectName(QString::fromUtf8("StartTime"));
        StartTime->setWindowModality(Qt::WindowModal);
        StartTime->resize(600, 900);
        QFont font;
        font.setFamily(QString::fromUtf8("Cambria"));
        font.setPointSize(18);
        StartTime->setFont(font);
        StartTime->setModal(true);
        layoutWidget = new QWidget(StartTime);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 790, 541, 71));
        buttonLayout = new QHBoxLayout(layoutWidget);
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        buttonLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer_3);

        start = new QPushButton(layoutWidget);
        start->setObjectName(QString::fromUtf8("start"));

        buttonLayout->addWidget(start);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer_4);

        reset = new QPushButton(layoutWidget);
        reset->setObjectName(QString::fromUtf8("reset"));

        buttonLayout->addWidget(reset);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer_5);

        finish = new QPushButton(layoutWidget);
        finish->setObjectName(QString::fromUtf8("finish"));
        finish->setAutoExclusive(false);
        finish->setAutoDefault(false);

        buttonLayout->addWidget(finish);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonLayout->addItem(horizontalSpacer_6);

        line = new QFrame(StartTime);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 20, 21, 861));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(StartTime);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(570, 20, 31, 861));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(StartTime);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, -5, 561, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(StartTime);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(20, 870, 561, 41));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        layoutWidget1 = new QWidget(StartTime);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 90, 541, 351));
        themeLayout = new QVBoxLayout(layoutWidget1);
        themeLayout->setObjectName(QString::fromUtf8("themeLayout"));
        themeLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cambria"));
        font1.setPointSize(22);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Cambria"));
        font2.setPointSize(28);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_9 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);


        themeLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Cambria"));
        font3.setPointSize(48);
        font3.setBold(false);
        font3.setWeight(50);
        label_4->setFont(font3);
        label_4->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        themeLayout->addLayout(horizontalLayout_3);

        layoutWidget2 = new QWidget(StartTime);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 30, 541, 41));
        pkTimeLayout = new QHBoxLayout(layoutWidget2);
        pkTimeLayout->setObjectName(QString::fromUtf8("pkTimeLayout"));
        pkTimeLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pkTimeLayout->addItem(horizontalSpacer_10);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Cambria"));
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setWeight(50);
        label_5->setFont(font4);

        pkTimeLayout->addWidget(label_5);

        dateTimeEdit = new QDateTimeEdit(layoutWidget2);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Cambria"));
        font5.setPointSize(14);
        dateTimeEdit->setFont(font5);

        pkTimeLayout->addWidget(dateTimeEdit);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pkTimeLayout->addItem(horizontalSpacer_11);

        gpa_4 = new QLabel(StartTime);
        gpa_4->setObjectName(QString::fromUtf8("gpa_4"));
        gpa_4->setGeometry(QRect(140, 460, 161, 41));
        QFont font6;
        font6.setBold(true);
        font6.setWeight(75);
        gpa_4->setFont(font6);
        gpa_3 = new QLabel(StartTime);
        gpa_3->setObjectName(QString::fromUtf8("gpa_3"));
        gpa_3->setGeometry(QRect(310, 500, 141, 41));
        gpa_3->setFont(font6);
        gpa_1 = new QLabel(StartTime);
        gpa_1->setObjectName(QString::fromUtf8("gpa_1"));
        gpa_1->setGeometry(QRect(410, 580, 171, 41));
        gpa_1->setFont(font6);
        gpa_2 = new QLabel(StartTime);
        gpa_2->setObjectName(QString::fromUtf8("gpa_2"));
        gpa_2->setGeometry(QRect(60, 540, 141, 41));
        gpa_2->setFont(font6);

        retranslateUi(StartTime);

        QMetaObject::connectSlotsByName(StartTime);
    } // setupUi

    void retranslateUi(QDialog *StartTime)
    {
        StartTime->setWindowTitle(QCoreApplication::translate("StartTime", "\345\274\200\345\247\213\345\255\246\344\271\240", nullptr));
        start->setText(QCoreApplication::translate("StartTime", "STARDY", nullptr));
        reset->setText(QCoreApplication::translate("StartTime", "Reset", nullptr));
        finish->setText(QCoreApplication::translate("StartTime", "FIniSH", nullptr));
        label_2->setText(QCoreApplication::translate("StartTime", "\350\277\230", nullptr));
        label_3->setText(QCoreApplication::translate("StartTime", "\346\234\211", nullptr));
        label->setText(QCoreApplication::translate("StartTime", "STUDY", nullptr));
        label_4->setText(QCoreApplication::translate("StartTime", "\347\273\223\346\235\237\343\200\201\345\255\246\344\271\240", nullptr));
        label_5->setText(QCoreApplication::translate("StartTime", "\347\216\260\345\234\250\346\230\257\345\214\227\344\272\254\346\227\266\351\227\264\357\274\232", nullptr));
        gpa_4->setText(QCoreApplication::translate("StartTime", "\347\273\251\347\202\271+0.1", nullptr));
        gpa_3->setText(QCoreApplication::translate("StartTime", "\347\273\251\347\202\271+0.1", nullptr));
        gpa_1->setText(QCoreApplication::translate("StartTime", "\347\273\251\347\202\271+0.1", nullptr));
        gpa_2->setText(QCoreApplication::translate("StartTime", "\347\273\251\347\202\271+0.1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartTime: public Ui_StartTime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTTIME_H
