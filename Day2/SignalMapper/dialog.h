#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSignalMapper>
#include <QPushButton>
#include <QGridLayout>
#include <QInputDialog>
#include <QDebug>

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QGridLayout *pMainLayout;
    QSignalMapper *pSignalMapper;
    int rowMax, colMax;

protected slots:
    void onButtonClicked(QString);

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
