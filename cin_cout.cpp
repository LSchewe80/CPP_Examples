/*
	erstellt: 16/04/2021

	Eingabe und Ausgabe ueber cin und cout

*/

#include <iostream>
#include <string>

using namespace std;

int	main(int argc, char **argv)
{
    string greeting;    // Datentyp string

    cout << "Geben Sie bitte eine Zeichenkette ein: ";
    cin >> greeting;    // Eingabe

    cout << "Ihre Eingabe lautet: " << greeting << endl;   // Ausgabe

    double a = 0;
    double b = 0;
    cout << "Bitte gib eine Zahl ein: ";
    cin >> a;
    cout << "Bitte gib eine weitere Zahl ein: ";
    cin >> b;
    cout << "Das Ergebnis der Addition beider Zahlen lautet: " << a + b << endl;
    
    system("pause");
    return 0;
}
