#include <QDialog>
#include <QPushButton>
#include <QVBoxLayout>

class VBoxDlg : public QDialog {
Q_OBJECT
private:
   QPushButton *pBttn1, *pBttn2, *pBttn3;
   QVBoxLayout *pLayout;
public:
   VBoxDlg();
};
