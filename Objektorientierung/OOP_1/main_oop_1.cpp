/*
	erstellt: 14/05/2021

    OOP
*/

#include <iostream>
#include <string>

#include "oop_1.cpp"

using namespace std;


int	main(int argc, char *argv[]){
    
    // Objekte erstellen
    Car c("bmw", 330);
    Car c2("mercedes", 310);

    // Methoden aufrufen
    c2.tune();
    c2.setPs(300);
    
    c.printCar();
    c2.printCar();
    

    //system("pause");
    return 0;
}