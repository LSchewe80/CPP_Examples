/*
	erstellt: 25/05/2021

    virtuelle Methode
    Faustformel:
    Wird eine Methode überschrieben
    am besten Methode virtuell erstellen
*/

#include <iostream>
#include <string>


using namespace std;

// Basisklasse
class Waffe
{
    private:

    public:
        virtual void explodiere(){
            cout << "Waffe explodiert" << endl;
        }

};

class Rakete : public Waffe
{
    private:

    public:
        virtual void explodiere(){
            cout << "Rakete explodiert" << endl;
        }

};

class Bombe :  public Waffe
{
    private:

    public:
        virtual void explodiere(){
            cout << "Bombe explodiert" << endl;
        }

};

void machWas(Waffe &waffe){
    waffe.explodiere();
}

int main(int argc, const char * argv[]) 
{
    Waffe w;
    w.explodiere();
    machWas(w);

    Rakete r;
    r.explodiere();
    machWas(r);

    Bombe b;
    b.explodiere();
    machWas(b);

    //system("pause");
    return 0; 
}