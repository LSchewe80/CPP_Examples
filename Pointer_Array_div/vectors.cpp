/*
	erstellt: 12/05/2021

    Vectors
*/

#include <iostream>
#include <string>
#include <vector>


using namespace std;

// Vector hat eine dynamische Groesse und Arrays sind fest
void doSomething(const vector<int> &a) {
    for (int i = 0; i < a.size(); i++) {
        cout << " - " << a[i] << endl;
    }
}

int	main(int argc, char **argv)
{   
    // Vector(string) initialisieren und deklarieren
    vector<string> names = {"Michael", "Jessica"};

    // Einfuegen/ Dazu Fuegen
    names.push_back("Max");
    names.push_back("Monika");

    // Zugriff
    cout << names[1] << endl;
    cout << names.at(1) << endl;

    // Groesse/Inhalt
    cout << names.size() << endl;

    // Ausgabe-----------------------------------
    cout << "Alle Einträge: " << endl;
    for (const string &name : names){   // Referenz, da name = Kopie == bessere performance
        cout << name << endl;
    }
    // oder
    // ab C++11 --> auto --> Typenermittlung
    for (const auto &name : names){   // const um zu verhindern, dass nichts veraendert wird
    cout << name << endl;
    }
    // oder
    for(int i = 0; i < names.size(); i++){
        cout << names.at(i) << endl;
    }
    //-------------------------------------------

    // Vector befuellen mit maximaler Anzahl
    vector<string> name;
    int maxAnzahl = 3;
    while ( !cin.eof() && (name.size() < maxAnzahl))
    {
        string name1;
        cin >> name1;
        name.push_back(name1);
        cout << "Bisher wurden " << name.size() << " Teilnehmer erfasst!" << endl;
    }
    cout << "Das hast Du eingetragen: " << endl;
    for(int i = 0; i < name.size(); i++){
        cout << name.at(i) << endl;
    }
    
    // Uebergabe an Funktion
    vector<int> a = {1, 2, 3, 5};
    doSomething(a);

    // weitere Vector-Funktionen
    vector<string> data = {"Mirja", "Michael", "Stefan", "Frank"};

    data.push_back("123");

    for(const auto &element : data){
        cout << element << endl;
    }

    // entfernt Letztes Element
    data.pop_back();

    for(const auto &element : data){
        cout << element << endl;
    }

    cout << "Erste Element: " << data.front() << endl;
    cout << "Letzte Element: " << data.back() << endl;
    cout << "Letzte Element: " << data[data.size() -1] << endl;

    //system("pause");
    return 0;
}