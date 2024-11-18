#include "chef.h"
#include "italianchef.h"

#include <iostream>

using namespace std;

int main()
{
    Chef objChef= Chef("Gordon Ramsay");

    objChef.makeSalad();
    objChef.makeSoup();

    ItalianChef objChef2 = ItalianChef("Anthony Bourdain", "Anthony Bourdain");
    objChef2.makeSalad();
    objChef2.makeSoup();
    objChef2.makePasta();
    cout<<"name of the Italian Chef is "<<objChef2.getName()<<endl;



    return 0;
}
