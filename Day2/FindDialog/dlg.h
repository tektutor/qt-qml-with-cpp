#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QBoxLayout>

class Dialog : public QDialog
{
    Q_OBJECT

private:
    QHBoxLayout *pFirstRowLayout;
    QHBoxLayout *pSecondRowLayout;
    QVBoxLayout *pTopLayout;
    QBoxLayout  *pButtonLayout;
    QVBoxLayout *pMainLayout;
    QPushButton *pFindBttn, *pCloseBttn;
    QLabel *pFindLabel, *pReplaceLabel;
    QLineEdit *pFindText, *pReplaceText;

    void setWindowSize();
    void createWigets();
    void addLastRowWidgets();
    void addFirstRowWidgets();
    void addSecondRowWidgets();
    void arrangeLayouts();


public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
