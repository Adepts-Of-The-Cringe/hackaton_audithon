#ifndef MYCHART_H
#define MYCHART_H

#include <QtCharts>
#include <QSqlDatabase>
#include <QSqlQuery>
using namespace QtCharts;

namespace Crt { class MyChart; }
class MyChart : public QChart
{
public:
    MyChart();
};

#endif // MYCHART_H
