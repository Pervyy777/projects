#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_000_clicked();

    void on_pushButton_pluss_clicked();

    void on_pushButton_minuss_clicked();

    void on_pushButton_mansit_clicked();

    void on_pushButton_dividire_clicked();

    void on_pushButton__clicked();

private:
    Ui::MainWindow *ui;
    bool first = false;
    QVector<QString> obgects;
    int nummer;
    QString whats;
};
#endif // MAINWINDOW_H
