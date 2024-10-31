#include <iostream>
#include <iomanip>      //tarivitaan desimaalien säätämiseen
using namespace std;

void calcSum(int a, int b)
{
    int result;
    result = a+b;
    cout <<a<<" + "<<b<<" = "<<result<<endl;
}

void calcDiv(int a, int b)
{
    float osoittaja = static_cast<float>(a);
    float nimittaja = static_cast<float>(b);
    float result;
    if(b == 0){
        cout <<"Jakaja ei voi olla 0"<<endl;
    }
    else{

        result = osoittaja/nimittaja;
        cout <<a<<" / "<<b<<" = "<<fixed<<setprecision(2)<<result<<endl; //laitetaan desimaalit 2
    }

}

int retSum(int a, int b)
{
    int result;
    result = a+b;
    return result;
}

float retDiv(int a, int b)
{
    float osoittaja = static_cast<float>(a);
    float nimittaja = static_cast<float>(b);
    float result;
    if(b==0){
        cout<<"Jakaja ei voi olla 0"<<endl;
        return 0;
    }
    else{
        result = osoittaja/nimittaja;
        return result;
    }
}
