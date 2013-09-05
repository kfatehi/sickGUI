#include "settingsdialog.h"
#include "ui_settingsdialog.h"

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
    ui->sabnzbdEdit->setText("http://sick:8000/");
    ui->sickbeardEdit->setText("http://sick:8001/");
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}
