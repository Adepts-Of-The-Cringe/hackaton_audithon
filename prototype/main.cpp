#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");
	db.setDatabaseName("debt");
	db.setUserName("test");
	db.setPassword("1234");
	bool ok = db.open();
	w.say_ok(ok);
    w.resize(640, 360);
    w.show();
    return a.exec();
}
