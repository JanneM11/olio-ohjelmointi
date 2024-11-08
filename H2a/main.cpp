#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>
#include<memory>
using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Reanult");
    objCar.setModel("Talisman");
    objCar.setYearModel(2020);
    objCar.printData();

    Rectangle *objRectangle;
    objRectangle = new Rectangle;
    objRectangle->setWidth(21.2);
    objRectangle->setHeight(2.2);
    cout<<"Pinta-ala="<<objRectangle->getArea()<<endl;
    cout<<"Ymparysmitta="<<objRectangle->getCircum()<<endl;
    delete objRectangle;
    objRectangle=nullptr;

    unique_ptr<Student> objStudent=make_unique<Student>();
    objStudent->setName("Teppo Testi");
    objStudent->setStudentNumber(1234);
    objStudent->setAverage(4.5);
    cout<<"****************"<<endl;
    cout<<"Opiskelijan tiedot"<<endl;
    cout<<"Nimi "<<objStudent->getName()<<endl;
    cout<<"Opiskelijanumero "<<objStudent->getStudentNumber()<<endl;
    cout<<"Keskiarvo "<<objStudent->getAverage()<<endl;

    return 0;
}
