#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_convertButton_clicked();

private:
    Ui::MainWindow *ui;
    double convertTemperature(double value, bool toFahrenheit);
    double convertLength(double value, QString type);
    double convertWeight(double value, QString type);
};

#endif // MAINWINDOW_H
