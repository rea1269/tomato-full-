#include "memoryday.h"
#include "ui_memoryday.h"

#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QPixmap>
#include <QPainter>
#include <QPaintEvent>
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QDateTimeEdit>
#include <QDebug>
#include <fstream>
#include <iostream>
#include <QScrollArea>
MemoryDay::MemoryDay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MemoryDay)
{
    ui->setupUi(this);

    // 设置为非模态窗口
    setModal(false);
    //在程序启动时读取并显示文本框内容
    loadTextEdits();
    update();
    currentDateTime=QDateTime::currentDateTime();
}

MemoryDay::~MemoryDay()
{
    delete ui;
}

MemoryDay::MemoryDay(int m,int n)
{
    this->month=m;
    this->day=n;
}

bool MemoryDay::operator<(const MemoryDay &a)const
{
    if(this->month==a.month)
    {
        return this->day<=a.day;
    }
    else
    {
        return this->month<=a.month;
    }
}
void MemoryDay::createItem(QString content,QDateTime datetime){
    // 水平布局管理器，使得文本框+时间 && 编辑+删除  水平对齐
    QHBoxLayout *horizontalLayout = new QHBoxLayout();
    // 垂直布局管理器，使得文本框+时间垂直对齐
    QVBoxLayout *verLayout = new QVBoxLayout();
    // 日期时间编辑控件
    QDateTimeEdit *dateTimeEdit = new QDateTimeEdit(ui->item_widget);
    dateTimeEdit->setDisplayFormat("yyyy-MM-dd HH:mm:ss"); // 设置日期时间显示格式
    verLayout->addWidget(dateTimeEdit);

    // 文本框 父部件为ui->item_widget
    QTextEdit *textEdit=new QTextEdit(ui->item_widget);
    verLayout->addWidget(textEdit);

    // 将垂直布局管理器添加到水平布局管理器中
    horizontalLayout->addLayout(verLayout);
    // 将垂直布局管理器添加到主布局管理器
    ui->item_layout->addLayout(horizontalLayout);


    // 创建一个垂直布局管理器来放置编辑和删除按钮
    QVBoxLayout *verticalLayout = new QVBoxLayout();

    // 创建按钮来切换可编辑状态
    QPushButton *toggleButton = new QPushButton("编辑",ui->item_widget);
    verticalLayout->addWidget(toggleButton);

    // 创建按钮来删除
    QPushButton *deleteButton = new QPushButton("删除",ui->item_widget);
    verticalLayout->addWidget(deleteButton);


    // 将垂直布局管理器添加到水平布局管理器中
    horizontalLayout->addLayout(verticalLayout);

    // 连接按钮的点击事件到切换可编辑状态的槽函数
    QObject::connect(toggleButton, &QPushButton::clicked, [=]() {
        textEdit->setReadOnly(!textEdit->isReadOnly()); // 切换可编辑状态
        dateTimeEdit->setReadOnly(!dateTimeEdit->isReadOnly());
    });
    QObject::connect(deleteButton, &QPushButton::clicked, [=]() {
    // 从主布局管理器中移除水平布局管理器
        ui->item_layout->removeItem(horizontalLayout);

    // 删除水平布局管理器及其包含的所有小部件
        QLayoutItem* item;
        while ((item = horizontalLayout->takeAt(0)) != nullptr) {
            delete item->widget(); // 删除布局中的小部件
            delete item;           // 删除布局项
        }
        horizontalLayout->deleteLater(); // 延迟删除布局管理器

        // 使用 deleteLater() 延迟删除控件，避免直接删除可能引起的问题
        dateTimeEdit->deleteLater();
        textEdit->deleteLater();
        // 删除按钮
        delete deleteButton;
        delete toggleButton;
    });

    //写入文本框内容
    textEdit->setText(content);
    dateTimeEdit->setDateTime(datetime);
}

void MemoryDay::on_btn_add_clicked()
{
    currentDateTime=QDateTime::currentDateTime();
    createItem("",currentDateTime);
}

void MemoryDay::paintEvent(QPaintEvent *)//绘图事件
{
    // 设置背景图片
    QPainter p(this);
    p.drawPixmap(this->rect(),QPixmap(":/resource/image/mem_bg.PNG"));
}


// 在窗口关闭事件中保存文本框内容
void MemoryDay::closeEvent(QCloseEvent *event) {
    // 保存每个文本框的内容到文件中
    qDebug()<<"layout count"<<ui->item_layout->count();
    layout_count=ui->item_layout->count();
    //把总数目存储到saveFile中
    std::ofstream ofs("tomatoSave/noteSave/saveFile.txt");
    if (ofs){
        ofs<<layout_count;
    }
    else {
        qDebug()<<"Failed to open saveFile.txt";
    }
    ofs.close();

    for (int i = 0; i < layout_count; ++i) {
        //获取第i个布局项
        QLayoutItem *layoutItem = ui->item_layout->itemAt(i);

        if (layoutItem) {
                   // 检查是否是水平布局
                   QHBoxLayout *horizontalLayout = qobject_cast<QHBoxLayout*>(layoutItem->layout());
                   if (horizontalLayout) {
                       // 获取水平布局中的第一个垂直布局（假设日期时间框在第一个位置，文本框在第二个位置）
                       QLayoutItem *innerLayoutItem = horizontalLayout->itemAt(0);
                       if (innerLayoutItem) {
                           QVBoxLayout *verticalLayout = qobject_cast<QVBoxLayout*>(innerLayoutItem->layout());
                           if (verticalLayout) {
                               // 获取日期时间框和文本框
                               QDateTimeEdit *dateTimeEdit = qobject_cast<QDateTimeEdit*>(verticalLayout->itemAt(0)->widget());
                               QTextEdit *textEdit = qobject_cast<QTextEdit*>(verticalLayout->itemAt(1)->widget());

                               // 检查并保存日期时间框中的内容
                               if (dateTimeEdit) {
                                   QString dateTimeContent = dateTimeEdit->dateTime().toString("yyyy-MM-dd hh:mm:ss");
                                   QString dateTimeFileName = "tomatoSave/noteSave/saved_datetime_" + QString::number(i) + ".txt";
                                   QFile dateTimeFile(dateTimeFileName);
                                   if (dateTimeFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
                                       QTextStream out(&dateTimeFile);
                                       out << dateTimeContent;
                                       dateTimeFile.close();
                                   } else {
                                       qDebug() << "Failed to open" << dateTimeFileName << "for writing";
                                   }
                               } else {
                                   qDebug() << "Date Time Edit not found in vertical layout";
                               }

                               // 检查并保存文本框中的内容
                               if (textEdit) {
                                   qDebug() << "Saving text edit content for index" << i;
                                   QString textContent = textEdit->toPlainText();
                                   QString textFileName = "tomatoSave/noteSave/saved_text_" + QString::number(i) + ".txt";
                                   QFile textFile(textFileName);
                                   if (textFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
                                       QTextStream out(&textFile);
                                       out << textContent;
                                       textFile.close();
                                   } else {
                                       qDebug() << "Failed to open" << textFileName << "for writing";
                                   }
                               } else {
                                   qDebug() << "Text Edit not found in vertical layout";
                               }
                           } else {
                               qDebug() << "Vertical layout not found";
                           }
                       } else {
                           qDebug() << "Inner layout item not found";
                       }
                   } else {
                       qDebug() << "Horizontal layout not found";
                   }
               } else {
                   qDebug() << "Layout item not found";
               }
           }

           event->accept(); // 接受关闭事件
}

// 在程序启动时读取并显示文本框内容
void MemoryDay::loadTextEdits() {
    std::ifstream ifs("tomatoSave/noteSave/saveFile.txt");
    if (ifs.is_open()) {
        ifs >> layout_count;
        ifs.close();
    } else {
        qDebug() << "Failed to open saveFile.txt";
        return;
    }
    qDebug() << "Layout count: " << layout_count;

    for (int i = 0; i < layout_count; ++i) {
        QString fileName = "tomatoSave/noteSave/saved_text_" + QString::number(i) + ".txt";
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            QString content = in.readAll();
            file.close();

            // 读取日期时间
            QString dateTimeFileName = "tomatoSave/noteSave/saved_datetime_" + QString::number(i) + ".txt";
            QFile dateTimeFile(dateTimeFileName);
            if (dateTimeFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
                QTextStream dateTimeIn(&dateTimeFile);
                QDateTime dateTime = QDateTime::fromString(dateTimeIn.readAll(), "yyyy-MM-dd HH:mm:ss");
                dateTimeFile.close();

                // 调用 createItem 函数创建条目
                createItem(content, dateTime);
            } else {
                qDebug() << "Failed to open saved_datetime_" << i << ".txt";
            }
        } else {
            qDebug() << "Failed to open saved_text_" << i << ".txt";
            break; // 如果找不到文件则退出循环
        }
    }
}

