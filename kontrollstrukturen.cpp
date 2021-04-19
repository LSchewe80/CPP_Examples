/*
	erstellt: 19/04/2021

	Kontrollstrukturen
*/

#include <iostream>
#include <string>

using namespace std;

int	main(int argc, char *argv[])
{   
    int age = 0;
    double alcohol = 0;
    cout << "Gebe bitte dein Alter ein: " << endl;
    cin >> age;
    cout << "Gebe bitte dein Promille-Wert ein: " << endl;
    cin >> alcohol;

    // if / else if / else 
    if (age >= 18)
    {
        cout << "Du bist volljährig!" << endl;
    }
    else if(age >= 12 && age <= 17)
    {
        cout << "Du bist minderjähriger Jugendlicher!" << endl;
    }
    else if(age >= 8 && age <= 12)
    {
        cout << "Du bist ein minderjähriges Kind!" << endl;
    }
    else{
        cout << "Du bist ein Kleinkind" << endl;
    }

    cout << endl;
    
    // while-Schleife
    while(age >= 18)
    {   
        if (alcohol > 0.3)
        {
            // for-Schleife
            for (int i = 0; i <= 20; i++)
            {   
                // Ungrade Ausgabes
                if ( i % 2 == 0)
                {
                    continue;
                }
                cout << i << endl;
                cout << "Du sollst kein Auto mehr fahren!" << endl;
            }
            break;

        }else{
            cout << "Gute Fahrt" << endl;
            break;
        }
    }

    cout << endl;

    // do-while-Schleife
    do
    {
        cout << "Dein Alter erhoeht sich um " << age++ << endl;

    } while (age <= 100);
    
    cout << endl;

    // for-Endlos-Schleife
    int abbruch = 1;
    for (;;)
    {
        if (abbruch == 11)
        {
            break;
        }
        cout << abbruch << "te for-Endlos-Schleife" << endl;
        abbruch++;
    }
    
    //system("pause");
    return 0;

}