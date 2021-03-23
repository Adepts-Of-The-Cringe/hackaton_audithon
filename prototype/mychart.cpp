#include "mychart.h"

MyChart::MyChart() : QChart()
{
    QBarSet *set6 = new QBarSet("Перед оф.кр-ами - членами Парижского клуба");
    QBarSet *set1 = new QBarSet("Перед оф.кр-ами - членами Парижского клуба");
    QBarSet *set2 = new QBarSet("Задл. по ОВГВЗ");
    QBarSet *set3 = new QBarSet("Гос. гарантии в ин. валюте");
    QBarSet *set4 = new QBarSet("Перед бывшим СЭВ");
    QBarSet *set5 = new QBarSet("Ком.задл бывшего СССР");
    QBarSet *set0 = new QBarSet("Задл. по внешн. облг. займам");
    QBarSet *set7 = new QBarSet("Перед международн. фин. орг");
    *set6 << 821.3 << 822.7 << 777.0 << 779.2 << 751.8 << 754.7 << 692.1 << 682.1 << 668.2 << 643.9 << 661.3 << 668.9 << 610.2 << 577.9;
    *set1 << 1762.5 << 1762.5 << 1762.4 << 1721.0 << 1719.3 << 1719.3 << 1608.2 << 1608.2 << 1608.2 << 1536.7 << 1484.1 << 1484.1 << 1484.1 << 1484.1;
    *set2 << 1775.0 << 1775.0 << 1774.9 << 1774.9 << 1774.9 << 1774.9 << 1774.9 << 1774.9 << 1724.9 << 1724.9 << 1724.6 << 1724.6 << 1724.6 << 1724.6;
    *set3 << 839.7 << 852.3 << 856.8 << 913.3 << 824.2 << 817.6 << 816.1 << 817.9 << 816.5 << 813.5 << 795.8 << 969.4 << 966.0 << 966.8;
    *set4 << 1153.4 << 1132.9 << 1126.4 << 1113.4 << 1110.7 << 1119.7 << 1110.1 << 1137.8 << 1149.7 << 1142.4 << 1161.4 << 1094.8 << 1028.7 << 1043.1;
    *set5 << 821.1 << 825.6 << 812.9 << 55.8 << 55.7 << 56.2 << 56.2 << 57.5 << 58.0 << 58.6 << 59.5 << 59.2 << 56.9 << 57.8;
    *set0 << 30456.5 << 30456.5 << 30456.5 << 30456.5 << 30456.5 << 30456.5 << 29820.0 << 29820.0 << 29820.0 << 29820.0 << 29820.0 << 29820.0 << 29183.4 << 29183.4;
    *set7 << 3269.9 << 3252.2 << 3169.8 << 3142.8 << 3105.5 << 3072.3 << 2959.3 << 2934.4 << 2864.5 << 2805.2 << 2771.1 << 2759.6 << 2648.1 << 2626.7;
    QStackedBarSeries *series = new QStackedBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);
    series->append(set3);
    series->append(set4);
    series->append(set5);
    series->append(set6);
    series->append(set7);
    this->addSeries(series);
    this->setAnimationOptions(QChart::SeriesAnimations);
    QStringList categories;
    categories << "10.10" << "11.10" << "12.10" << "01.11" << "02.11" << "03.11" << "04.11" << "05.11" << "06.11" << "07.11" << "08.11" << "09.11" << "10.11" << "11.11";
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    this->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
    QValueAxis *axisY = new QValueAxis();
    this->addAxis(axisY, Qt::AlignLeft);
    axisY->setMax(50000.0);
    series->attachAxis(axisY);
    this->legend()->setVisible(true);
    this->legend()->setAlignment(Qt::AlignRight);
    this->setTheme(QChart::ChartThemeHighContrast);
}
