#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    pSignalMapper = new QSignalMapper();

    pMainLayout = new QGridLayout();


    rowMax = QInputDialog::getInt(this, "Dynamic Grid", "Row count", 3, 3, 10, 1, nullptr);
    colMax = QInputDialog::getInt(this, "Dynamic Grid", "Col count", 3, 3, 10, 1, nullptr);;

    QPushButton *pBttn = NULL;
    QString strButtonCaption;
    QString strIndex;
    int index=1;
    for ( int row=0; row<rowMax; ++row) {
        for ( int col=0; col<colMax; ++col ) {
            strButtonCaption = "Button ";
            strIndex.setNum(index++);
            strButtonCaption.append(strIndex);
            pBttn = new QPushButton(strButtonCaption);
            connect ( pBttn, SIGNAL(clicked()), pSignalMapper,SLOT(map()));
            pSignalMapper->setMapping(pBttn, strButtonCaption );
            pMainLayout->addWidget(pBttn,row,col);
        }
    }

    connect( pSignalMapper, SIGNAL(mapped(QString)), this, SLOT(onButtonClicked(QString)));

    setLayout(pMainLayout);
}

void Dialog::onButtonClicked(QString buttonCaption) {
    qDebug() << buttonCaption << "clicked ..." << endl;

    if ( buttonCaption == "Button 1" ) {
        QPushButton *pBttn = new QPushButton("Dynamic Button");
        connect ( pBttn, SIGNAL(clicked()), pSignalMapper,SLOT(map()));
        pSignalMapper->setMapping(pBttn, "Dynamic Button" );

        int row = pMainLayout->rowCount();
        int col = 0;

        pMainLayout->addWidget(pBttn,row,col);
    }
}


Dialog::~Dialog()
{
}

