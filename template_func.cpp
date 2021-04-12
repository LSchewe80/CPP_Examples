// Template Funktionen (Muster, Schablone, Vorlage)
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

// Template mit zwei gleichen Datentypen
template <typename T>
T Berechnen (T wert1, T wert2)
{
    return wert1 * wert2;
}

// Template mit zwei unterschiedlichen Datentypen
template <typename T, typename B>
T Berechnen1 (T wert1, B wert2)
{
    return wert1 * wert2;
}
// Falls große Datenströme verwendet werden, werden Referenzen empfohlen
template <typename T>
T Berechnen2 (T& wert1, T& wert2)
{
    return wert1 * wert2;
}
//-----------------------------------------------------------
int	main(int argc, char **argv)
{   
    // Zwei int 
    cout << Berechnen(10,10) << endl;
    // Zwei float
    cout << Berechnen(10.5,10.0) << endl << endl;

    // Ein int und ein float
    cout << Berechnen1(10.5, 10) << endl;
    // auto == selbstständige Auswahl
    // <int> == erster Wert ein int
    auto erg = Berechnen1<int>(10,1.5);
    // <int,flot> == erster int, zweiter float
    auto erg1 = Berechnen1<int,float>(10,1.5);

    // Ausgabe der Ergbenisse
    cout << erg << endl;
    cout << erg1 << endl << endl;

    int a = 1;
    float b = 2;
    double c = 3;

    cout << Berechnen2(a,a) << endl;
    cout << Berechnen2(b,b) << endl;
    cout << Berechnen2(c,c) << endl;

    //system("pause");
    return 0;
}
