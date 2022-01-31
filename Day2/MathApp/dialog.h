#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QDebug>

class MathDialog : public QDialog
{
    Q_OBJECT

private:
    QPushButton *pButtonAdd, *pButtonSubtract, *pButtonMultiply, *pButtonDivide;
    QBoxLayout *pButtonLayout;
    QGridLayout *pGridLayout;
    QVBoxLayout *pMainLayout;

    QLabel *pFirstNumberLbl, *pSecondNumberLbl, *pResultLbl;
    QLineEdit *pFirstText, *pSecondText, *pResultText;

    double firstInput, secondInput, result;

protected slots:
    void onAddButtonClicked();
    void onSubtractButtonClicked();
    void onMultiplyButtonClicked();
    void onDivideButtonClicked();

public:
    MathDialog(QWidget *parent = nullptr);
    ~MathDialog();
};
#endif // DIALOG_H
