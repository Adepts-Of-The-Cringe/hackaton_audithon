#include "mainwindow.h"
#include "ui_mainwindow.h"

QStringList months = {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
QStringList years = {"2011", "2012", "2013", "2014", "2015", "2016", "2017", "2018", "2019", "2020", "2021"};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , ExternalVolumeChart(new GeneralChart(crt_data::Volume, crt_data::External))
    , InternalVolumeChart(new GeneralChart(crt_data::Volume, crt_data::Internal))
    , ExternalRepaymentChart(new GeneralChart(crt_data::Repayment, crt_data::External))
    , InternalRepaymentChart(new GeneralChart(crt_data::Repayment, crt_data::Internal))
{
    ui->setupUi(this);
    ui->ExternalRepaymentGrBx->hide();
    ui->InternalRepaymentGrBx->hide();
    ui->ExternalVolumeFromMonthCmBx->addItems(months);
    ui->ExternalVolumeToMonthCmBx->addItems(months);
    ui->ExternalVolumeFromYearCmBx->addItems(years);
    ui->ExternalVolumeToYearCmBx->addItems(years);
    ui->InternalVolumeFromMonthCmBx->addItems(months);
    ui->InternalVolumeToMonthCmBx->addItems(months);
    ui->InternalVolumeFromYearCmBx->addItems(years);
    ui->InternalVolumeToYearCmBx->addItems(years);
    ExternalVolumeChart->SetFromMonth(ui->ExternalVolumeFromMonthCmBx->currentIndex());
    ExternalVolumeChart->SetFromYear(ui->ExternalVolumeFromYearCmBx->currentText());
    ExternalVolumeChart->SetToMonth(ui->ExternalVolumeToMonthCmBx->currentIndex());
    ExternalVolumeChart->SetToYear(ui->ExternalVolumeToYearCmBx->currentText());
    InternalVolumeChart->SetFromMonth(ui->InternalVolumeFromMonthCmBx->currentIndex());
    InternalVolumeChart->SetFromYear(ui->InternalVolumeFromYearCmBx->currentText());
    InternalVolumeChart->SetToMonth(ui->InternalVolumeToMonthCmBx->currentIndex());
    InternalVolumeChart->SetToYear(ui->InternalVolumeToYearCmBx->currentText());
    ui->ExternalVolumeChartView->setChart(ExternalVolumeChart);
    ui->ExternalRepaymentChartView->setChart(ExternalRepaymentChart);
    ui->InternalVolumeChartView->setChart(InternalVolumeChart);
    ui->InternalRepaymentChartView->setChart(InternalRepaymentChart);
    ExternalVolumeChart->Redraw();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ExternalRepaymentRB_toggled(bool checked)
{
    if (checked)
    {
        ui->ExternalRepaymentGrBx->show();
        ui->ExternalVolumeGrBx->hide();
        ExternalRepaymentChart->Redraw();
    }
}

void MainWindow::on_ExternalVolumeRB_toggled(bool checked)
{
    if (checked)
    {
        ui->ExternalVolumeGrBx->show();
        ui->ExternalRepaymentGrBx->hide();
        ExternalVolumeChart->Redraw();
    }
}

void MainWindow::on_ExternalVolumeFromMonthCmBx_currentIndexChanged(int index)
{
    ExternalVolumeChart->SetFromMonth(index);
    ExternalVolumeChart->Redraw();
}

void MainWindow::on_ExternalVolumeToMonthCmBx_currentIndexChanged(int index)
{
    ExternalVolumeChart->SetToMonth(index);
    ExternalVolumeChart->Redraw();
}

void MainWindow::on_ExternalVolumeFromYearCmBx_currentIndexChanged(const QString &arg1)
{
    ExternalVolumeChart->SetFromYear(arg1);
    ExternalVolumeChart->Redraw();
}

void MainWindow::on_ExternalVolumeToYearCmBx_currentIndexChanged(const QString &arg1)
{
    ExternalVolumeChart->SetToYear(arg1);
    ExternalVolumeChart->Redraw();
}

void MainWindow::on_InternalVolumeFromMonthCmBx_currentIndexChanged(int index)
{
    InternalVolumeChart->SetFromMonth(index);
    InternalVolumeChart->Redraw();
}

void MainWindow::on_InternalVolumeFromYearCmBx_currentIndexChanged(const QString &arg1)
{
    InternalVolumeChart->SetFromYear(arg1);
    InternalVolumeChart->Redraw();
}

void MainWindow::on_InternalVolumeToMonthCmBx_currentIndexChanged(int index)
{
    InternalVolumeChart->SetToMonth(index);
    InternalVolumeChart->Redraw();
}

void MainWindow::on_InternalVolumeToYearCmBx_currentIndexChanged(const QString &arg1)
{
    InternalVolumeChart->SetToYear(arg1);
    InternalVolumeChart->Redraw();
}

void MainWindow::on_InternalRepaymentRB_toggled(bool checked)
{
    if (checked)
    {
        ui->InternalRepaymentGrBx->show();
        ui->InternalVolumeGrBx->hide();
        InternalRepaymentChart->Redraw();
    }
}

void MainWindow::on_InternalVolumeRB_toggled(bool checked)
{
    if (checked)
    {
        ui->InternalVolumeGrBx->show();
        ui->InternalRepaymentGrBx->hide();
        InternalVolumeChart->Redraw();
    }
}
