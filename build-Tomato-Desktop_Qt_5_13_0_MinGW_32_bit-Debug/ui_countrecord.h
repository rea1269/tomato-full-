/********************************************************************************
** Form generated from reading UI file 'countrecord.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTRECORD_H
#define UI_COUNTRECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <scrolllabel.h>

QT_BEGIN_NAMESPACE

class Ui_CountRecord
{
public:
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line;
    QWidget *widget;
    ScrollLabel *gold_sentence;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *biggestTitle;
    QHBoxLayout *horizontalLayout;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_11;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *today;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QLCDNumber *today_hour;
    QLabel *label_6;
    QLCDNumber *today_min;
    QLabel *label_7;
    QLCDNumber *today_sec;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *defeat;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_learn;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_yesterday_date;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *week;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLCDNumber *week_hour;
    QLabel *label_2;
    QLCDNumber *week_min;
    QLabel *label_3;
    QLCDNumber *week_sec;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *month;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_10;
    QLCDNumber *month_hour;
    QLabel *label_14;
    QLCDNumber *month_min;
    QLabel *label_16;
    QLCDNumber *month_sec;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_10;

    void setupUi(QDialog *CountRecord)
    {
        if (CountRecord->objectName().isEmpty())
            CountRecord->setObjectName(QString::fromUtf8("CountRecord"));
        CountRecord->setWindowModality(Qt::WindowModal);
        CountRecord->resize(600, 900);
        QFont font;
        font.setFamily(QString::fromUtf8("Cambria"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        CountRecord->setFont(font);
        CountRecord->setModal(true);
        line_2 = new QFrame(CountRecord);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 20, 21, 861));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(CountRecord);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(563, 20, 41, 861));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(CountRecord);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(20, -5, 561, 31));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line = new QFrame(CountRecord);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 870, 561, 41));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(CountRecord);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 820, 551, 61));
        gold_sentence = new ScrollLabel(widget);
        gold_sentence->setObjectName(QString::fromUtf8("gold_sentence"));
        gold_sentence->setGeometry(QRect(-70, 0, 441, 61));
        gold_sentence->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        layoutWidget = new QWidget(CountRecord);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 541, 741));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        biggestTitle = new QGridLayout();
        biggestTitle->setObjectName(QString::fromUtf8("biggestTitle"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font1;
        font1.setPointSize(36);
        font1.setBold(false);
        font1.setWeight(50);
        label_13->setFont(font1);
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_13);


        biggestTitle->addLayout(horizontalLayout, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        biggestTitle->addItem(horizontalSpacer_7, 1, 3, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font2;
        font2.setPointSize(48);
        font2.setBold(false);
        font2.setWeight(50);
        label_11->setFont(font2);
        label_11->setAlignment(Qt::AlignCenter);

        biggestTitle->addWidget(label_11, 1, 0, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QFont font3;
        font3.setPointSize(72);
        font3.setBold(false);
        font3.setWeight(50);
        label_15->setFont(font3);
        label_15->setAlignment(Qt::AlignCenter);

        biggestTitle->addWidget(label_15, 1, 2, 1, 1);


        verticalLayout_2->addLayout(biggestTitle);

        verticalSpacer_3 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        today = new QHBoxLayout();
        today->setObjectName(QString::fromUtf8("today"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        today->addItem(horizontalSpacer_2);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        today->addWidget(label_5);

        today_hour = new QLCDNumber(layoutWidget);
        today_hour->setObjectName(QString::fromUtf8("today_hour"));

        today->addWidget(today_hour);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        today->addWidget(label_6);

        today_min = new QLCDNumber(layoutWidget);
        today_min->setObjectName(QString::fromUtf8("today_min"));

        today->addWidget(today_min);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        today->addWidget(label_7);

        today_sec = new QLCDNumber(layoutWidget);
        today_sec->setObjectName(QString::fromUtf8("today_sec"));

        today->addWidget(today_sec);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        today->addWidget(label_8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        today->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(today);

        verticalSpacer_5 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_5);

        defeat = new QHBoxLayout();
        defeat->setObjectName(QString::fromUtf8("defeat"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        defeat->addItem(horizontalSpacer_5);

        label_learn = new QLabel(layoutWidget);
        label_learn->setObjectName(QString::fromUtf8("label_learn"));

        defeat->addWidget(label_learn);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        defeat->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(defeat);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_6);

        label_yesterday_date = new QLabel(layoutWidget);
        label_yesterday_date->setObjectName(QString::fromUtf8("label_yesterday_date"));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        label_yesterday_date->setFont(font4);
        label_yesterday_date->setLayoutDirection(Qt::LeftToRight);
        label_yesterday_date->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_yesterday_date);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        week = new QHBoxLayout();
        week->setObjectName(QString::fromUtf8("week"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        week->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        week->addWidget(label);

        week_hour = new QLCDNumber(layoutWidget);
        week_hour->setObjectName(QString::fromUtf8("week_hour"));

        week->addWidget(week_hour);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        week->addWidget(label_2);

        week_min = new QLCDNumber(layoutWidget);
        week_min->setObjectName(QString::fromUtf8("week_min"));

        week->addWidget(week_min);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        week->addWidget(label_3);

        week_sec = new QLCDNumber(layoutWidget);
        week_sec->setObjectName(QString::fromUtf8("week_sec"));

        week->addWidget(week_sec);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        week->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        week->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(week);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        month = new QHBoxLayout();
        month->setObjectName(QString::fromUtf8("month"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        month->addItem(horizontalSpacer_8);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        month->addWidget(label_10);

        month_hour = new QLCDNumber(layoutWidget);
        month_hour->setObjectName(QString::fromUtf8("month_hour"));

        month->addWidget(month_hour);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        month->addWidget(label_14);

        month_min = new QLCDNumber(layoutWidget);
        month_min->setObjectName(QString::fromUtf8("month_min"));

        month->addWidget(month_min);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        month->addWidget(label_16);

        month_sec = new QLCDNumber(layoutWidget);
        month_sec->setObjectName(QString::fromUtf8("month_sec"));

        month->addWidget(month_sec);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        month->addWidget(label_17);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        month->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(month);


        verticalLayout_2->addLayout(verticalLayout);

        widget->raise();
        layoutWidget->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        line->raise();

        retranslateUi(CountRecord);

        QMetaObject::connectSlotsByName(CountRecord);
    } // setupUi

    void retranslateUi(QDialog *CountRecord)
    {
        CountRecord->setWindowTitle(QCoreApplication::translate("CountRecord", "\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
        gold_sentence->setText(QCoreApplication::translate("CountRecord", " \344\273\212 \345\244\251 \344\270\215 \345\255\246 \344\271\240 \357\274\214 \346\230\216 \345\244\251 \345\217\230 \345\236\203 \345\234\276 ", nullptr));
        label_13->setText(QCoreApplication::translate("CountRecord", "\345\217\262  \350\256\260", nullptr));
        label_11->setText(QCoreApplication::translate("CountRecord", "\345\216\206", nullptr));
        label_15->setText(QCoreApplication::translate("CountRecord", "\345\275\225", nullptr));
        label_5->setText(QCoreApplication::translate("CountRecord", "\344\273\212\346\227\245\345\255\246\344\271\240\346\227\266\351\225\277\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("CountRecord", "\346\227\266", nullptr));
        label_7->setText(QCoreApplication::translate("CountRecord", "\345\210\206", nullptr));
        label_8->setText(QCoreApplication::translate("CountRecord", "\347\247\222", nullptr));
        label_learn->setText(QCoreApplication::translate("CountRecord", "\344\275\240\346\230\250\345\244\251\345\255\246\344\271\240\344\272\206\345\220\227", nullptr));
        label_yesterday_date->setText(QCoreApplication::translate("CountRecord", "\344\270\212\346\254\241\345\255\246\344\271\240\346\227\266\351\227\264\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("CountRecord", "\346\234\254\345\221\250\345\255\246\344\271\240\346\227\266\351\225\277\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("CountRecord", "\346\227\266", nullptr));
        label_3->setText(QCoreApplication::translate("CountRecord", "\345\210\206", nullptr));
        label_4->setText(QCoreApplication::translate("CountRecord", "\347\247\222", nullptr));
        label_10->setText(QCoreApplication::translate("CountRecord", "\346\234\254\346\234\210\345\255\246\344\271\240\346\227\266\351\225\277\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("CountRecord", "\346\227\266", nullptr));
        label_16->setText(QCoreApplication::translate("CountRecord", "\345\210\206", nullptr));
        label_17->setText(QCoreApplication::translate("CountRecord", "\347\247\222", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CountRecord: public Ui_CountRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTRECORD_H
