#include <QDialog>
#include <QPushButton>
#include <QGridLayout>

class GridDlg : public QDialog {
Q_OBJECT
private:
   QPushButton *pBttn1, *pBttn2, *pBttn3;
   QPushButton *pBttn4, *pBttn5, *pBttn6;
   QPushButton *pBttn7, *pBttn8, *pBttn9;
   QGridLayout *pLayout;
public:
   GridDlg();
};
