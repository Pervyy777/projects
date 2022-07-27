#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle(" ");
    w.setWindowIcon(QIcon("C:/battery.png"));
    w.show();
    return a.exec();
}
