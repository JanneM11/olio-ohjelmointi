#include <iostream>
#include <myClass.h>

using namespace std;

int main()
{
    MyClass *objMy;
    objMy=new MyClass;
    objMy->raiseMySignal();

    delete objMy;
    objMy=nullptr;

    return 0;
}
