#include "mainwindow.h"
#include "ui_mainwindow.h"

QStringList months = {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
QStringList years = {"2010", "2011", "2012", "2013", "2014", "2015", "2016", "2017", "2018", "2019", "2020", "2021"};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , ExternalVolumeChart(new GeneralChart(crt_data::Volume, crt_data::External))
    , InternalVolumeChart(new GeneralChart(crt_data::Volume, crt_data::Internal))
    , ExternalRepaymentChart(new GeneralChart(crt_data::Repayment, crt_data::External))
    , InternalRepaymentChart(new GeneralChart(crt_data::Repayment, crt_data::Internal))
{
    ui->setupUi(this);
    ui->ExternalRepaymentGrBx->setHidden(true);
    ui->ExternalVolumeFromMonthCmBx->addItems(months);
    ui->ExternalVolumeToMonthCmBx->addItems(months);
    ui->ExternalVolumeFromYearCmBx->addItems(years);
    ui->ExternalVolumeToYearCmBx->addItems(years);
    ExternalVolumeChart->SetFromMonth(1);
    ExternalVolumeChart->SetFromYear(2011);
    ExternalVolumeChart->SetToMonth(10);
    ExternalVolumeChart->SetToYear(2012);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ExternalRepaymentRB_toggled(bool checked)
{
    if (checked)
    {
        ui->ExternalRepaymentGrBx->setVisible(checked);
        ExternalRepaymentChart->Redraw();
    }

}

void MainWindow::on_ExternalVolumeRB_toggled(bool checked)
{
    if (checked)
    {
        ui->ExternalVolumeGrBx->setVisible(checked);
        ExternalVolumeChart->Redraw();
    }
}

void MainWindow::on_ExternalVolumeFromMonthCmBx_currentIndexChanged(int index)
{
    ExternalVolumeChart->SetFromMonth(index);
}

void MainWindow::on_ExternalVolumeToMonthCmBx_currentIndexChanged(int index)
{
    ExternalVolumeChart->SetToMonth(index);
}

void MainWindow::on_ExternalVolumeFromYearCmBx_currentIndexChanged(const QString &arg1)
{
    ExternalVolumeChart->SetFromYear(arg1.toInt());
}

void MainWindow::on_ExternalVolumeToYearCmBx_currentIndexChanged(const QString &arg1)
{
    ExternalVolumeChart->SetToYear(arg1.toInt());
}
