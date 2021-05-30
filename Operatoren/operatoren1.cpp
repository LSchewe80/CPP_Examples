/*
	erstellt: 29/05/2021

	Operatoren überladen 1
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vector
{
    private:
        double class_x;
        double class_y;
        double class_z;

    public:
        Vector(double x, double y, double z) : class_x(x), class_y(y), class_z(z) {}

        // ~Vector(){
        //     cout << "Destruktur" << endl;
        // }

        Vector operator +(const Vector& vector){
            Vector result(0, 0, 0);
            result.class_x = this->class_x + vector.class_x;
            result.class_y = this->class_y + vector.class_y;
            result.class_z = this->class_z + vector.class_z;
            return result;
        }

        friend ostream& operator <<(ostream& stream, const Vector& vector){
                stream << "Ausgabe Vector: " << "(" << vector.class_x << " , " << vector.class_y << " , " << vector.class_z << ")";
                return stream;                        
        }
};


int	main(int argc, char **argv)
{   
    Vector v1(1,2,3);
    Vector v2(4,4,0);
    Vector v3 = v1 + v2;

    cout << v3 << endl;


    //system("pause");
    return 0;
}