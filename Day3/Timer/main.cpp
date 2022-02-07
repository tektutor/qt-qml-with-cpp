#include <QCoreApplication>
#include "Timer.h"

int main ( int argc, char **argv ) {

	QCoreApplication theApp ( argc, argv );

	Timer timer;

	return theApp.exec();
}
