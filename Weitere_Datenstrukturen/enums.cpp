/*
   erstellt: 21/05/2021
   
   Example:
   Enum
   Enum --> SwitchCase
*/

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <list>
#include <set>
#include <fstream>


using namespace std;

enum Status{
    OFFLINE,    // 0
    ONLINE,     // 1
    AWAY,       // 2
    BUSY,        // 3
    //etc
    SLEEP= 10,   // festen Wert zu gewiesen
    PARTY
};

int	main(int argc, char **argv)
{   

    Status status = Status::ONLINE;

    cout << status << endl;

    switch(status){
        case OFFLINE:
            cout << "Der Nutzer ist grade Offline" << endl;
            cout << Status::OFFLINE << endl;
            break;
        case ONLINE:
            cout << "Der Nutzer ist gerade Online" << endl;
            cout << Status::ONLINE << endl;
            //break;
        case AWAY:
            cout << "Der Nutzer ist gerade abwesend" << endl;
            cout << Status::AWAY << endl;
            break;
        case BUSY:
            cout << "Der Nutzer ist gerade beschaeftigt" << endl;
            cout << Status::BUSY << endl;
            break;
        case SLEEP:
            cout << "Der Nutzer schlaeft gerade" << endl;
            cout << Status::SLEEP << endl;
            break;
        default:
            cout << "Ich bin der Default Case !" << endl;
    }

    // Bei viele if else if anweisung und speziel bei ENUM
    // sind SwitchCase-Anweisungen vorteilhaft
    /*
    if(status == Status::OFFLINE){
        cout << "Der Nutzer ist grade Offline" << endl;
        cout << Status::OFFLINE << endl;
    }
    else if(status == Status::ONLINE){
        cout << "Der Nutzer ist gerade Online" << endl;
        cout << Status::ONLINE << endl;
    }
    else if(status == Status::AWAY){
        cout << "Der Nutzer ist gerade abwesend" << endl;
        cout << Status::AWAY << endl;
    }
    else if(status == Status::BUSY){
        cout << "Der Nutzer ist gerade beschaeftigt" << endl;
        cout << Status::BUSY << endl;
    }
    else if(status == Status::SLEEP){
        cout << "Der Nutzer schlaeft gerade" << endl;
        cout << Status::SLEEP << endl;
    }
    */


    // system("pause");
    return 0;
}