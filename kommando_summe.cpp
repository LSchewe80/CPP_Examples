/*
	Uebergabe der Werte bei dem Aufruf
	im Terminal
	Summe der uebergebenden Zahlen ermitteln
	Zeichen werden mit 0 bei atof ausgegeben
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int anzahl, char *woerter[])
{
	double summe = 0.0;
	
	for(int i=1; i<anzahl; i++)
		summe += atof(woerter[i]);
	cout << summe << endl;
}

