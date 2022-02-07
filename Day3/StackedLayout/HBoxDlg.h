#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>

class HBoxDlg : public QDialog {
Q_OBJECT
private:
   QPushButton *pBttn1, *pBttn2, *pBttn3;
   QHBoxLayout *pLayout;
public:
   HBoxDlg();
};
