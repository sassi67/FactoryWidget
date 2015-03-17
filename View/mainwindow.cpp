#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "lineeditstore.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    WidgetStore *s = new LineEditStore(this);
    QWidget *w = s->buildWidget("lineeditwithlabel");

    w->setParent(ui->centralWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

