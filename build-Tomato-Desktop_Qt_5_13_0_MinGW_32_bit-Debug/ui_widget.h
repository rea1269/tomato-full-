/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *titleLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *buttonLayout;
    QPushButton *startButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *memoryButton;
    QSpacerItem *verticalSpacer_5;
    QPushButton *recordButton;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(600, 900);
        QFont font;
        font.setFamily(QString::fromUtf8("Cambria"));
        font.setPointSize(22);
        font.setBold(false);
        font.setWeight(50);
        Widget->setFont(font);
        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 20, 21, 861));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(570, 20, 21, 861));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(Widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, -5, 561, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(Widget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(20, 880, 551, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 531, 831));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        titleLayout = new QHBoxLayout();
        titleLayout->setSpacing(6);
        titleLayout->setObjectName(QString::fromUtf8("titleLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cambria"));
        font1.setPointSize(48);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Cambria"));
        font2.setPointSize(36);
        font2.setBold(false);
        font2.setWeight(50);
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 3, 1, 1, 1);


        titleLayout->addLayout(gridLayout);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Cambria"));
        font3.setPointSize(72);
        font3.setBold(false);
        font3.setWeight(50);
        label->setFont(font3);
        label->setAlignment(Qt::AlignCenter);

        titleLayout->addWidget(label);


        verticalLayout->addLayout(titleLayout);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        buttonLayout = new QVBoxLayout();
        buttonLayout->setSpacing(6);
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));
        startButton = new QPushButton(layoutWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        buttonLayout->addWidget(startButton);

        verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        buttonLayout->addItem(verticalSpacer_4);

        memoryButton = new QPushButton(layoutWidget);
        memoryButton->setObjectName(QString::fromUtf8("memoryButton"));

        buttonLayout->addWidget(memoryButton);

        verticalSpacer_5 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        buttonLayout->addItem(verticalSpacer_5);

        recordButton = new QPushButton(layoutWidget);
        recordButton->setObjectName(QString::fromUtf8("recordButton"));

        buttonLayout->addWidget(recordButton);

        verticalSpacer_6 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        buttonLayout->addItem(verticalSpacer_6);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Ma", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "To", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\347\225\252", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\350\214\204", nullptr));
        label->setText(QCoreApplication::translate("Widget", "To !", nullptr));
        startButton->setText(QCoreApplication::translate("Widget", "\345\255\246\344\271\240\343\200\201\345\220\257\345\212\250\357\274\201", nullptr));
        memoryButton->setText(QCoreApplication::translate("Widget", "\345\244\207\345\277\230\345\275\225", nullptr));
        recordButton->setText(QCoreApplication::translate("Widget", "\346\227\266\351\225\277\350\256\260\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
