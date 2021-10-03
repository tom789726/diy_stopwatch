#include "window_style.h"
#include "ui_window_style.h"

#include <time.h>
#include <QDebug>
#include <QFileDialog>


// Auto-gen constructor
window_style::window_style(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::window_style)
{
    ui->setupUi(this);

    // Debug
    srand(time(NULL));
    seed = rand();
    ui->label_title->setText("Style: " + QString::number(seed));

}


// Constructor for inheritance
window_style::window_style(QMainWindow* window, QWidget* parent):
    QWidget(parent),
    ui(new Ui::window_style)
{
    ui->setupUi(this);

    //Debug
    ui->label_title->setText("A Congratulations!");
    MainWindow = window;
    /* This wont work,
     * Because what you get is the "QMainWindow" class (Qt library)
     * But not the "MainWindow" class (custom-defined)
     * So you can only have access to functions declared in "QMainWindow" class
     * Solution: maybe try putting them in main.cpp?
     * Solution2: Place #include in ".cpp" file instead of ".h" file!!
     */


    // Signal & Slots
    connect(ui->button_img,SIGNAL(clicked()),this,SLOT(style_bg()));
    connect(ui->button_dark,SIGNAL(clicked()),this,SLOT(style_dark()));
    connect(ui->button_light,SIGNAL(clicked()),this,SLOT(style_light()));

}

window_style::~window_style()
{
    delete ui;
}

void window_style::style_bg()
{
    qDebug("choose background image");

    //File Dialog
    QString path_f = QFileDialog::getOpenFileName(this,"Choose image");
    ui->label_title->setText(path_f);

    // check file type valid

    // change image

}

void window_style::style_dark()
{
    qDebug("dark mode");

}

void window_style::style_light()
{
    qDebug("light mode");

}
