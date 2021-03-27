#include "generalchart.h"

GeneralChart::GeneralChart(crt_data::VRType TChart, crt_data::EIType TDebt)
    : QChart()
    , chart_data(new crt_data(TChart, TDebt))
{
}

GeneralChart::~GeneralChart()
{
}

void GeneralChart::SetFromMonth(int month)
{
    chart_data->SetFromMonth(month);
    Redraw();
}

void GeneralChart::SetToMonth(int month)
{
    chart_data->SetToMonth(month);
    Redraw();
}

void GeneralChart::SetFromYear(int year)
{
    chart_data->SetFromYear(year);
    Redraw();
}

void GeneralChart::SetToYear(int year)
{
    chart_data->SetToYear(year);
    Redraw();
}

void GeneralChart::Redraw()
{
    if (chart_data->DebtType == crt_data::External)
    {
        QStringList categories;
        while (chart_data->NextSet())
        {
            QBarSet *NewSet = new QBarSet(chart_data->TakeTypeSet());
            while (chart_data->SetHaveValue())
            {
                *NewSet << chart_data->TakeCurrentValue();
                if (StackBars.isEmpty())
                {
                    categories << chart_data->TakeCategories();
                }
            }
            StackBars.push_back(NewSet);
        }
        QStackedBarSeries *series = new QStackedBarSeries();
        while (!StackBars.isEmpty())
        {
            series->append(StackBars.front());
            StackBars.pop_front();
        }
        this->addSeries(series);
        this->setAnimationOptions(QChart::SeriesAnimations);
        QBarCategoryAxis *axisX = new QBarCategoryAxis();
        axisX->append(categories);
        this->addAxis(axisX, Qt::AlignBottom);
        series->attachAxis(axisX);
        QValueAxis *axisY = new QValueAxis();
        this->addAxis(axisY, Qt::AlignLeft);
        axisY->setMax(70000.0);
        series->attachAxis(axisY);
        this->legend()->setVisible(true);
        this->legend()->setAlignment(Qt::AlignRight);
        this->setTheme(QChart::ChartThemeBlueCerulean);
    }
    else
    {
           QPieSeries *series = new QPieSeries();
           series->append("Тип № 5", 10);
           series->append("Тип № 4", 23);
           series->append("Тип № 3", 19);
           series->append("Тип № 2", 6);
           series->append("Тип № 1", 40);
           QPieSlice *slice = series->slices().at(1);
           slice->setExploded();
           slice->setLabelVisible();
           slice->setPen(QPen(Qt::darkGreen, 2));
           slice->setBrush(Qt::green);
           this->addSeries(series);
           this->setTitle("График погашения на DD месяца YYYY");
           this->legend()->hide();
    }
}
