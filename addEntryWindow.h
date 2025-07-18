//
// Created by adi on 7/18/25.
//

#ifndef ADDENTRYWINDOW_H
#define ADDENTRYWINDOW_H
#include <qdialog.h>
#include <qlineedit.h>

#include "MainWindow.h"


class addEntryWindow:public QDialog {
    Q_OBJECT
    public:
    addEntryWindow(QWidget *parent=nullptr);
    signals:
    void entryAdded();
    private:
    QLineEdit *websiteEdit;
    QLineEdit *loginEdit;
    QLineEdit *passwordEdit;
    QPushButton* saveButton;
    QGridLayout *layout;
};



#endif //ADDENTRYWINDOW_H
