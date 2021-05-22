/*
    erstellt: 22/05/2021
   
    Example:
    Pair
*/

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <fstream>
#include <utility>  // für pair


using namespace std;


int	main(int argc, char **argv)
{   
    pair<string, int> p("Hallo", 42);

    cout << p.first << endl;
    cout << p.second << endl;

    p.second = 10;  // Überschreiben

    cout << p.first << endl;
    cout << p.second << endl;


    
    // system("pause");
    return 0;
}