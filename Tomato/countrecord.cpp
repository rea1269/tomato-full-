#include "countrecord.h"
#include "ui_countrecord.h"
#include "starttime.h"
#include "scrolllabel.h"

#include <QSettings>
#include <QDebug>
#include <QString>
#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QVariant>
#include <QDate>
#include <QDebug>
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include <QPaintEvent>
#include <fstream>
#include <iostream>

CountRecord::CountRecord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CountRecord)
{
    ui->setupUi(this);
    ui->gold_sentence->startScrolling();

    QPixmap pixmap(":/resource/image/miu_zero.png");
    show_time();
}

CountRecord::~CountRecord()
{
    delete ui;
}

void CountRecord::read_record()
{
//QDate -> QString -> std::String
    //现在的日子
    current_date=QDate::currentDate();
    qcurrent_date=current_date.toString(Qt::ISODate);
    scurrent_date=qcurrent_date.toStdString();

    std::ifstream ifs("tomatoSave/record/timeRecord.txt");
    if (ifs){
    //std::string -> Qstring -> QDate

        //记录中的今天
        std::getline(ifs,stoday_date);
        QString qtoday_date=QString::fromStdString(stoday_date);
        today_date=QDate::fromString(qtoday_date,Qt::ISODate);
       //记录中的昨天
        std::getline(ifs,syesterday_date);
        qyesterday_date=QString::fromStdString(syesterday_date);
        yesterday_date=QDate::fromString(qyesterday_date,Qt::ISODate);

        ifs>>today_time>>yesterday_time;
        ifs>>week_ord>>week_time>>month_ord>>month_time;
    }
    else {
       qDebug()<<"Failed to open the file\n";
    }
    ifs.close();
}
void CountRecord::show_time(){
    //get record time
    read_record();
    week_time+=today_time;
    month_time+=today_time;
    ui->today_hour->display(today_time/3600);
    ui->today_min->display(today_time%3600/60);
    ui->today_sec->display(today_time%60);
    ui->week_hour->display(week_time/3600);
    ui->week_min->display(week_time%3600/60);
    ui->week_sec->display(week_time%60);
    ui->month_hour->display(month_time/3600);
    ui->month_min->display(month_time%3600/60);
    ui->month_sec->display(month_time%60);
    ui->label_yesterday_date->setText("上次学习时间："+qyesterday_date);
    if (yesterday_time==0){
        ui->label_learn->setText("由于你上次偷懒，所以没有比较的必要喵！");
        if (today_time==0)
            ui->label_learn->setText("怎么还在看记录！快去学习喵！");
    }
    else {
        if (today_time==0)
            ui->label_learn->setText("由于你今天偷懒，所以没有比较的必要喵！");

        double per=(double)(today_time-yesterday_time)/(double)yesterday_time*100.0;
        if (per<0)
            ui->label_learn->setText("今天比上次少学习了"+QString::number(-per)+"%的时间喵！");
        else
            ui->label_learn->setText("今天比上次多学习了"+QString::number(per)+"%的时间喵！");
    }

}

void CountRecord::paintEvent(QPaintEvent *)//绘图事件
{
    // 设置背景图片
    QPainter p(this);
    p.drawPixmap(this->rect(),QPixmap(":/resource/image/record_bg.png"));
}

