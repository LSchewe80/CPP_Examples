/*
	erstellt: 26/05/2021

    Copy Constructor

*/

#include <iostream>
#include <string>


using namespace std;

class Car {

    public:
        string class_name;

        Car(string name){
            this->class_name = name;
        }
    private:
        // Copy Contructor verhindert im private-Bereich
        // dass man bei der Übergabe an eine/die Funktion/Methode
        // eine "Kopie" übergeben kann
        // Also muss eine Referenz übergeben werden
        Car(Car &other){
            cout << "Copy Konstructor --> Auto wird kopiert" << endl;
            this->class_name = other.class_name;
        }

};

// es "Muss" eine Referenz übergeben werden
// da der Copy Constructor im private-Bereich befindet
void machWas(Car &a){
    // Instanz/Variable nach dem Constructor verändern
    a.class_name = "Fahrrad (2)";
    cout << a.class_name << endl;
}



int main(int argc, const char * argv[])
{
    Car c("Fahrrad");
    machWas(c);
    cout << c.class_name << endl;
    
    //system("pause");
    return 0;
}