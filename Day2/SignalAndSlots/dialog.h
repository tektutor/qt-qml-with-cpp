#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>
#include <QMessageBox>

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QPushButton *pBttn1, *pBttn2, *pBttn3;
    QHBoxLayout *pLayout;

protected slots:
    void onButton1Clicked();
    void onButton2Clicked();
    void onButton3Clicked();

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
