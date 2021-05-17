/*
   erstellt: 17/05/2021
   
   Example:
   Pointer vs Referenzen
*/

#include <iostream>
#include <string>
#include <array>
#include <vector>


using namespace std;

void mitPointer(int* a, int size){    //als Pointer, da C-Array
    cout << a[0] << endl;   //Inhalt erste Stelle Array
    cout << *a << endl;     //Inhalt erste Stelle array
    cout << *(a+1) << endl; // Inhalt zweite StelleArray
    cout << a << endl;      //Adresse (erste Stelle)
    cout << a+1 << endl;    //Adresse zweite (Stelle)
}

void mitReferenz(const vector<int> &r){
    for(int element : r){
        cout << element << endl;
    }
}

int	main(int argc, char **argv)
{   
    // Pointer --> uebergibt "nur" die Speicheradresse
    const int length = 4;
    int a[4] = {15, 16, 17, 18};
    cout << a << endl;
    mitPointer(a, length);

    cout << endl;

    // Referenz --> uebergibt ein "Objekt"
    vector<int> ref = {15, 16, 17, 18};
    mitReferenz(ref);



    // system("pause");
   return 0;
}