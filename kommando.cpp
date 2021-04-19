/*
	erstellt: 13/04/2021

	Uebergabe der Werte bei dem Aufruf
	im Terminal

*/

#include <iostream>
using namespace std;

int main(int anzahl, char *woerter[])
{
	cout << "Anzahl: " << anzahl << endl;
	
	for(int i=0; i<anzahl; i++)
		cout << i << ": " << woerter[i] << endl;

    //system("pause");
    return 0;
}
