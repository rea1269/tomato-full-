#include "widget.h"
#include "ui_widget.h"
#include "starttime.h"
#include "memoryday.h"
#include "countrecord.h"
#include <QPainter>
#include <QPaintEvent>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    /*connect(ui->startButton, &QPushButton::clicked,
            this, &Widget::showChildDialog);

    手动关联信号和槽
    指定ui->startButton上的clicked事件
    将由本对象的showChildDialog响应
    */
    /*设置窗口标题*/
    this->setWindowTitle("你才是猫娘");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    QDialog *dialog=new StartTime(this);
    dialog->setModal(true);
    dialog->show();
}



void Widget::on_recordButton_clicked()
{
    QDialog *dialog=new CountRecord(this);
    dialog->setModal(true);
    dialog->show();
}

void Widget::on_memoryButton_clicked()
{
    QDialog *dialog=new MemoryDay(this);
    dialog->setModal(true);
    dialog->show();
}
void Widget::paintEvent(QPaintEvent *)//绘图事件
{
    // 设置背景图片
    QPainter p(this);
    p.drawPixmap(this->rect(),QPixmap(":/resource/image/widget_bg.png"));
}
