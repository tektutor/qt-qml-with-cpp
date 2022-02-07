#include <QDialog>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QTabWidget>
#include <QDebug>

#include "ThreadDlg.h"

class MainDlg : public QDialog {
Q_OBJECT
private:
   QTabWidget *pTabWidget;
   QHBoxLayout *pButtonLayout;
   QVBoxLayout *pMainLayout;

   QPushButton *pBttnClose;
   QPushButton *pBttnNew;
   QPushButton *pBttnStart;
   QPushButton *pBttnStop;

   static int count;

private slots:
  void onNewButtonClicked(); 
  void onStartButtonClicked(); 
  void onStopButtonClicked(); 
  void onCloseButtonClicked(); 

  void onTabChanged( int );

  void onToggleStopButton( bool ); 
  void onToggleStartButton( bool ); 
public:
   MainDlg();
};
