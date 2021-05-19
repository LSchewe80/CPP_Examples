/*
   erstellt: 19/05/2021
   
   Example:
   Iteratoren_vs_Pointer
   https://de.wikibooks.org/wiki/C%2B%2B-Programmierung/_Die_STL/_Iteratoren
*/

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <list>


using namespace std;


int	main(int argc, char **argv)
{   
    vector<int> a = {1, 2, 3, 4, 5};
    int b[5] = {1, 2, 3, 4, 5};
    
    // Rückgabe --> Iterator
    vector<int>::iterator aIterator = a.begin();
    // Ausgabe Iterator
    cout << "Ausgabe Iterator: " << *(aIterator + 1) << endl;
    // Ausgabe Array (Pointer auf "zweite" Stelle" = *(b + 1))
    cout << "Ausgabe Array: " << *(b + 1) << endl;


    // system("pause");
    return 0;
}