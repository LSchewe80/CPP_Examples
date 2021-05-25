/*
    erstellt: 25/05/2021
   
    Example:
    #Define

    im Terminal --> g++ -E <pathname>
    für jedes VALUE == (100 + 150)
*/

#include <iostream>
#include <string>


using namespace std;

// präprozessorderektive
// als Makro (#ifdef --> Makroschreibweise)
#ifndef VALUE
#define VALUE (100 + 150)
#endif

int main(int argc, const char * argv[])
{
    int value = 251;

    cout << value << endl;
    cout << VALUE << endl;

    // system("pause");
    return 0;
}