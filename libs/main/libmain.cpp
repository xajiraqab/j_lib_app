#include "libmain.h"
#include "mainwindow.h"

LibMain::LibMain(QObject *parent)
    : QObject(parent)
{
}

LibMain::~LibMain()
{
    qDebug() << "~GenericPlugin";
}

QString LibMain::getName() const
{
    return "jax";
}

ILibWindow *LibMain::GetWindow()
{
    return new MainWindow();
}
