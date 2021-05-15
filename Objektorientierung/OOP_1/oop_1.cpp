#include <iostream>
#include <string>

using namespace std;

class Car
{
    private:
        string brand;
        int ps;

    public:
        // Konstruktor
        Car(string brand, int ps){
            this->brand = brand;
            this->ps = ps;
            cout << "Ein Auto wird estellt" << endl;
        }
        // Destruktor
        ~Car(){
            cout << "Objekt wird zerstört!" << endl;
        };
        // Getter-Methode
        string getBrand() {
            return this->brand;
        }
        int getPs() {
            return this->ps;
        }
        // Setter-Methode
        void setPs(int ps) {
            if (ps > 1000) {
                cout << "Das kann nicht sein!" << endl;
            }
            else {
                this->ps = ps;
            }
        }

        void tune(){
            this->ps+=20;
            cout << "Dein Auto wird getunet" << endl;
        }
        void printCar() {
            cout << this->brand << ": " << this->ps << endl;
        }
};