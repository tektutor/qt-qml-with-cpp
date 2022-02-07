#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>

class MyDlg : public QDialog {
Q_OBJECT
private:
   QPushButton *pStartLoopBttn;
   QHBoxLayout *pLayout;
public:
   MyDlg();
protected slots:
   void onButtonClicked();

};
