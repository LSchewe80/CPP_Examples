/*
	erstellt: 25/05/2021

    weitere Art der Konstruktor diekt zu befüllen
*/

#include <iostream>
#include <string>


using namespace std;

class Car {
    private:
        string class_name;
        int class_age;
    public:
        Car(string name, int age) : class_name(name), class_age(age) {}
        void ausgabe(){
            cout << "Typ: " << this->class_name << endl;
            cout <<"Alter: " << this->class_age << endl;
        }
};


int main(int argc, const char * argv[])
{
    Car c("Fahrrad", 2);
    c.ausgabe();
    
    //system("pause");
    return 0;
}