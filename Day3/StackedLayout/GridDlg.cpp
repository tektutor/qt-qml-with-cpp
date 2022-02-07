#include "GridDlg.h"

GridDlg::GridDlg() {
	pBttn1 = new QPushButton("Button 1");
	pBttn2 = new QPushButton("Button 2");
	pBttn3 = new QPushButton("Button 3");

	pBttn4 = new QPushButton("Button 4");
	pBttn5 = new QPushButton("Button 5");
	pBttn6 = new QPushButton("Button 6");

	pBttn7 = new QPushButton("Button 7");
	pBttn8 = new QPushButton("Button 8");
	pBttn9 = new QPushButton("Button 9");

	pLayout =new QGridLayout();

	//Row 1
	pLayout->addWidget ( pBttn1, 0, 0 );
	pLayout->addWidget ( pBttn2, 0, 1 );
	pLayout->addWidget ( pBttn3, 0, 2 );

	//Row 2
	pLayout->addWidget ( pBttn4, 1, 0 );
	pLayout->addWidget ( pBttn5, 1, 1 );
	pLayout->addWidget ( pBttn6, 1, 2 );

	//Row 3
	pLayout->addWidget ( pBttn7, 2, 0 );
	pLayout->addWidget ( pBttn8, 2, 1 );
	pLayout->addWidget ( pBttn9, 2, 2 );

	setLayout ( pLayout );
}
