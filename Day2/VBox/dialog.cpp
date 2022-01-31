#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("Vertical Box Layout");

    setMinimumWidth(250);
    setMinimumHeight(150);

    setMaximumWidth(250);
    setMaximumHeight(150);

    pBttn1 = new QPushButton("Button 1");
    pBttn2 = new QPushButton("Button 2");
    pBttn3 = new QPushButton("Button 3");

    pLayout = new QVBoxLayout();

    pLayout->addWidget(pBttn1);
    pLayout->addWidget(pBttn2);
    pLayout->addWidget(pBttn3);

    setLayout(pLayout);



}

Dialog::~Dialog()
{
}

