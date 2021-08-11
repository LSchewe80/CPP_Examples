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
    cout << c << endl << endl;

    // Casting
    int sum = 17, count = 5;
    int meanInt;
    meanInt = sum / count;
    printf("Value of meanInt: %d\n",meanInt);

    double mean;
    mean = (double) sum / count;
    printf("Value of mean: %f\n",mean);

    cout << endl;

    //Unsigned short
    unsigned short shr = 30123;
    short shr1 = 37123;

    cout << shr << endl;
    cout << shr1 << endl << endl;

    //int8_t	8 Bit	-128..127	signed char
    //uint8_t	8 Bit	0..255	unsigned char
    int8_t a = 65;
    uint8_t b = 65;

    cout << a << endl;
    cout << b << endl << endl;


    system("pause");
    return 0;
}
