#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../../interfaces/interfaces.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow, public ILibWindow
{
    Q_OBJECT
    Q_INTERFACES(ILibWindow)

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // ILibWindow interface
    void Show();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
