/*
    Pointer und Arrays
*/

#include <iostream>
using namespace std;

// Funktion Werte aus dem Array addieren
double Addieren(double* contant, int len){
    cout << "Adresse mit der wir rechnen: " << contant << endl;
    double res = 0;
    for (int i = 0; i<len ; i++){
        res = res + *(contant+i);
        //cout << res << endl;
    }
    return res;
}
 
int main () {
   // an array with 5 elements.
   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double* p;
   double summe = 0;
   double* dptr = &summe;

   cout << "Inhalt des Pointers: " << *dptr << " auf die Adresse von summe: " << &summe << endl;
   cout << "Adresse die wir übergeben: " << balance << endl; 
   summe = Addieren(balance, 5);
   cout << "Summe des Arrays: " << summe << endl;

   cout << "Inhalt des Pointers: " << *dptr << " auf die Adresse von summe: " << &summe << endl;

   p = balance; // Pointer = Array (Pointer auf die erste Stelle [0])
 
   // output each array element's value 
   cout << endl << "Array values using pointer " << endl;
   
   for ( int i = 0; i < 5; i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }
   //auch mögliche Art für Pointer auf den Inalt zuzgreifen 
   for ( int i = 0; i < 5; i++ ) {
      cout << "p[" << i << "] : ";
      cout << p[i] << endl;
   }

   cout<< endl << "Array values using balance as address " << endl;
   
   for ( int i = 0; i < 5; i++ ) {
      cout << "*(balance + " << i << ") : ";
      cout << *(balance + i) << endl;
   }
   // Auch hier diese Art des Zugriffs möglich
   for ( int i = 0; i < 5; i++ ) {
      cout << "balance[" << i << "] : ";
      cout << balance[i] << endl;
   }

   cout << endl;
 
   return 0;
}