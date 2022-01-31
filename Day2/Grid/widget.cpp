#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    setMinimumWidth(500);
    setMinimumHeight(500);

    pBttn1 = new QPushButton("Button 1");
    pBttn2 = new QPushButton("Button 2");
    pBttn3 = new QPushButton("Button 3");
    pBttn4 = new QPushButton("Button 4");
    pBttn5 = new QPushButton("Button 5");
    pBttn6 = new QPushButton("Button 6");
    pBttn7 = new QPushButton("Button 7");
    pBttn8 = new QPushButton("Button 8");
    pBttn9 = new QPushButton("Button 9");
    pBttn10= new QPushButton("Button 10");

    pBttn1->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    pBttn2->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    pBttn3->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));

    pBttn4->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    pBttn5->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    pBttn6->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));

    pBttn7->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    pBttn8->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    pBttn9->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));
    pBttn10->setSizePolicy(QSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding));

    pMainLayout = new QGridLayout();

    //Add the first row widgets
    pMainLayout->addWidget(pBttn1, 0,0);
    pMainLayout->addWidget(pBttn2, 0,1);
    pMainLayout->addWidget(pBttn3, 0,2,1,2);

    //Add the second row widgets
    pMainLayout->addWidget(pBttn4, 1,0,1,2);
    pMainLayout->addWidget(pBttn5, 1,2);
    pMainLayout->addWidget(pBttn6, 1,3);

    //Add the third row widgets
    pMainLayout->addWidget(pBttn7, 2,0);
    pMainLayout->addWidget(pBttn8, 2,1, 2,2);
    pMainLayout->addWidget(pBttn9, 2,3,2,1);

    //Add the fourth row widgets
    pMainLayout->addWidget(pBttn10,3,0);


    setLayout(pMainLayout);
}


Widget::~Widget()
{
}

