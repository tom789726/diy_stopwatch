#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QPushButton>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(clock_run()));


    connect(ui->Button_start,SIGNAL(clicked()),this,SLOT(clock_start()));
    connect(ui->Button_reset,SIGNAL(clicked()),this,SLOT(clock_reset()));
    connect(ui->Button_laps,SIGNAL(clicked()),this,SLOT(laps()));

    time_clock = QTime(0,0,0,0);
    time_laps = time_clock;
    label_update();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clock_run()
{
    // update clock every second
    time_clock = time_clock.addSecs(1);
    label_update();

    // update laps every second
    time_laps = time_laps.addSecs(1);
    if (count)
    {
        QString display_text = "Lap " + QString::number(count) + ": " +time_laps.toString(" hh : mm : ss");
        item->setText(display_text);
    }

}

void MainWindow::clock_start()
{
    if (!clock_ticking){
        qDebug("Start");
        timer->start(1000);
        clock_ticking = 1;
    } else {
        qDebug("Stop");
        timer->stop();
        clock_ticking = 0;
    }
}

void MainWindow::clock_reset()
{
    qDebug("reset");
    // reset clock
    time_clock = QTime(0,0,0,0);

    // reset laps()
    time_laps = time_clock;
    count = 0;
    ui->listWidget->clear();

    label_update();
}

void MainWindow::laps()
{
    qDebug("laps");

    if (!count) // Do this for first lap
    {
        count++;
        QString display_text = "Lap " + QString::number(count) + ": " +time_laps.toString(" hh : mm : ss");
        item = new QListWidgetItem(display_text);
        ui->listWidget->addItem(item);
        time_laps = QTime(0,0,0,0);
    }

    count++;
    time_laps = QTime(0,0,0,0);
    QString display_text = "Lap " + QString::number(count) + ": " +time_laps.toString(" hh : mm : ss");
    item = new QListWidgetItem(display_text);
    ui->listWidget->addItem(item);
}

void MainWindow::label_update()
{
    QString time_text = time_clock.toString(" hh : mm : ss");
    if (time_clock.second() % 2 == 1)
    {
        time_text[4] = ' ';
        time_text[9] = ' ';
    }
    ui->label_time->setText(time_text);
}


void MainWindow::on_Button_start_clicked()
{

}
