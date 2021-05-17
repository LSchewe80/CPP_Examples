/*
    erstellt: 17/05/2021
   
    Example:
    C_String vs. C++-String
*/

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <cstring>


using namespace std;

void machWas(char *cName){ // Bei Übergabe Array ==> ein Pointer definieren
    cout << cName << endl;
    cout << strlen(cName) << endl;
}
/*
    char name[4] ==> | M | a | x | \0 | == 4
    string name2 ==> | M | a | x | \0 | i | m | i | l | i | a | n | == Laenge = 11
*/

 
int	main(int argc, char **argv)
{   
    // C++-String
    string name = "Max";    
    cout << name.length() << endl;
    cout << name << endl << endl;

    string name1("Max\0imilian", 11);
    cout << name1.length() << endl;
    cout << name1 << endl << endl;

    string a = "Hallo Welt!";
    // Fuer die printf -Funktion muss der C++-String
    // in ein C-String mit "c_str()" umgewandelt werden
    printf("Ich habe gesagt: %s \n", a.c_str());
    

    // C-String
    char cName[4] = "Max";
    cout << cName << endl;
    machWas(cName);


    // system("pause");
    return 0;
}