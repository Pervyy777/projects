#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_1_clicked()
{
    if(first){
        QString Text(ui->label->text() + "1");
        ui->label->setText(Text);
    }else{
        first = true;
        ui->label->setText("1");
    }

}


void MainWindow::on_pushButton_2_clicked()
{
    if(first){
        QString Text(ui->label->text() + "2");
        ui->label->setText(Text);
    }else{
        first = true;
        ui->label->setText("2");
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    if(first){
        QString Text(ui->label->text() + "3");
        ui->label->setText(Text);
    }else{
        first = true;
        ui->label->setText("3");
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    if(first){
        QString Text(ui->label->text() + "4");
        ui->label->setText(Text);
    }else{
        first = true;
        ui->label->setText("4");
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    if(first){
        QString Text(ui->label->text() + "5");
        ui->label->setText(Text);
    }else{
        first = true;
        ui->label->setText("5");
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    if(first){
        QString Text(ui->label->text() + "6");
        ui->label->setText(Text);
    }else{
        first = true;
        ui->label->setText("6");
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    if(first){
        QString Text(ui->label->text() + "7");
        ui->label->setText(Text);
    }else{
        first = true;
        ui->label->setText("7");
    }
}


void MainWindow::on_pushButton_8_clicked()
{
    if(first){
        QString Text(ui->label->text() + "8");
        ui->label->setText(Text);
    }else{
        first = true;
        ui->label->setText("8");
    }
}


void MainWindow::on_pushButton_9_clicked()
{
    if(first){
        QString Text(ui->label->text() + "9");
        ui->label->setText(Text);
    }else{
        first = true;
        ui->label->setText("9");
    }
}


void MainWindow::on_pushButton_0_clicked()
{
    if(first){
        QString Text(ui->label->text() + "0");
        ui->label->setText(Text);
    }
}


void MainWindow::on_pushButton_000_clicked()
{
    if(first){
        QString Text(ui->label->text() + "000");
        ui->label->setText(Text);
    }
}


void MainWindow::on_pushButton_pluss_clicked()
{
    if(first){
    obgects.append(ui->label->text());
    obgects.append("+");
    first = false;
    ui->label->setText("0");}
}


void MainWindow::on_pushButton_minuss_clicked()
{
    if(first){
    obgects.append(ui->label->text());
    obgects.append("-");
    first = false;
    ui->label->setText("0");}
}


void MainWindow::on_pushButton_mansit_clicked()
{
    if(first){
    obgects.append(ui->label->text());
    obgects.append("*");
    first = false;
    ui->label->setText("0");}
}


void MainWindow::on_pushButton_dividire_clicked()
{
    if(first){
        obgects.append(ui->label->text());
        obgects.append("/");
        first = false;
        ui->label->setText("0");}
}


void MainWindow::on_pushButton__clicked()
{
    if(first){
        QString Text(ui->label->text());
        for (int i=0; i < obgects.size() + 1; ++i) {
            if(i % 2){
                whats = obgects.at(i);
            }else{
                int numberIn;
                if(i == obgects.size()){
                    numberIn = Text.toInt();
                }else
                    numberIn = obgects.at(i).toInt();
                if(whats == "+"){
                    nummer += numberIn;
                }else if(whats == "-"){
                    nummer -= numberIn;
                }else if(whats == "*"){
                    nummer *= numberIn;
                }else if(whats == "/"){
                    nummer /= numberIn;
                }else
                    nummer = numberIn;

            }
        }
        ui->label->setText(QString::number(nummer));
        nummer = 0;
        first = false;
        for(auto item : obgects){
            item = 0;
        }
        obgects.clear();
        QVector<QString>().swap(obgects);
        Q_ASSERT(obgects.capacity() == 0);
    }
}

