/*
   erstellt: 19/05/2021
   
   Example:
   Liste
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
    list<int> li = {1, 2, 3, 4, 5};
    list<int> li1 = {6, 7, 8};

    // cout << li[2] << endl; --> geht nicht bei einer Liste
    // cout << li.at(2) << endl; --> geht nicht bei einer Liste

    // Zwei Listen zusammenfügen
    // bei Vectoren geht es auch, aber es muss viel kopiert werden 
    // beim anhaengen (sehr langsam)
    li.splice(li.end(), li1);

    // Durch die Liste gehen ( < > geht nicht bei einer Liste --> != geht)
    // Verwendet wird ein Iterator
    for(auto it = li.begin(); it != li.end(); it++ ){
        // Variable einfuegen
        // auf die 4.Position einfügen
        if (*it == 4){
            li.insert(it, 9);
        }
        cout << *it << endl;
    }
    cout << endl;
    // oder
    for (int &x : li){
        cout << x << endl;
    }


    // system("pause");
    return 0;
}