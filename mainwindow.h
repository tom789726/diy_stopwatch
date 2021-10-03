#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include <QListWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    // Functions for style window
    void setBackground();


public slots:
    void clock_run();
    void clock_start();
    void clock_reset();
    void laps();
    void openWindowStyle();

private slots:
    void on_Button_start_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QTime time_clock;
    // for clock_start()
    int clock_ticking = 0;
    void label_update();

    // for laps()
    int count_laps = 0;
    QTime time_laps;
    QListWidgetItem *item;


};
#endif // MAINWINDOW_H
