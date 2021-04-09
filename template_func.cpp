// Templete Funktionen (Muster, Schablone, Vorlage)
#include <iostream>

using namespace std;

// int GeheimeBerechnung(int a, int b)
// {   
//     return a * b;
// }

// int GeheimeBerechnung(double a, double b)
// {   
//     return a * b;
// }

// Templete mit zwei gleichen Datentypen
template <typename T>
T Berechnen (T wert1, T wert2)
{
    return wert1 * wert2;
}

// Templete mit zwei unterschiedlichen Datentypen
template <typename T, typename B>
T Berechnen1 (T wert1, B wert2)
{
    return wert1 * wert2;
}
//-----------------------------------------------------------
int	main(int argc, char **argv)
{   
    // Zwei int 
    cout << Berechnen(10,10) << endl;
    // Zwei float
    cout << Berechnen(10.5,10.5) << endl << endl;

    // Ein int und ein float
    cout << Berechnen1(10.5, 10) << endl;

    // auto == selbstständige Auswahl
    // <int> == erster Wert ein int
    auto erg = Berechnen1<int>(10,1.5);
    // <int,flot> == erster int, zweiter float
    auto erg1 = Berechnen1<int,float>(10,1.5);

    // Ausgabe der Ergbenisse
    cout << erg << endl;
    cout << erg1 << endl;

    //system("pause");
    return 0;
}
