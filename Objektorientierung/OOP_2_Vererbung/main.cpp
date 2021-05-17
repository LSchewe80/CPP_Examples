/*
	erstellt: 17/05/2021

	Vererbung
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Basis-Klasse
class Animal
{
    public:
        double weight;
        int legs;
};

// Klasse erbt von Basis-Klasse
class Cat : public Animal
{
    public:
        string name;
};

// Funktion
void machWas(const Animal &animal){
    cout << "Animal: " << animal.weight << "kg, Anzahl Beine: " << animal.legs << endl;
}


int main(int argc, const char * argv[])
{
    Cat c;
    c.weight = 8;
    c.legs = 4;
    c.name = "Cat Lucy";

    machWas(c);


    //system("pause");
    return 0;    
}