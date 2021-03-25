#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
<<<<<<< HEAD
//    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("localhost");
//    db.setDatabaseName("debt");
//    db.setUserName("test");
//    db.setPassword("1234");
//    bool ok = db.open();
//    w.say_ok(ok);
    ok = false;
=======
	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");
	db.setDatabaseName("debt");
	db.setUserName("test");
	db.setPassword("1234");
	bool ok = db.open();
	w.say_ok(ok);
>>>>>>> 7b4d013e9da91710ecbb7e404fed1674b1f3a172
    w.resize(640, 360);
    w.show();
    return a.exec();
}
