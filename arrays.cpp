/*
	erstellt: 08/05/2021

	Arrays
    Mehrdimensionale Arrays
*/

#include <iostream>
#include <string>
#include <array>

using namespace std;

void doSomething(const array<int, 3> &c) {
    for (int i = 0; i < c.size(); i++) {
        cout << " - " << c[i] << endl;
    }
}


int	main(int argc, char **argv)
{
    array<int, 4> numbers = {1,3,5,7};

    for(int i = 0; i<numbers.size(); i++){
        cout << numbers[i] << endl;
    }

    for(int i = 0; i<numbers.size(); i++){
        numbers[i] = numbers[i] + 1;
        cout << numbers[i] << endl;
    }

    cout << endl;

    //Mehrdimensionale Arrays
    array<array<int, 2>, 4> a = {{
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8}
    }};
    cout << "Größe des Arrays: " << a.size() << endl;
    cout << "Größe des Arrays: " << a[0].size()<< endl;

    for(int x = 0; x<a.size(); x++){
        for(int y = 0; y<a[0].size(); y++){
            cout << a[x][y];
        }
        cout << endl;
        //cout << "Zeilenende" << endl;
    }

    //Limitierungen von Arrays
    int n = 0;
    double average = 0.0;
    array<double, 6> names;
    double name;
    // Vorsichtig!!! Beim Schreiben wird das Array
    // über den Speicherbereich drüber geschrieben,
    // wenn die Größe bei der Eingabe nicht kontolliert wird! 
    cout << "Bitte gebe " << names.size() << " Kommazahlen ein!" << endl;
    while( !cin.eof() && (n < names.size()) ){
        cin >> name;
        names[n] = name;
        n++;
    }
    for(int i = 0; i < names.size(); i++){
        average = average + names[i];
    }
    cout << "Der Durchschnitt des Inhalts des Arrays: " << average/names.size() << endl;

    // Uebergabe an Funktion
    array<int, 3> c = {1, 2, 3};
    doSomething(c);

    //system("pause");
    return 0;
}