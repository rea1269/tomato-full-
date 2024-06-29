#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDialog>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);

    ~Widget();

private slots:
    void on_startButton_clicked();

    void on_recordButton_clicked();

    void on_memoryButton_clicked();

protected:
    void paintEvent(QPaintEvent *);
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
