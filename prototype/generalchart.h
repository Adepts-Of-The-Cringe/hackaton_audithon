#ifndef GENERALCHART_H
#define GENERALCHART_H

#include <QtCharts>

using namespace QtCharts;

class GeneralChart : public QChart
{
public:
    GeneralChart(QWidget *parent);
    ~GeneralChart();

public:
    QChartView *GetViewer();

private:
    QChartView Viewer;
};

#endif // GENERALCHART_H
