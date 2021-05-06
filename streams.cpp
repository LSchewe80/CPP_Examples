/*
	erstellt: 05/05/2021

	Streams

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int	main(int argc, char **argv)
{
    ofstream file("/home/tenshi/Src/CPP_src/Dateien/output.txt"); // Datei erstellen und oeffnen
    file << "Hallo Welt" << endl;   // schreibt String in Datei
    file.close();

    ifstream file1("/home/tenshi/Src/CPP_src/Dateien/output1.txt"); // Datei oeffnen
    if ( file1.is_open() ){
        string a;
        while(!file1.eof()){    // eof = End of File
            file1 >> a;     // Daten aus Datei lesen und in string schreiben
            cout << a  << " ";
        }
        file1.close();
    } else{
        cout << "Die Datei konnte nicht geoeffnet werden." << endl;
    }

    cout << endl;

    //Datei Zeile fur Zeile einlesen
    string name;
    getline(cin, name);
    cout << name << endl;

    // Aufgabe
    int wort = 0, zeilen = 0;
    ifstream file2("/home/tenshi/Src/CPP_src/Dateien/faust.txt"); // Datei oeffnen
    if ( file2.is_open() ){
        string word;
        while(!file2.eof()){    // eof = End of File
            file2 >> word;     // Daten aus Datei lesen und in string schreiben
            //cout << word  << " ";
            wort++;
        }
        file2.close();
    } else{
        cout << "Die Datei der Aufgabe konnte nicht geoeffnet werden." << endl;
    }
    
    ifstream file3("/home/tenshi/Src/CPP_src/Dateien/faust.txt"); // Datei oeffnen
    if ( file3.is_open() ){
        string word;
        while(!file3.eof()){    // eof = End of File
            getline(file3, word);   // Jede Zeile des Textes in den Stream file3 einlesen
            zeilen++;
        }
        file3.close();
    } else{
        cout << "Die Datei der Aufgabe konnte nicht geoeffnet werden." << endl;
    }
    cout << "Der Text hat " << wort << " Wörter!" << endl;
    cout << "Der Text hat " << zeilen << " Zeilen!" << endl;


    //system("pause");
    return 0;
}