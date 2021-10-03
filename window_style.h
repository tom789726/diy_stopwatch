#ifndef WINDOW_STYLE_H
#define WINDOW_STYLE_H

#include <QWidget>



// for passing the pointer:
#include <QMainWindow>
//



namespace Ui {
class window_style;
}

class window_style : public QWidget
{
    Q_OBJECT

public:
    explicit window_style(QWidget *parent = nullptr);
    //Constructor + inhertance:
    explicit window_style(QMainWindow* window,QWidget* parent = nullptr);
    //
    ~window_style();

public slots:
    // need inheritance (pass pointer of mainwindow to here)
    void style_bg();
    void style_dark();
    void style_light();

private:
    Ui::window_style *ui;

    //
    int seed = 0;
    QMainWindow* MainWindow;


};

#endif // WINDOW_STYLE_H
