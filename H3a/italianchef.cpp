#include "italianchef.h"

ItalianChef::ItalianChef(string na, string n) : Chef(n)
{
    name=na;
    cout<<"ItalianChef "<<name<<" konstruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Italian Chef "<<name<<" makes pasta"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<name<<" desktruktori"<<endl;
}
