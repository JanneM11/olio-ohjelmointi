#include "exampleclass.h"

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ExampleClass *objExa;
    objExa=new ExampleClass;
    objExa->startToWait();
    delete objExa;
    objExa=nullptr;
    return a.exec();
}
