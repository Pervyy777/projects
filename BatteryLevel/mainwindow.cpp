#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <windows.h>
#include <QTime>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
     SYSTEM_POWER_STATUS spsPwr;
    if (GetSystemPowerStatus(&spsPwr))
    {
        ui->ACS->setText(QString::number(static_cast<double>(spsPwr.ACLineStatus)));
        ui->BS->setText(QString::number(static_cast<double>(spsPwr.BatteryFlag)));
        ui->BL->setText(QString::number(static_cast<double>(spsPwr.BatteryLifePercent)) + "%");
        ui->progressBar->setValue(static_cast<int>(spsPwr.BatteryLifePercent));
        startTimer(1000);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::timerEvent(QTimerEvent *e) {

  Q_UNUSED(e);
   SYSTEM_POWER_STATUS spsPwr;
   if (GetSystemPowerStatus(&spsPwr))
   {
       ui->ACS->setText(QString::number(static_cast<double>(spsPwr.ACLineStatus)));
       ui->BS->setText(QString::number(static_cast<double>(spsPwr.BatteryFlag)));
       ui->BL->setText(QString::number(static_cast<double>(spsPwr.BatteryLifePercent)) + "%");
       ui->progressBar->setValue(static_cast<int>(spsPwr.BatteryLifePercent));
   }

}

