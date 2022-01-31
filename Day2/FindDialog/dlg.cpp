#include "dlg.h"

void Dialog::setWindowSize()
{
    setMinimumHeight(100);
    setMinimumWidth(400);

    setMaximumHeight(100);
    setMaximumWidth(400);
}

void Dialog::createWigets()
{
    pFindBttn = new QPushButton("Find");
    pCloseBttn = new QPushButton("Close");

    pFindLabel = new QLabel("Find");
    pReplaceLabel = new QLabel("Replace");

    pFindText = new QLineEdit();
    pReplaceText = new QLineEdit();
}

void Dialog::addLastRowWidgets()
{
    pButtonLayout = new QBoxLayout(QBoxLayout::RightToLeft);
    pButtonLayout->addWidget(pCloseBttn);
    pButtonLayout->addWidget(pFindBttn);
    pButtonLayout->addStretch();
}

void Dialog::addFirstRowWidgets()
{
    pFirstRowLayout = new QHBoxLayout();
    pFirstRowLayout->addWidget( pFindLabel );
    pFirstRowLayout->addWidget( pFindText );
}

void Dialog::addSecondRowWidgets()
{
    pSecondRowLayout = new QHBoxLayout();
    pSecondRowLayout->addWidget( pReplaceLabel );
    pSecondRowLayout->addWidget( pReplaceText );
}

void Dialog::arrangeLayouts()
{
    pTopLayout = new QVBoxLayout();
    pTopLayout->addLayout( pFirstRowLayout );
    pTopLayout->addLayout( pSecondRowLayout );

    pMainLayout = new QVBoxLayout();
    pMainLayout->addLayout(pTopLayout);
    pMainLayout->addLayout(pButtonLayout);
}

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowSize();
    createWigets();

    addLastRowWidgets();
    addFirstRowWidgets();
    addSecondRowWidgets();

    arrangeLayouts();
    setLayout( pMainLayout );
}

Dialog::~Dialog()
{
}

