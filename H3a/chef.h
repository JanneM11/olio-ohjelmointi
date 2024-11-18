#ifndef CHEF_H
#define CHEF_H
#include<iostream>

using namespace std;

class Chef
{
public:

    void makeSalad();
    void makeSoup();
    Chef(string);
    ~Chef();


protected:
    string name;
};

#endif // CHEF_H
