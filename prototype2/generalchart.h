#ifndef GENERALCHART_H
#define GENERALCHART_H

#include <QtCharts>
#include "crt_data.h"

using namespace QtCharts;

class GeneralChart : public QChart
{
    Q_OBJECT
public:
    GeneralChart(crt_data::VRType TChart, crt_data::EIType TDebt);
    ~GeneralChart();

public:
    void SetFromMonth(int month);
    void SetToMonth(int month);
    void SetFromYear(int year);
    void SetToYear(int year);
    void Redraw();

private:
    crt_data *chart_data;
    QVector<QBarSet*> StackBars;
};

#endif // GENERALCHART_H
