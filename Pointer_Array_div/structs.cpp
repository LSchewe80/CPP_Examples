/*
   erstellt: 17/05/2021
   
   Example:
   Structs
*/

#include <iostream>
#include <string>
#include <array>
#include <vector>


using namespace std;


struct Student
{
    string name;
    int age;
    
    //Funktion moeglich
    void printName(){
        cout << name << endl;
    }
};

/*
class Student
{
    public:
        string name;
        int age;
};
*/

 
int	main(int argc, char **argv)
{
    vector<Student> students;

    Student s;
    s.name = "Michael";
    s.age = 21;

    s.printName();

    // Pointer auf struct
    // Zugriff mit ->
    Student* ptr = &s;

    cout << ptr->name << endl;


    // system("pause");
    return 0;
}