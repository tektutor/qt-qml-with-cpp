#include <QGuiApplication>
#include <QQuickView>

int main ( int argc, char **argv ) {
	QGuiApplication theApp( argc, argv );

	QQuickView view;
	view.setSource ( QUrl::fromLocalFile ( "main.qml" ) );
	view.show();

	return theApp.exec();
}
