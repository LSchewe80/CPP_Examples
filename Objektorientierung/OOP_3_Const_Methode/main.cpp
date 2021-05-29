/*
	erstellt: 23/05/2021

	Const Methode
*/

#include <iostream>
#include <string>


using namespace std;

class Auto {
public:
    int ps;
    // const --> damit die Funktionausgabe
    // a.getPs() ein const Auto &a haben
    // und sie nicht verändert
    int getPs()  const {        
        return this->ps;
    }
};

void ausgabe(const Auto &a) {
    cout << "Auto: " << a.getPs() << " PS" << endl;
}


int main(int argc, const char * argv[]) {
    Auto a;
    a.ps = 123;

    ausgabe(a);

    // Schreibweise ->ps / .ps
    //Pointer auf die Klasse
    Auto *b = &a;
    // Bei Pointer auf Klasse, Struct etc
    // -> auf Instanz oder Methode x-> = (*x).
    cout << (*b).ps << endl;
    cout << b->ps << endl;

    ausgabe(*b);

}