#include "chef.h"



void Chef::makeSalad()
{
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef "<<name<<" desktruktori"<<endl;
}




Chef::Chef(string n)
{
    name=n;
    cout<<"Chef "<<name<<" konstruktori"<<endl;


}
