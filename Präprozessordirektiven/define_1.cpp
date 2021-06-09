/*
    erstellt: 25/05/2021
   
    Example:
    #Define

    im Terminal --> g++ -E <pathname>
    für jedes VALUE == (100 + 150)
*/

#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

//----------------------------------------
// präprozessorderektive
// als Makro (#ifdef --> Makroschreibweise)
#ifndef VALUE
#define VALUE (100 + 150)
#endif

//-----------------------------------------
#define Hallo

#ifdef  Hallo
    #define func(x,y) (max(x,y))
#endif  //Hallo 

#ifdef  Pause
    #define func(x,y) (x*y)
#endif  //Pause



int main(int argc, const char * argv[])
{
    int value = 251;
    int value1 = 300;

    cout << value << endl;
    cout << VALUE << endl;

    cout << func(value,value1) << endl;

    // system("pause");
    return 0;
}