#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    pBttn1 = new QPushButton("Button 1");
    pBttn2 = new QPushButton("Button 2");
    pBttn3 = new QPushButton("Button 3");

    pLayout = new QHBoxLayout();

    pLayout->addWidget(pBttn1);
    pLayout->addWidget(pBttn2);
    pLayout->addWidget(pBttn3);

    setLayout(pLayout);

    connect ( pBttn1, SIGNAL(clicked()), this, SLOT(onButton1Clicked()));
    connect ( pBttn2, SIGNAL(clicked()), this, SLOT(onButton2Clicked()));
    connect ( pBttn3, SIGNAL(clicked()), this, SLOT(onButton3Clicked()));
}

void Dialog::onButton1Clicked() {
    QMessageBox msgBox;
    msgBox.setText("Button 1 clicked");
    msgBox.exec();
}

void Dialog::onButton2Clicked() {
    QMessageBox msgBox;
    msgBox.setText("Button 2 clicked");
    msgBox.exec();
}

void Dialog::onButton3Clicked() {
    QMessageBox msgBox;
    msgBox.setText("Button 3 clicked");
    msgBox.exec();
}


Dialog::~Dialog()
{
}

