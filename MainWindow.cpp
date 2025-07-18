//
// Created by adi on 7/18/25.
//

#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent) : QWidget(parent){

     setWindowTitle("Password Manager");
     resize(400, 300);
     layout = new QGridLayout(this);
     addButton = new QPushButton("Dodaj dane");
     addButton->setFixedSize(100, 50);
     viewButton = new QPushButton("Odczytaj dane");
     viewButton->setFixedSize(100, 50);
     exitButton = new QPushButton("Wyjście");
     exitButton->setFixedSize(100, 50);
     layout->addWidget(addButton, 0, 0);
     layout->addWidget(viewButton, 1, 0);
     layout->addWidget(exitButton, 2, 0);
     connect(exitButton, &QPushButton::clicked, this, &MainWindow::onExitClicked);
    connect(addButton, &QPushButton::clicked, this, &MainWindow::onAddClicked);

}
void MainWindow::onExitClicked() {
     QApplication::quit();
 }
void MainWindow::onAddClicked() {
    auto dialog=new addEntryWindow(this);
    connect(dialog, &addEntryWindow::entryAdded, this, &MainWindow::onEntryAdded);
    dialog->exec();
}
void MainWindow::onViewClicked() {
    QApplication::quit();
}
void MainWindow::onEntryAdded() {

}
