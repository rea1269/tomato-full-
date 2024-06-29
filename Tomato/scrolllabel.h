#ifndef SCROLLLABEL_H
#define SCROLLLABEL_H


#include <QLabel>
#include <QTimer>
#include <QHBoxLayout>
#include <QPropertyAnimation>

class ScrollLabel : public QLabel {
    Q_OBJECT

public:
    ScrollLabel(QWidget* parent = nullptr);

    void startScrolling();

    void stopScrolling();

private slots:
    void scrollText();

private:
    QTimer* timer;
    int scrollSpeed;
    int scrollPosition;

};

#endif // SCROLLLABEL_H
