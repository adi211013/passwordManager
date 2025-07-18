//
// Created by adi on 7/18/25.
//

#include "addEntryWindow.h"
addEntryWindow::addEntryWindow(QWidget* parent):QDialog(parent) {
    setWindowTitle("Password Manager");
    resize(400, 300);
    layout = new QGridLayout(this);
    websiteEdit=new QLineEdit("Strona",this);
    loginEdit=new QLineEdit("Login",this);
    passwordEdit=new QLineEdit("Haslo",this);
    websiteEdit->setFixedSize(100, 200);
    loginEdit->setFixedSize(100, 200);
    passwordEdit->setFixedSize(100, 200);
    layout->addWidget(websiteEdit, 0, 0);
    layout->addWidget(loginEdit, 1, 0);
    layout->addWidget(passwordEdit, 2, 0);
    QPushButton* saveButton = new QPushButton("Save Password");
    layout->addWidget(saveButton, 3, 0);
    connect(saveButton, &QPushButton::clicked, this, [this]() {
        emit entryAdded();
        accept();
    });
}
