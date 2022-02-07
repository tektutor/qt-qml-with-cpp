#include <QDialog>
#include <QPushButton>
#include <QBoxLayout>

class BoxDlg : public QDialog {
Q_OBJECT
private:
   QPushButton *pBttn1, *pBttn2, *pBttn3;
   QBoxLayout *pLayout;
public:
   BoxDlg();
};
