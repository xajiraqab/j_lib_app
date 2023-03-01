#ifndef INTERFACES_H
#define INTERFACES_H

#include <QObject>
#include <QMainWindow>



class Q_DECL_EXPORT ILibWindow
{
public:
    ILibWindow(){}
    virtual ~ILibWindow(){}
    virtual void Show() = 0;
};

#define ILibWindowId "com.example.ILibWindow"
Q_DECLARE_INTERFACE(ILibWindow, ILibWindowId)




class Q_DECL_EXPORT ILib
{
public:
    ILib(){}
    virtual ~ILib(){}
    virtual QString getName() const = 0;
    virtual ILibWindow *GetWindow() = 0;
};

#define ILibId "com.example.ILib"
Q_DECLARE_INTERFACE(ILib, ILibId)




#endif // INTERFACES_H
