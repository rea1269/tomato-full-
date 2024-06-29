#include "scrolllabel.h"
#include <QTimer>

ScrollLabel::ScrollLabel(QWidget* parent) : QLabel(parent)
{
    // 创建定时器
    timer = new QTimer(this);
    // 连接定时器的timeout信号到槽函数
    connect(timer, &QTimer::timeout, this, &ScrollLabel::scrollText);
    // 设置滚动速度（每个定时器周期滚动的像素数）
    scrollSpeed = 25;
    // 设置初始滚动位置
    scrollPosition = 0;
}

void ScrollLabel::startScrolling()
{
    // 启动定时器
    timer->start(100); // 每0.1秒滚动一次
}

void ScrollLabel::scrollText()
{
    // 每个定时器周期滚动文本
    scrollPosition += scrollSpeed;
    move(-scrollPosition, 0);
   //scroll(scrollSpeed, 0);

    // 如果滚动到达文本末尾，重新开始滚动
    if (scrollPosition >= width())
    {
        scrollPosition = -width();
        move(scrollPosition, 0);
    }
}
