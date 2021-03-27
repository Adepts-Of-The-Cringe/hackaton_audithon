#include "mainwindow.h"
#include "ui_mainwindow.h"

QStringList months = {"Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"};
QStringList years = {"2010", "2011", "2012", "2013", "2014", "2015", "2016", "2017", "2018", "2019", "2020", "2021"};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gbx_pogas->setHidden(true);
    GeneralChart vv(ui->vnesh_volume_2);
//    ui->vnesh_volume_2->layout()->addWidget(vv.GetViewer());
//    ui->gbx_pogas->layout()->addWidget(new QComboBox);
    ui->cmb_vnesh_pogas_month_from->addItems(months);
    ui->cmb_vnesh_pogas_month_to->addItems(months);
    ui->cmb_vnesh_volstr_month_from->addItems(months);
    ui->cmb_vnesh_volstr_month_to->addItems(months);
    ui->cmb_vnesh_pogas_year_from->addItems(years);
    ui->cmb_vnesh_pogas_year_to->addItems(years);
    ui->cmb_vnesh_volstr_year_from->addItems(years);
    ui->cmb_vnesh_volstr_year_to->addItems(years);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_rb_vnesh_volstr_toggled(bool checked)
{
    ui->gbx_volstr->setVisible(checked);
}

void MainWindow::on_rb_vnesh_pogas_toggled(bool checked)
{
    ui->gbx_pogas->setVisible(checked);
}
