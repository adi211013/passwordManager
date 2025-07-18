//
// Created by adi on 7/18/25.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QApplication>
#include <QMessageBox>
#include "addEntryWindow.h"
class MainWindow : public QWidget {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);

private:
    QGridLayout *layout;
    QPushButton *addButton;
    QPushButton *viewButton;
    QPushButton *exitButton;

private slots:
    void onExitClicked();
    void onAddClicked();
    void onViewClicked();
    void onEntryAdded();

};



#endif //MAINWINDOW_H
