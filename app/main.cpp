#include <QApplication>
#include <QPluginLoader>
#include "../interfaces/interfaces.h"
#include <QMessageBox>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QCoreApplication::addLibraryPath("libs"); // add path to plugin folder

    ILibWindow *w = nullptr;

    QPluginLoader loader("libs/main.dll"); // load the plugin

    if (!loader.load())
    {
        QMessageBox::critical(nullptr, "", "Could not load plugin: " + loader.errorString());
        return 0;
    }


    // Plugin loaded successfully
    QObject *plugin = loader.instance();

    ILib *libMain = qobject_cast<ILib *>(plugin);

    if (!libMain)
    {
        QMessageBox::critical(nullptr, "", "Could not cast plugin to ILib");
        return 0;
    }

    w = libMain->GetWindow();
    w->Show();

    int res = a.exec();
    if (w)
        delete w;
    return res;
}
