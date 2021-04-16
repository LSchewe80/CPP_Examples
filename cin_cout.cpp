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

    cout << "Ihre Eingabe lautet:" << greeting << endl;   // Ausgabe

    system("pause");
    return 0;
}
