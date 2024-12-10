#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_convertButton_clicked() {
    double input = ui->inputValue->text().toDouble();
    QString conversionType = ui->conversionType->currentText();
    double result = 0;

    if (conversionType == "Celsius para Fahrenheit") {
        result = convertTemperature(input, true);
    } else if (conversionType == "Fahrenheit para Celsius") {
        result = convertTemperature(input, false);
    } else if (conversionType == "Metros para Quilômetros") {
        result = convertLength(input, "m_to_km");
    } else if (conversionType == "Quilos para gramas") {
        result = convertWeight(input, "kg_to_g");
    }

    ui->resultLabel->setText(QString::number(result, 'f', 2));
}

double MainWindow::convertTemperature(double value, bool toFahrenheit) {
    return toFahrenheit ? (value * 9/5) + 32 : (value - 32) * 5/9;
}

double MainWindow::convertLength(double value, QString type) {
    if (type == "m_to_km") return value / 1000;
    return value;
}

double MainWindow::convertWeight(double value, QString type) {
    if (type == "kg_to_g") return value * 1000;
    return value;
}
