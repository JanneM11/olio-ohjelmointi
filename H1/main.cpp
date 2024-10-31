#include <iostream>
#include "myfunctions.h"

using namespace std;

int main()
{
    int a, b;
    int result;
    float result2;
    cout << "Anna kokonaisluku " << endl;
    cin >> a;
    cout << "Anna toinen kokonaisluku" << endl;
    cin >> b;
    calcSum(a,b);
    calcDiv(a,b);
    result=retSum(a,b);
    cout<<a<<" + "<<b<<" = "<<result<<endl;
    result2=retDiv(a,b);
    cout <<a<<" / "<<b<<" = "<<result2<<endl;
    return 0;
}
