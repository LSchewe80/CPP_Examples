/*
   erstellt: 17/05/2021
   
   Example:
   Stack & Heap
   Array auf Heap erstellen  
*/

#include <iostream>
#include <string>
#include <array>
#include <vector>


using namespace std;

/*
---------------

---------------
*/

 
int	main(int argc, char **argv)
{   
    // Array landet auf dem Stack und nach beenden der main/Funktion wird er wieder gelöscht
    int stackArray[5] = {1,2,3,4,5};

    // Pointer, auf Array auf dem Heap (new int[])
    int *a = new int[10](); // () == mit Nullen befuellt
    cout << a[0] << endl;   // Zugreifen auf Array
    // reservierten Speicher wieder freigeben mit delete[]
    delete [] a;

    // v landet auf dem Stack und die Daten auf dem Heap
    // wenn main/funktion geloescht wird wird V geloescht und die Daten auf dem Heap auch geloescht
    vector<int> v = {1, 2, 3, 4, 5, 6};



    // system("pause");
    return 0;
}