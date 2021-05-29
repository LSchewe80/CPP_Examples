/*
	erstellt: 29/05/2021

	Operatoren
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car
{
    private:
        int ps_;
    public:
        Car(int ps){
            this->ps_ = ps;
        }
        int getPS(){
            return this->ps_;
        }

        bool morePS(const Car &other){
            return (this->ps_ > other.ps_);
        }

        // Operator ++ überladen
        // ++Objekt
        Car& operator ++(){
            ps_++;
            return *this;
        }
        // Objekt++ --> Sonderfall bei direkter Ausgabe
        // Ausgabe und dann erhöhen!
        Car operator ++(int){
            Car tmp (*this);
            ps_++;
            return tmp;
        }
        // Operator < überladen
        bool operator <(const Car &other) const {
            return (this->ps_ < other.ps_);
        }
        // Operator > überladen
        bool operator >(const Car &other) const {
            return (this->ps_ > other.ps_);
        }

};



int	main(int argc, char **argv)
{   
    Car a(250);
    Car b(330);

    ++a;
    cout << (a++).getPS() << endl;  //a++ gibt erst aus und dann wird erhöht
    cout << a.getPS() << endl;

    cout << (a < b) << endl;
    cout << (a > b) << endl;

    cout << a.morePS(b) << endl;
    cout << b.morePS(a) << endl;


    vector<int> v = {123, 456, 789};
    for (auto it = v.begin(); it < v.end(); ++it){
        cout << *it << endl;
    }


    //system("pause");
    return 0;
}