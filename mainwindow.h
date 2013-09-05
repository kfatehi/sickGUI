#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

enum Pages {
    HOME, SABNZBD, SICKBEARD, VIDEOS, NZBSITES
};

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionHome_triggered();

    void on_actionSabnzbd_triggered();

    void on_actionSickbeard_triggered();

    void on_actionVideos_triggered();

    void on_actionSettings_triggered();

    void on_actionNZB_Search_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
