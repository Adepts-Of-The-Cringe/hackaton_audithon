#include "crt_data.h"

QSqlDatabase crt_data::db = QSqlDatabase::addDatabase("QMYSQL");

crt_data::crt_data(VRType TChart, EIType TDebt)
    : ChartType(TChart)
    , DebtType(TDebt)
{
    db.setHostName("localhost");
    db.setDatabaseName("debt");
    db.setUserName("test");
    db.setPassword("1234");
    db.open();
}

void crt_data::SetFromMonth(int month)
{
    MonthFrom = month;
    DateFrom = FormDate(YearFrom, MonthFrom);
    Recalculate();
}

void crt_data::SetToMonth(int month)
{
    MonthTo = month;
    DateTo = FormDate(YearTo, MonthTo);
    Recalculate();
}

void crt_data::SetFromYear(int year)
{
    YearFrom = year;
    DateFrom = FormDate(YearFrom, MonthFrom);
    Recalculate();
}

void crt_data::SetToYear(int year)
{
    YearTo = year;
    DateTo = FormDate(YearTo, MonthTo);
    Recalculate();
}

QString crt_data::FormDate(int year, int month)
{
    return(QVariant(year).toString() + "-" + QVariant(month).toString() + "-00");
}

bool crt_data::NextSet()
{
    bool ok = (CountSet != 0);
    if (ok)
    {
        query.prepare("select distinct(type) from external where month between (datefrom) and (dateto) "
                    "VALUES (:datefrom, :dateto)");
        query.bindValue(":datefrom", DateFrom);
        query.bindValue(":dateto", DateTo);
        query.exec();
        query.next();
        TypeSet = query.value(CountSet - 1).toString();
    }
    CountSet--;
    query.finish();
    query.prepare("select usd, month from external where month between date(datefrom) and date(dateto) and type=(typeset) order by month"
                "VALUES (:datefrom, :dateto, :typeset)");
    query.bindValue(":datefrom", DateFrom);
    query.bindValue(":dateto", DateTo);
    query.bindValue(":typeset", TypeSet);
    query.exec();
    return (ok);
}

void crt_data::Recalculate()
{
    query.prepare("select count(distinct(type)) from external where month between date(datefrom) and date(dateto) "
                    "VALUES (:datefrom, :dateto)");
    query.bindValue(":datefrom", DateFrom);
    query.bindValue(":dateto", DateTo);
    query.exec();
    query.next();
    CountSet = query.value(0).toInt();
    query.finish();
}

QString crt_data::TakeTypeSet()
{
    return(TypeSet);
}

bool crt_data::SetHaveValue()
{
    bool ok = query.next();
    if (!ok)
    {
        query.finish();
    }
    return(ok);
}

double crt_data::TakeCurrentValue()
{
    return(query.value(query.record().indexOf("usd")).toDouble());
}

QString crt_data::TakeCategories()
{
    QString ret = query.value(query.record().indexOf("month")).toString();
    ret.truncate(7);
    return(ret);
}
