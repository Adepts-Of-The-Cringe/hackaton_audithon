#include "data.h"

data::data()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("debt");
    db.setUserName("test");
    db.setPassword("1234");
    db.open();
}
