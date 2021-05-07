/*
	erstellt: 05/05/2021

	Printf
    Quellen:
    https://www.cplusplus.com/reference/cstdio/printf/?kw=printf
    https://www.cplusplus.com/reference/iomanip/setprecision/?kw=setprecision
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>

using namespace std;

int	main(int argc, char **argv)
{
    string name = "Max Mustermann";
    int age = 30;
    double age1 = 30;

    cout << name << endl;

    printf("Mein Alter ist %i \n", age);
    printf("Sein Alter ist %.2f und heisst %s\n", age1, name.c_str());

    string format = "Name: %s ; Alter: %.3f \n";
    printf(format.c_str(), name.c_str(), age1);

    // Kommastellen bei Dezimalstellen manipulieren
    cout << setprecision(3) << 34.123456789 << endl;

    // Aufgabe
    // Gebe eine Kommazahl mit exakt einer Kommastelle aus
    // mit cout / printf
    double d = 3.1415;
    cout << d << endl;
    cout << setprecision(2) << d << endl;
    printf("%.1f \n",d);


    for(int i = 1; i<=20;i++){
        if(!(i % 3) && !(i % 5)){
            cout << "FizzBuzz" << endl;
        }
        else if(!(i % 3)){
            cout << "Fizz" << endl;
        }
        else if(!(i % 5)){
            cout << "Buzz" << endl;
        }
        else{
            cout << i << endl;
        }
    }
    //system("pause");
    return 0;
}