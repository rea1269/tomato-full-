#ifndef STARTTIME_H
#define STARTTIME_H

#include <QDialog>
#include <QFont>
#include <QMainWindow>
#include <QSystemTrayIcon>
#include <QTimer>
#include <QMenu>
#include <QAction>
#include <QStyle>
#include <QDate>
#include <QString>
#include <cstring>
#include <string>

namespace Ui {class StartTime;}

class StartTime : public QDialog
{
    Q_OBJECT

private:
    void init_label();

    void play_surprise();

private:
    Ui::StartTime *ui;
    int remaining_time;
    int set_time;
    int min,sec;
    QString displayText;
    QFont font;
    QTimer *timer;
    QSystemTrayIcon *trayIcon;
    QMenu *trayMenu;

    QDate current_date;
    QString qcurrent_date;
    std::string scurrent_date;
    QDate yesterday_date;
    QString qyesterday_date;
    std::string syesterday_date;
    QDate today_date;
    QString qtoday_date;
    std::string stoday_date;
    int break_time,yesterday_time,today_time,week_time,month_time;
    int week_ord,month_ord;
    int week[8];
    bool day_pass,week_pass,month_pass;

public:
    explicit StartTime(QWidget *parent = nullptr);

    ~StartTime();

private slots:

    void on_reset_clicked();

    void on_start_clicked();

    void on_finish_clicked();

public slots:

    void count_down();
    //倒计时
    // 显示通知的槽函数
    void show_notification();
    //系统通知
    void init_TrayMenu();
    //系统图标
    void show_count_time();
    //展示计时
    void update_date_time();
    //木鱼彩蛋
    void gpa();
    //所有时间重置
    void reset_time();
    void update_record();
protected:
    void paintEvent(QPaintEvent *);
};

#endif // STARTTIME_H
