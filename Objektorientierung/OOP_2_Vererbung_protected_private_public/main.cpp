/*
	erstellt: 17/05/2021

	Vererbung_protected_private_public
*/

#include <iostream>
#include <string>


using namespace std;

class Animal
{
	// Zugriff aus der Klasse und aus der Klasse 
	// die erweitert wird.
	// protected --> damit kann der Konstruktor aus der Klasse Cat
	// die Eigenschaften aus der Basisklasse verwenden kann
	protected:	
		double weight;
		int legs;
	
	public:
		// Methode
		void daten(const Animal &animal){
			cout << "Animal: " << animal.weight << " kg, Anzahl Beine: " << animal.legs << endl;
		}
};

class Cat : public Animal
{
	private:	// Zugriff nur aus der Klasse
		string name;

	public:	// Zugriff von ueberall 
		Cat(double weight, int legs, string name) {
			this->name = name;
			this->weight = weight;
			this->legs = legs;
		}

		void ausgabeName(){
			cout << "Das Tier ist eine Katze und heisst " << name << endl;
		}
};


int main(int argc, const char * argv[])
{
    Cat c(8, 4, "Lucy");

	c.ausgabeName();
    c.daten(c);


    //system("pause");
    return 0;    
}