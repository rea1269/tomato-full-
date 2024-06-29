/********************************************************************************
** Form generated from reading UI file 'memoryday.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMORYDAY_H
#define UI_MEMORYDAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemoryDay
{
public:
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *bigTitle;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_add;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *item_widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *item_layout;

    void setupUi(QDialog *MemoryDay)
    {
        if (MemoryDay->objectName().isEmpty())
            MemoryDay->setObjectName(QString::fromUtf8("MemoryDay"));
        MemoryDay->setWindowModality(Qt::WindowModal);
        MemoryDay->resize(600, 900);
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Arabic"));
        font.setPointSize(14);
        MemoryDay->setFont(font);
        line = new QFrame(MemoryDay);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(3, 20, 31, 861));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(MemoryDay);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(560, 20, 41, 861));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(MemoryDay);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, -5, 561, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(MemoryDay);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(20, 870, 561, 41));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        widget = new QWidget(MemoryDay);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 541, 841));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        bigTitle = new QGridLayout();
        bigTitle->setObjectName(QString::fromUtf8("bigTitle"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cambria"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        bigTitle->addWidget(label, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe Arabic"));
        font2.setPointSize(48);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        bigTitle->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);

        bigTitle->addWidget(label_4, 1, 2, 1, 1);


        verticalLayout->addLayout(bigTitle);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_add = new QPushButton(widget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setFont(font);

        horizontalLayout->addWidget(btn_add);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        item_widget = new QWidget();
        item_widget->setObjectName(QString::fromUtf8("item_widget"));
        item_widget->setGeometry(QRect(0, 0, 537, 683));
        verticalLayoutWidget = new QWidget(item_widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 541, 541));
        item_layout = new QVBoxLayout(verticalLayoutWidget);
        item_layout->setObjectName(QString::fromUtf8("item_layout"));
        item_layout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(item_widget);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(MemoryDay);

        QMetaObject::connectSlotsByName(MemoryDay);
    } // setupUi

    void retranslateUi(QDialog *MemoryDay)
    {
        MemoryDay->setWindowTitle(QCoreApplication::translate("MemoryDay", "\345\244\207\345\277\230\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("MemoryDay", "\345\277\230", nullptr));
        label_3->setText(QCoreApplication::translate("MemoryDay", "\345\244\207", nullptr));
        label_4->setText(QCoreApplication::translate("MemoryDay", "\345\275\225", nullptr));
        btn_add->setText(QCoreApplication::translate("MemoryDay", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemoryDay: public Ui_MemoryDay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMORYDAY_H
