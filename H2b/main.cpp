#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    Car objCar1=Car("Renault", "Talisman", 2020);
    Car objCar2=Car("Peugeot", "408", 2024);
    Car objCar3=Car("Volvo", "S90", 2023);

    carList.push_back(objCar1);
    carList.push_back(objCar2);
    carList.push_back(objCar3);

    carList[1].printData();
    cout<<"************"<<endl;
    cout<<"KAIKKI AUTOT"<<endl;
    cout<<"************"<<endl;
    for(int x=0; x<=2; x++)
    {
     carList[x].printData();
    }
    return 0;
}
