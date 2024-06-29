#ifndef MEMORYDAY_H
#define MEMORYDAY_H

#include <QDialog>
#include <cstring>
#include <QString>
#include <QDateTime>

using namespace std;
namespace Ui {
class MemoryDay;
}

class MemoryDay : public QDialog
{
    Q_OBJECT

public:

    explicit MemoryDay(QWidget *parent = nullptr);
    ~MemoryDay();


    int month,day;
    int layout_count;
    string name;
    QString qcurrentDateTime;
    QDateTime currentDateTime;
    MemoryDay(int m,int d);

    //比较
    bool operator<(const MemoryDay &a) const;
    void loadTextEdits();
    void createItem(QString content,QDateTime datetime);
    void closeEvent(QCloseEvent *event);
protected:

    void paintEvent(QPaintEvent *);

private slots:

    void on_btn_add_clicked();


private:
    Ui::MemoryDay *ui;

};

#endif // MEMORYDAY_H
