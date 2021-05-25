/*
	erstellt: 25/05/2021

	Destruktor
*/

#include <iostream>
#include <string>


using namespace std;

class Auto {
    private:
        int *a;

    public:
       
        // Konstruktor
        Auto(){
            // Falls Speicher erstellt wird (freigehalten)
            // muss/sollte ein Destruktor erstellt werden
            // für d z.B. dselete[]
            // Am besten kein Pointer in der Klasse verwenden
            // lieber ein Vector, da wird automatisch nach dem beenden
            // der Speicher freigegeben 
            a = new int[10];
            cout << "Konstruktor" << endl;
        }
        // Destruktor
        ~Auto(){
            delete [] a;
            cout << "Destruktor" << endl;
        }
};



int main(int argc, const char * argv[]) {
    Auto a;
    cout << "################" << endl;


}