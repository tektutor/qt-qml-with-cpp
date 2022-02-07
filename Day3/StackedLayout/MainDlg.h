#include <QDialog>
#include <QStackedLayout>
#include <QBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

#include "HBoxDlg.h"
#include "VBoxDlg.h"
#include "BoxDlg.h"
#include "GridDlg.h"

#define HBOX 0
#define VBOX 1
#define BOX 2
#define GRID 3

class MainDlg : public QDialog {
Q_OBJECT
private:
   QPushButton *pBttnPrev, *pBttnNext, *pBttnQuit;
   QBoxLayout *pButtonLayout;
   QStackedLayout *pStackLayout;
   QVBoxLayout *pMainLayout;

   HBoxDlg *pHBoxDlg;
   VBoxDlg *pVBoxDlg;
   BoxDlg *pBoxDlg;
   GridDlg *pGridDlg;
private slots:
   void onPrevButtonClicked();
   void onNextButtonClicked();
   void onQuitButtonClicked();
public:
   MainDlg();
};
