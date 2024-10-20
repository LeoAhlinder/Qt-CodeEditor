#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "settings.h"

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

void MainWindow::on_btnSettings_clicked()
{
    settings *settingsWindow = new settings(this);
    settingsWindow->show();
}
