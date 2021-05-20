/*
   erstellt: 20/05/2021
   
   Example:
   Sets
   https://www.cplusplus.com/reference/set/set/
*/

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <fstream>


using namespace std;


int	main(int argc, char **argv)
{   
    set<string> s = {"Hallo", "Welt"};

    // Einfügen
    s.insert("Erde");
    s.insert("Erde");   // Kommt nicht mit rein --> schon vorhanden

    // Größe/ Inhalt
    cout << "Groesse/Inhalt: " << s.size() << endl;

    // Zählen
    cout << "Zaehlen des Inhalt(Wort) \"Erde\": " << s.count("Erde") << endl;

    // Ausgabe des Set
    for(const string &word : s){
        cout << word << endl;
    }

    cout << endl;

    // Aufgabe --> (Wie viele unterschiedliche Wörter hat der Text?)
    set<string> s1;
    int wort = 0;
    ifstream file2("/home/tenshi/Src/CPP_src/Dateien/faust.txt"); // Datei oeffnen
    if ( file2.is_open() ){
        string word;
        while(!file2.eof()){    // eof = End of File
            file2 >> word;     // Daten aus Datei lesen und in string schreiben
            s1.insert(word);
            wort++;
        }
        file2.close();
    } else{
        cout << "Die Datei der Aufgabe konnte nicht geoeffnet werden." << endl;
    }

    cout << "Der Text hat " << wort << " Wörter!" << endl;
    cout << "Der Text hat " << s1.size() << " unterschiedliche Wörter!" << endl;

    // system("pause");
    return 0;
}