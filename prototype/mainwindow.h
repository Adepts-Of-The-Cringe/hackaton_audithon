#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mychart.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public:
    void say_ok(bool status, QString text);

private slots:
    void on_rb_vnesh_volstr_toggled(bool checked);

    void on_rb_vnesh_pogas_toggled(bool checked);

private:
    void redraw_chart(QChartView *currentView);
    int calculate_count_months();

private:
    Ui::MainWindow *ui;
    MyChart *chart;
    int count_months;
};

#endif // MAINWINDOW_H
