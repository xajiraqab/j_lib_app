#ifndef LIBMAIN_H
#define LIBMAIN_H

#include "../../interfaces/interfaces.h"

class LibMain :public QObject, public ILib
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID ILibId FILE "main.json")
    Q_INTERFACES(ILib)

public:
    explicit LibMain(QObject *parent = nullptr);
    ~LibMain();

    // ILib interface
    virtual QString getName() const;
    virtual ILibWindow *GetWindow();
};

#endif // LIBMAIN_H
