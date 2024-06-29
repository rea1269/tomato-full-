#ifndef COUNTRECORD_H
#define COUNTRECORD_H

#include <QDialog>
#include <QDate>
#include <QString>
namespace Ui {
class CountRecord;
}

class CountRecord : public QDialog
{
    Q_OBJECT

public:
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

    explicit CountRecord(QWidget *parent = nullptr);

    ~CountRecord();
    void read_record();
    void show_time();
    void upload();

protected:
    void paintEvent(QPaintEvent *);
private:

    Ui::CountRecord *ui;

};


#endif // COUNTRECORD_H
