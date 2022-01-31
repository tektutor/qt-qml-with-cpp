#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QPushButton>

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QPushButton *pBttn1, *pBttn2, *pBttn3;
    QVBoxLayout *pLayout;

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
