/*
	erstellt: 19/04/2021

	String
*/

#include <iostream>
#include <string>

using namespace std;

int	main(int argc, char *argv[])
{   
    string name = "Max Mustermann";

    // Laenge von Strings ermitteln
    cout << name.length() << endl;
    cout << name.size() << endl;

    cout << endl;

    // Auf ein einzelnes Zeichen zugreifen (Rückgabe ein char)
    cout << name[0] << endl;

    cout << endl;

    // Auf ein Teilstringzugreifen
    cout << name.substr(4, 10) << endl;
    cout << name.substr(0, 3) << endl;

    cout << endl;

    // Über den String interrieren
    for (int i = 0; i <= name.length(); i++)
    {
        // ' ' nicht " " , da char und nicht string
        if (name[i] == 'M' || name[i] == 'n')
        {
            cout << name[i] << endl;
            continue;
        }
        // cout << name[i];
    }

    cout << endl;

    // Leerzeichen oder Buchstabe finden
    cout << name.find(" ") << endl;
    cout << name.find("u") << endl;
    if (name.find("A") == string::npos){
        cout << "Im String taucht der grosse Buchstabe \"A\" nicht auf" << endl;
        cout << "dann wir eine grosse Zahl zurückgegeben! : " << string::npos << endl;
    }

    cout << endl;

    // weiter Variante
    cout << name[5] << endl;
    cout << name.at(5) << endl;

    //cout << name[14] << endl;   // keine Fehlerausgabe
    //cout << name.at(14) << endl; // Fehler da nur 13 Zeichen

    cout << endl;

    // String verändern
    for (int a = 0 ; a<=name.length() ; a++)
    {
        if (name[a] == 'n')
        {
            name[a] = 'X';
        }
    }
    cout << name << endl;

    cout << endl;

    // String am Ende etwas dran hängen
    name.append("???");
    name = name + "!!!";
    name += "$$$";
    cout << name << endl;

    cout << endl;

    // Zeichen einfügen (sehr langsam)
    name.insert(3,",");
    cout << name << endl;

    cout << endl;

    //ZEichen entfernen
    string name2 = "Max Mustermann";
    name2.erase(3,1);
    cout << name2 << endl;

    cout << endl;

    //system("pause");
    return 0;

}