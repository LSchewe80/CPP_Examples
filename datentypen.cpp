/*
	erstellt: 16/04/2021

	Datentypen
*/

#include <iostream>
#include <string>

using namespace std;

int	main(int argc, char **argv)
{   
    bool bit = true;            // bool
    string num = "1234";        // String
    char c = 'H';               // char
    long numLong = 1234;        // long
    int numInt = 1234;          // int
    float numFloat = 1234.5;    // float
    double numDouble = 1234.5;  // double
    short numShort = 32768;     // short -> 2¹⁶ == 65536
    unsigned short unsignednumShort = 32768;   // unsigned short

    cout << sizeof(numShort) << endl;
    cout << numShort << endl;
    cout << sizeof(unsignednumShort ) << endl;
    cout << unsignednumShort  << endl << endl;

    cout << sizeof(numFloat) << endl;
    cout << numFloat << endl;
    cout << sizeof(numDouble) << endl;
    cout << numDouble << endl << endl;

    cout << sizeof(c) << endl;
    cout << c << endl;


    system("pause");
    return 0;
}
