/*
   erstellt: 17/05/2021
   
   Example:
   Pointer_1 und Arrays
*/

#include <iostream>
#include <string>
#include <array>


using namespace std;

void machWas(int* a, int size){
    cout << a << endl;
    for(int i = 0; i< size; i++){
        cout << a[i] << endl;
    }   
}

 
int	main(int argc, char **argv)
{
    int a = 123;
    int* b = NULL;
    int zahl = 995;

    cout << a << endl;  //Ausgabe der Variablen "a"
    cout << *&a << endl;    // Ausgabe des Inhaltss der Speicheradresse der Variablen "a"
    cout << &a << endl << endl; // Ausgabe der Speicheradresse
    
    b = &a; // Uebergabe der Speicheradresse der Variablen "a" an den Pointer
    cout << b << endl;  // Ausgabe der Speicheradresse des Pointers
    cout << *b << endl; // Ausgabe des Inhalts des Pointer

    // Arrays 
    array<int, 3> arr = {1, 2, 3};  // erstellen eines Arrays (C11)
    cout << arr[0] << endl << endl ;

    // andere Arrayschreibweise (C-Array)
    int arr1[3] = {4, 5, 6};    // mögliche "alte" Schreibweise
    cout << arr1[0] << endl;// Ausgabe Inhalt an der ersten Stelle des Arrays
    cout << *arr1 << endl;  // Ausgabe Inhalt an der ersten Stelle des Arrays
    cout << *(arr1+1) << endl;  // Ausgabe Inhalt an der zweiten Stelle des Arrays
    cout << arr1 << endl;    //Ausgabe der Speicheradresse des Arrays (wie Pointer auf die erste Stelle des Arrays)
    cout << arr1+1 << endl;   // Ausgabe der naechsten Speicheradresse des Arrays

    machWas(arr1, 3);   // arr1 == Pointer auf die erste Stelle des Arrays

    cout << endl;

    //Größe Array
    int arr2 [10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* ptrArr2 = &arr2[0];
    
    size_t n = sizeof(arr2) / sizeof(arr2[0]);
    size_t n1 = sizeof(*ptrArr2);   // Der Inhalt auf den der Pointer zeigt ist ein Int = 64Bit => 4Byte

    cout << "Größe vom Array: " << n <<  endl;
    cout << "Größe vom Pointer auf Array: " << n1 << endl;

    // system("pause");
   return 0;
}