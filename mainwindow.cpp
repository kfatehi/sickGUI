#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include "settingsdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(HOME);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionHome_triggered()
{
    ui->stackedWidget->setCurrentIndex(HOME);
}

void MainWindow::on_actionSabnzbd_triggered()
{
    ui->stackedWidget->setCurrentIndex(SABNZBD);
}

void MainWindow::on_actionSickbeard_triggered()
{
    ui->stackedWidget->setCurrentIndex(SICKBEARD);
}

void MainWindow::on_actionVideos_triggered()
{
    ui->stackedWidget->setCurrentIndex(VIDEOS);
}

void MainWindow::on_actionSettings_triggered()
{
    SettingsDialog *s = new SettingsDialog(this);
    s->show();
}

void MainWindow::on_actionNZB_Search_triggered()
{
    ui->stackedWidget->setCurrentIndex(NZBSITES);
}
