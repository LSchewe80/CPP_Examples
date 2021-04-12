// Template Klassen (Muster, Schablone, Vorlage)
#include <iostream>
#include "template_class_header.hpp"

using namespace std;

// // "Normale" Klasse
// class rechner
// {
//     public:
//         int multi(int x, int y);
//         int add(int x, int y);
// };
//
// int rechner::multi(int x, int y)
// {
//     return x*y;
// }
//
// int rechner::add(int x, int y)
// {
//     return x+y;
// }


// // Template Klasse (in der Header-Datei ausgelagert)
// template <typename A> class Rechner
// {
//     public:
//         A multi(A x, A y);
//         A add(A x,A y);
// };
//
// template <typename A> A Rechner<A>::multi(A x,A y)
// {
//     return x*y;
// }
// template <typename A> A Rechner<A>::add(A x,A y)
// {
//     return x+y;
// }

//-----------------------------------------------------------
int	main(int argc, char **argv)
{   
    Rechner <double> rechner1;

    cout << rechner1.add(5.5 , 2) << endl;
    cout << rechner1.multi(5, 2) << endl;

    //system("pause");
    return 0;
}