/*
    erstellt: 27/05/2021
   
    Example:
    Namespaces
*/

#include <iostream>
#include <string>

#include "car.h"


using namespace std;
using namespace firma;


int main(int argc, const char * argv[])
{   
    // firma:: wird eigentlichnict benötigt,da
    // "using namespace firma;" eingebunden worden ist
    firma::Car c;
    // da "using namespace firma;"
    Car b;

    c.fahren();
    b.fahren();

    // system("pause");
    return 0;
}