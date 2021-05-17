/*
	erstellt: 21/04/2021

	Funktionen
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//-Funktionen-------------------------

// ohne Übergabe- und Rückgabewert
void etwasMachen(){
    cout << "Hallo Du da!" << endl;
}

// mit Übergabe- und ohne Rückgabewert
void etwasMachen2(string word){
    cout << word << endl;
}

// ohne Übergabe- und mit Rückgabewert
double multi(){
    double a = 0.0, b = 0.0;
    cout << "Gebe die erste Zahl zum multiplizieren ein: ";
    cin >> a;
    cout << "Gebe die zweite Zahl zum multiplizieren ein: ";
    cin >> b;
    return a * b;
}

// Funktion überladen
int addieren(int a, int b)
{
    cout << "int a und b" << endl;
    return a + b;
}

double addieren(double a, double b)
{
    cout << "double a und b" << endl;
    return a + b;
}

double addieren(double a, double b , double c)
{
    cout << "double a und b und c" << endl;
    return a + b + c;
}

//-main-------------------------------
int	main(int argc, char *argv[])
{   
    // ohne Übergabe- und Rückgabewert
    etwasMachen();
    // mit Übergabe- und ohne Rückgabewert
    etwasMachen2("Uebergabe-String");

    cout << endl;

    // ohne Übergabe- und umgewandelten Rückgabewert (impliziert)
    int erg = multi();
    cout << "Das Ergebnis von double zu int ist = " << erg << endl << endl;

    // ohne Übergabe- und Rückgabewert
    double erg2 = multi();
    cout << "Die Ergebnis ist = " << erg2 << endl;

    cout << endl;

    // Funktion überladen
    double erg3 = addieren(2.5, 3.75);
    cout << erg3 << endl << endl;

    double erg4 = addieren(2, 3);
    cout << erg4 << endl<< endl;

    double erg5 = addieren(2, 3, 4.5);
    cout << erg5 << endl<< endl;

    // fertige max()-Funktion
    cout << max(2, 3) << endl;
    cout << max(2.3, 3.7) << endl << endl;

    //system("pause");
    return 0;

}