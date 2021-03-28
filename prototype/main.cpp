#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow main_window;
    main_window.resize(640, 360);
    main_window.show();
    return app.exec();
}
