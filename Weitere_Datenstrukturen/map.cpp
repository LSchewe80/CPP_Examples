/*
    erstellt: 23/05/2021
   
    Example:
    Map (key --> value)
*/

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <fstream>
#include <utility> 
#include <map>


using namespace std;


int	main(int argc, char **argv)
{   
    map<string, int> m;

    pair<string, int> entry("Mustermann", 815);
    pair<string, int> entry1("Max", 1234);
    m.insert(entry);
    m.insert(entry1);

    cout << "Groesse/ Inhalt der Map: " << m.size() << endl << endl;

    // Abfrage des value vom key
    cout << m.at("Mustermann") << endl;
    cout << m.at("Max") << endl;

    // Mit []-Klammern ist es auch moeglich
    // den Zugriff zu ermoeglichen
    cout << m["Max1"] << endl;
    cout << m.at("Max1") << endl << endl;

    // Anwendungsbeispiel-----------------------------------
    vector<string> words = {"Hallo", "Welt", "Welt", "Mars"};
    
    map<string, int> auftreten;
    
    for (const string &word : words) {
        if (auftreten.count(word) == 0) { //  count --> wie viele keys(word) gibt es in der Map
            auftreten.insert(pair<string, int>(word, 1));
        }
        else {
            auftreten[word]++; // erhoehen des Values
        }
    }

    cout << "Ausgabe des Value vom key=\"Welt\": " << auftreten.at("Welt") << endl;
    cout << "Ausgabe des Value vom key=\"Mars\": " << auftreten.at("Mars") << endl;
    //------------------------------------------------------

    // Iteration uber die map --> Inhalt der Map ist ein Pair
    // also den Iterator dereferenzieren (*it)
    for(map<string, int>::iterator it = auftreten.begin(); it != auftreten.end(); it++ ){
            cout << (*it).first << endl;
            cout << (*it).second << endl << endl;
            // Schreibweise auch moeglich
            cout << it->first << endl;
            cout << it->second << endl << endl;
    }

    // ab c++-11
    for(const auto &entry : auftreten){
        cout << entry.first << " : " << entry.second << endl;
    }

    // system("pause");
    return 0;
}