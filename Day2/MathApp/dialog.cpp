#include "dialog.h"

MathDialog::MathDialog(QWidget *parent)
    : QDialog(parent)
{

    firstInput = secondInput = result = 0.0;

    setMinimumHeight(150);
    setMinimumWidth(450);
    setMaximumHeight(150);
    setMaximumWidth(450);

    pButtonAdd = new QPushButton("Add");
    pButtonSubtract = new QPushButton("Subtract");
    pButtonMultiply = new QPushButton("Multiply");
    pButtonDivide = new QPushButton("Divide");

    pButtonLayout = new QBoxLayout(QBoxLayout::RightToLeft);

    pButtonLayout->addWidget( pButtonDivide );
    pButtonLayout->addWidget( pButtonMultiply );
    pButtonLayout->addWidget( pButtonSubtract );
    pButtonLayout->addWidget( pButtonAdd );
    pButtonLayout->addStretch();

    pGridLayout = new QGridLayout();

    pFirstNumberLbl = new QLabel("First Number");
    pFirstText      = new QLineEdit();

    pSecondNumberLbl = new QLabel("Second Number");
    pSecondText      = new QLineEdit();

    pResultLbl       = new QLabel("Result");
    pResultText      = new QLineEdit();
    pResultText->setReadOnly(true);

    //First row in Grid
    pGridLayout->addWidget(pFirstNumberLbl, 0, 0 );
    pGridLayout->addWidget(pFirstText,0,1);

    //Second row in Grid
    pGridLayout->addWidget(pSecondNumberLbl, 1, 0 );
    pGridLayout->addWidget(pSecondText,1,1);

    //Third row in Grid
    pGridLayout->addWidget(pResultLbl, 2, 0 );
    pGridLayout->addWidget(pResultText,2,1);

    pMainLayout = new QVBoxLayout;

    pMainLayout->addLayout( pGridLayout );
    pMainLayout->addLayout(pButtonLayout );

    setLayout(pMainLayout);

    connect ( pButtonAdd, SIGNAL(clicked()), this, SLOT(onAddButtonClicked()));
    connect ( pButtonSubtract, SIGNAL(clicked()), this, SLOT(onSubtractButtonClicked()));
    connect ( pButtonMultiply, SIGNAL(clicked()), this, SLOT(onMultiplyButtonClicked()));
    connect ( pButtonDivide, SIGNAL(clicked()), this, SLOT(onDivideButtonClicked()));
}

void MathDialog::onAddButtonClicked() {
    qDebug() << "Add button clicked" << endl;

    firstInput = pFirstText->text().toDouble();
    secondInput = pSecondText->text().toDouble();

    result = firstInput + secondInput;

    QString strResult;
    strResult.setNum(result);
    pResultText->setText(strResult);

}

void MathDialog::onSubtractButtonClicked() {
    qDebug() << "Subtract button clicked" << endl;
    firstInput = pFirstText->text().toDouble();
    secondInput = pSecondText->text().toDouble();

    result = firstInput - secondInput;

    QString strResult;
    strResult.setNum(result);
    pResultText->setText(strResult);

}

void MathDialog::onMultiplyButtonClicked() {
    qDebug() << "Multiply button clicked" << endl;
    firstInput = pFirstText->text().toDouble();
    secondInput = pSecondText->text().toDouble();

    result = firstInput * secondInput;

    QString strResult;
    strResult.setNum(result);
    pResultText->setText(strResult);

}

void MathDialog::onDivideButtonClicked() {
    qDebug() << "Divide button clicked" << endl;
    firstInput = pFirstText->text().toDouble();
    secondInput = pSecondText->text().toDouble();

    result = firstInput / secondInput;

    QString strResult;
    strResult.setNum(result);
    pResultText->setText(strResult);

}

MathDialog::~MathDialog()
{
}

