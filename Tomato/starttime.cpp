#include "starttime.h"
#include "ui_starttime.h"
#include "widget.h"
#include "countrecord.h"


#include <QCoreApplication>
#include <QApplication>
#include <QDateTime>
#include <QDate>
#include <QDebug>
#include <QSysInfo>
#include <QMediaPlayer>
#include <QUrl>
#include <QMessageBox>
#include <QString>
#include <QInputDialog>
#include <QPainter>
#include <QPaintEvent>
#include <QRandomGenerator>
#include <fstream>
#include <iostream>
StartTime::StartTime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartTime)
{
    ui->setupUi(this);

    init_label();
    //设置label的各种属性

    QDateTime current_date_time = QDateTime::currentDateTime();
    ui->dateTimeEdit->setDateTime(current_date_time);
    update_date_time();
    timer=new QTimer(this);

    connect(timer,&QTimer::timeout,this,&StartTime::count_down);
    init_TrayMenu();

    /*设置窗口标题*/
    this->setWindowTitle("喵喵番茄钟");
    update();
}

void StartTime::show_count_time()
{
    min=remaining_time/60;
    sec=remaining_time%60;
    displayText=QString("%1 分 %2 秒").arg(min,2,10,QLatin1Char('0')).arg(sec,2,10,QLatin1Char('0'));
    ui->label->setText(displayText);

}

void StartTime::init_label()
{
    remaining_time = 25 * 60;
    //默认初始为25分钟
    set_time = remaining_time;
    show_count_time();

    //设置label的字体
    font.setPointSize(38);
    ui->label->setFont(font);
    ui->gpa_1->hide();
    ui->gpa_2->hide();
    ui->gpa_3->hide();
    ui->gpa_4->hide();
    //设置标签内容居中显示
    ui->label->setAlignment(Qt::AlignCenter);

}

void StartTime::show_notification()
{
    trayIcon->showMessage("喵呜","主人的番茄钟已经完成了喵！",QSystemTrayIcon::Information,2000);
}

void StartTime::init_TrayMenu()
{
    // 创建系统托盘图标
    trayIcon = new QSystemTrayIcon(this->style()->standardIcon(static_cast<QStyle::StandardPixmap>(0)), this);

    // 创建托盘菜单
    trayMenu = new QMenu(this);

    // 添加一个动作到菜单，用于触发通知
    QAction *notifyAction = new QAction("Show Notification", this);
    connect(notifyAction, &QAction::triggered, this, &StartTime::show_notification);
    trayMenu->addAction(notifyAction);

    // 设置托盘菜单
    trayIcon->setContextMenu(trayMenu);

    // 显示系统托盘图标
    trayIcon->show();
}

void StartTime::play_surprise()
{
    QMediaPlayer *player = new QMediaPlayer(this);

    // 设置媒体
    QUrl fileUrl("qrc:/music/JiNiTaiMei.mp3");
    player->setMedia(fileUrl);
    qDebug() << "Media set to:" << fileUrl;

    // 检查是否设置媒体成功
    if (player->media().isNull())
    {
        qDebug() << "Failed to set media!";
        delete player;
        return;
    }
    qDebug()<<"Succeed!";

    player->setVolume(25); // 音量
    player->setPlaybackRate(1.0); // 播放速度
    player->play();
}

void StartTime::count_down()
{
    //qDebug()<<"countDnow";
    remaining_time--;
    today_time++;
    break_time++;
    show_count_time();
    if(remaining_time==0)
    {
        timer->stop();
        break_time=0;
        play_surprise();
        show_notification();
        update_record();
    }
    else{
        ui->gpa_1->hide();
        ui->gpa_2->hide();
        ui->gpa_3->hide();
        ui->gpa_4->hide();
        gpa();
    }
}

StartTime::~StartTime()
{
    delete ui;
}


void StartTime::on_start_clicked()
{
    break_time=0;
    QMessageBox::StandardButton reply;
    bool ok;
    QString time=QString::number(min)+" 分 "+QString::number(sec)+" 秒";
    reply = QMessageBox::question(this, "确认学时", "Hentai，这次要学"+time+"喔！\n"+
                                  "是否更改学习时长喵？",QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes){
        set_time = QInputDialog::getInt(this,tr("修改学时"),
                         tr("请输入本次学习时长喵!\n（以秒计数）"),25*60,1,7200,1,&ok);
        if (ok)
            remaining_time = set_time;
    }
    timer->start(1000);
}

void StartTime::on_reset_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::warning(this, "重置警告", "这样的话，之前的努力就都白费了喵！",QMessageBox::Ok|QMessageBox::Cancel);
    if (reply == QMessageBox::Ok)
    {
        timer->stop();
        remaining_time = set_time;
        today_time-=break_time;
        break_time=0;
        update_record();
        show_count_time();
    }
}

void StartTime::on_finish_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "摸鱼Fish", "Hentai，怎么可以这么快就想摸鱼了喵！",QMessageBox::Discard|QMessageBox::Cancel);
    if (reply == QMessageBox::Discard)
    {
        qDebug()<<"结束";
        timer->stop();
        break_time=0;
        //及时记录
        update_record();
    }
}

void StartTime::reset_time()
{
   // today_time-=3600;
    //yesterday_time-=1800*2;
    week_time-=3600*4;
    month_time-=3600*18;
}

void StartTime::update_record(){
    std::ofstream ofs("tomatoSave/record/timeRecord.txt");
    if (ofs){
        ofs<<stoday_date<<"\n";
        ofs<<syesterday_date<<"\n";
        ofs<<today_time<<" "<<yesterday_time<<" ";
        ofs<<week_ord<<" "<<week_time<<" "<<month_ord<<" "<<month_time;
    }
    ofs.close();
    std::ofstream outfs("tomatoSave/record/weekRecord.txt");
    if (outfs){
        for (int i=1;i<=7;i++)
            outfs<<week[i]<<" ";
    }
    outfs.close();
}

void StartTime::update_date_time()
{
    //判断今天是不是第一次启动
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
        QString qyesterday_date=QString::fromStdString(syesterday_date);
        yesterday_date=QDate::fromString(qyesterday_date,Qt::ISODate);
        qDebug()<<"yesterday date"<<qyesterday_date<<"\n";
        qDebug()<<"today date"<<qtoday_date<<"\n";
        ifs>>today_time>>yesterday_time;
        ifs>>week_ord>>week_time>>month_ord>>month_time;
        if (current_date>today_date){
            day_pass=true;
        }
        else{
            day_pass=false;
        }
    }
    else {
       day_pass=false;
       qDebug()<<"Failed to open the file\n";
    }
    ifs.close();
    std::ifstream infs("tomatoSave/record/weekRecord.txt");
    if (infs){
        for (int i=1;i<=7;i++)
            infs>>week[i];
    }
    infs.close();

    //判断星期和月份有没有变化
    QDate firstDayofMonth=QDate(current_date.year(),current_date.month(),1);
    int firstDayOfWeek=firstDayofMonth.dayOfWeek();
    //今天是这个月第几周
    int weeknumber=(current_date.day()+firstDayOfWeek-2)/7+1;

/*
    qDebug()<<"weeknumber"<<weeknumber<<"\n";
    qDebug()<<"week_ord"<<week_ord<<"\n";
    qDebug()<<"month_ord"<<month_ord<<"\n";
    qDebug()<<"month"<<current_date.month()<<"\n";
*/

    //全部重新记录
   // reset_time();

    if (weeknumber!=week_ord)
        week_pass=true;
    else
        week_pass=false;
    if (current_date.month()!=month_ord)
        month_pass=true;
    else
        month_pass=false;

/*
    qDebug()<<"month_pass"<<month_pass<<"\n";
    qDebug()<<"week_pass"<<week_pass<<"\n";
    qDebug()<<"day_pass"<<day_pass<<"\n";

*/

    //时间过了得更新

    if (day_pass){
        yesterday_time=today_time;
        today_time=0;
        week_time+=yesterday_time;
        month_time+=yesterday_time;
        yesterday_date=today_date;
        today_date=current_date;
        week[yesterday_date.dayOfWeek()]=yesterday_time;

    }
    if (week_pass){
        week_time=0;
        week_ord=weeknumber;
        for (int i=1;i<=7;i++)
            week[i]=0;
        week[yesterday_date.dayOfWeek()]=yesterday_time;
    }

    if (month_pass){
        month_time=0;
        month_ord=current_date.month();
    }

//更新记录
    update_record();
    day_pass=false;
    week_pass=false;
    month_pass=false;
}


void StartTime::paintEvent(QPaintEvent *)//绘图事件
{
    // 设置背景图片
    QPainter p(this);
    p.drawPixmap(this->rect(),QPixmap(":/resource/image/start_bg.PNG"));
}

void StartTime::gpa(){
    int randomInt=QRandomGenerator::global()->bounded(101);
/*    ui->gpa_1->show();
    ui->gpa_2->show();
    ui->gpa_3->show();
    ui->gpa_4->show();
*/
    switch (randomInt%4){
        case 0:
            ui->gpa_1->show();
        break;
        case 1:
            ui->gpa_2->show();
        break;
        case 2:
            ui->gpa_3->show();
        break;
        case 3:
            ui->gpa_4->show();
        break;

    }
}
