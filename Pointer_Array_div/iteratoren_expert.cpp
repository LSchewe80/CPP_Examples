/*
   erstellt: 20/05/2021
   
   Example:
   Iteratoren --> Verschiedene Arten
*/

#include <iostream>
#include <string>
#include <array>
#include <list>
#include <vector>
#include <algorithm>


using namespace std;


int	main(int argc, char **argv)
{   
    //LIST ---------------------------------
    list<string> namesList = {"Max", "Monika", "Stefan", "Michael"};
    auto listIterator = namesList.begin();

    // Bei einer Liste
    // *(listIterator + x) geht nicht
    // (keine beliebe Sprungweite)
    // da nächster Eintrag irgendwo anders
    // im Speicher steht/ stehen kanns
    cout << *listIterator << endl;
    listIterator++;
    listIterator++;
    cout << *listIterator << endl << endl;
    // Daher geht auch keine sort-Funktion




    // VECTOR ------------------------------
    vector<string> names = {"Max", "Monika", "Stefan", "Michael"};

    auto namesIterator = names.begin(); //Rückgabe Iterator
    cout << *(namesIterator+2) << endl << endl;
    // Sortierung
    sort(names.begin(), names.end());
    
    // Ausgabe gesamter Vector
    for(const string &element : names){
        cout << element << endl;
    }

    // system("pause");
    return 0;
}