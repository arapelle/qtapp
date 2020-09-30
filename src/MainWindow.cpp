#include <qtcapp/MainWindow.hpp>
#include "./ui_MainWindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->print_button, &QPushButton::clicked, this, &MainWindow::on_print_clicked);
    QObject::connect(ui->save_button, &QPushButton::clicked, this, &MainWindow::on_save_clicked);
    QObject::connect(ui->save_button, &QPushButton::clicked, [](bool checked){ std::cout << "save: " << checked << std::endl; });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_print_clicked()
{
    std::cout << "Print!" << std::endl;
}

void MainWindow::on_save_clicked()
{
    std::cout << "Saving!" << std::endl;
}

