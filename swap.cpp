/*
   erstellt: 20/05/2021
   
   Example:
   Swap
*/

#include <iostream>
#include <string>
#include <array>
#include <list>
#include <vector>
#include <algorithm>


using namespace std;

void swap32(uint32_t &byte)
{
    uint32_t byte0, byte1, byte2, byte3;
    byte0 = (byte & 0xFF000000) >> 24;
    byte1 = (byte & 0x00FF0000) >> 16;
    byte2 = (byte & 0x0000FF00) >> 8;
    byte3 = (byte & 0x000000FF) >> 0;

    byte = (byte3 << 24) | (byte2 << 16) | (byte1 << 8) | (byte0 << 0);
}



int	main(int argc, char **argv)
{   
    // Bit-Funktion
    uint32_t a = 0xA00C0100;
    swap32(a);
    // cout << "DEC vorher: ";
    // cout <<  dec << a << endl;
    cout << "Hex vorher: 0x";
    cout <<  hex  << uppercase << a << endl;
    a = ((a & 0x7)<<8) | ((a & 0xFF00)>>8);
    // cout << "DEC nachher: ";
    // cout <<  dec << a << endl;
    cout << "Hex nachher: 0x";
    cout <<  hex  << uppercase << a << endl;

    cout << endl;

    // Swap32
    uint32_t b = 0x11223344;
    cout << "Hex vorher: 0x";
    cout <<  hex  << uppercase << b << endl;
    swap32(b);
    cout << "Hex nacher: 0x";
    cout <<  hex  << uppercase << b << endl<< endl;


    int x = 255;
    int y = 0x8F;
    int z ;

    z = y%x;

    cout << dec << z << endl;


    // system("pause");
    return 0;
}