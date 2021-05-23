/*
    erstellt: 23/05/2021
   
    Example:
    Queue (priority_queue)
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
#include <queue>

using namespace std;

int main(int argc, const char * argv[]) {
    
    priority_queue<pair<int, string>> pq;
    
    pq.push(pair<int, string>(123, "Hallo"));
    pq.push(pair<int, string>(555, "Welt"));
    pq.push(pair<int, string>(50, "Mars"));
    
    cout << pq.top().second << ": " << pq.top().first << endl;
    pq.pop();
    cout << pq.top().second << ": " << pq.top().first << endl;
    pq.pop();
    cout << pq.top().second << ": " << pq.top().first << endl;

    cout << endl;

    //------------------------------------------------------
    // Aufgabe (Finde die Top 20 Wörter in der txt-Datei?)
    ifstream fin("/home/tenshi/Src/CPP_src/Dateien/faust.txt");
    map<string, int> auftreten;
    
    // Wörter aus der Datei einlesen
    while (!fin.eof()) {
        string word;
        fin >> word;
        // Worter mit der Häufigkeit zählen
        // und als pair in eine map speichern
        if (auftreten.count(word) == 0) {
            auftreten.insert(pair<string, int>(word, 1));
        }
        else {
            auftreten[word]++;
        }
    }
    // Anzahl der Wörter (keine Dopplung)
    cout << "Anzahl der Wörter ohne Dopplung: " << auftreten.size() << endl;
    
    priority_queue<pair<int, string>> pq1;

    // Zaehlung der Woerter aus der map (Häufigkeit)
    // in eine priority_queue einfügen
    for (const auto &entry : auftreten) {
        pair<int, string> pqEntry(entry.second, entry.first);
        pq1.push(pqEntry);
    }

    // Die 20 Top-Woerter ausgeben
    for (int i = 0; i < 20; i++) {
        cout << "Platz " << i+1 << ". " << pq1.top().second << ": " << pq1.top().first << endl;
        pq1.pop();
    }
    
    cout << endl;
    fin.close();
}
