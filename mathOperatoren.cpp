/*
	erstellt: 16/04/2021

	Mathematische Operatoren
*/

#include <iostream>
#include <string>

using namespace std;

int	main(int argc, char **argv)
{   
    bool bit = true;    // treu == 1 ; false == 0 
    bool bit1 = false;
    int a = 5;
    int b = 2;
    double c = 5;
    double d = 2;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;  // Modulo 5 % 2 Rest 1
    cout << static_cast<double>(a) / static_cast<double>(b) << endl << endl;
    
    cout << c / d << endl;

    a += 5; // a = a + 5
    cout << a << endl;
    a++;    // a = a + 1
    cout << a << endl << endl;

    cout << (20 == 20) << endl;     // true == 1
    cout << (30 < 40) << endl;      // true == 1  
    cout << (20 != 30) << endl;     // true == 1
    cout << (bit = !bit1) << endl;  // true == 1
    cout << endl;
    cout << (0 && 0) << endl;   // false == 0
    cout << (0 && 1) << endl;   // false == 0
    cout << (1 && 0) << endl;   // false == 0
    cout << (1 && 1) << endl;   // true ==  1
    cout << endl;
    cout << (0 || 0) << endl;   // false == 0
    cout << (0 || 1) << endl;   // true ==  1
    cout << (1 || 0) << endl;   // true ==  1
    cout << (1 || 1) << endl;   // true ==  1


}