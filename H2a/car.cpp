#include "car.h"


void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}



void Car::setModel(const string &newModel)
{
    model = newModel;
}



void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

Car::Car() {}

void Car::printData()
{
    cout<<"AUTON TIEDOT"<<endl;
    cout<<"Merkki: "<<brand<<endl;
    cout<<"Malli: "<<model<<endl;
    cout<<"Vuosimalli: "<<yearModel<<endl;
}
