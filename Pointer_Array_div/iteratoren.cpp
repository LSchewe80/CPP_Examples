/*
   erstellt: 18/05/2021
   
   Example:
   Iteratoren
*/

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>


using namespace std;

int maximum(vector<int> &vec) {
    int m = -1;
    
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        if (*it > m) {
            m = *it;
        }
    }
    
    return m;
}


int	main(int argc, char **argv)
{   
    vector<string> names = {"Max", "Monika"};

    // vector<string>::iterator i = names.begin();
    vector<string>::iterator i = names.begin();
    cout << *i << endl;
    i++;
    cout << *i << endl;
    i--;
    cout << *i << endl;

    vector<string>::iterator j = names.end();
    // Iteratoren vergleichen
    cout << (j < i) << endl << endl;

    for(vector<string>::iterator a = names.begin(); a < names.end(); a++){
        cout << *a << endl;
    }


    vector<string> docu = {"AAA", "XXX", "BBB", "CCC"};
    
    // Sortieren des Inhalt des Vectors
    sort(docu.begin(), docu.end()); 

    for(const auto &init : docu){
        cout << "- " << init << endl;
    }

    vector<int> a = {1, 2, 3, 4, 5};
    cout << maximum(a) << endl;
    
    vector<int> b = {3, 2, 1};
    cout << maximum(b) << endl;

    // system("pause");
    return 0;
}