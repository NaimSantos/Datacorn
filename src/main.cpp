#include <QApplication>
#include <QTranslator>

#include "gui/main_window.hpp"

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return QApplication::exec();
}
