#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QSizePolicy>

class Widget : public QWidget
{
    Q_OBJECT

private:
    QGridLayout *pMainLayout;
    QPushButton *pBttn1, *pBttn2, *pBttn3;
    QPushButton *pBttn4, *pBttn5, *pBttn6;
    QPushButton *pBttn7, *pBttn8, *pBttn9;
    QPushButton *pBttn10;


public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
