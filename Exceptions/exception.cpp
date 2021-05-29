/*
    erstellt: 28/05/2021
   
    Example:
    Exceptions
*/

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>


using namespace std;

void machWas(){
    vector<string> data2 = {"Stefan"};
    cout << data2.at(2) << endl;
}

// Eigene Klasse als Exception verwenden
class InvalidParameter : public exception {};

void machWasEigen(int n){
    if(n == 0){
        // Exception werfen
        throw InvalidParameter();
    }

    cout << (10 / n) << endl;
}

// Eigene Klasse als Exception verwenden
// Klasse erweitert mit mit der exception Klasse
class InvalidParameter1 : public exception {
    // what-Methode anpassen auf die eigene Abfangung
    // virtual --> erlaubt durch vererbung das die Methode überschrieben werden darf
    // const char* -> pointer auf const char-Array
    // noexcept -> HInweis an Compiler, es werden durch die Ausführung
    // keine Exception andere Exception geworfen
    virtual const char* what() const noexcept {
        return "InvalidParameter1";
    }
};

void machWasEigen1(int n){
    if(n == 0){
        // Exception werfen
        throw InvalidParameter1();
    }

    cout << (10 / n) << endl;
}


int main(int argc, const char * argv[])
{   
    vector<string> data = {"Michael"};

    try
    {
        cout << data.at(2) << endl;
    }
    catch(out_of_range& e)
    {
        std::cerr << e.what() << '\n';
        cout << "Es ist ein out_of_range -Fehler aufgetreten" << endl;
    }

    try
    {
        cout << data.at(2) << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    cout << endl;

    // Funktion auch unter mehreren Ebenen ----------------------------
    try
    {   
        cout << "Vor" << endl;
        machWas();
        cout << "Nach" << endl;
    }
    catch(out_of_range& e)
    {
        //std::cerr << e.what() << '\n';
        cout << "Es ist ein out_of_range -Fehler aufgetreten" << endl;
    }

    cout << endl;

    // Eigene Exceptions ----------------------------------------------
    try
    {
        machWasEigen(0);
    }
    // Eigener Exception
    catch(InvalidParameter& e)
    {
        cout << "Es ist ein InvalidParameter -Exception aufgetreten" << endl;
    }

    cout << endl;

    // Exception erweitern --------------------------------------------
    try
    {
        machWasEigen1(0);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Es ist ein Fehler aufgetreten: " << e.what() << '\n';
    }
    



    
    // system("pause");
    return 0;
}