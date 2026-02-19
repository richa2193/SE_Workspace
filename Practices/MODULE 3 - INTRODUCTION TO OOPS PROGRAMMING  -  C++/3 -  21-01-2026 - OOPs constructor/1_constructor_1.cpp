#include<iostream>
using namespace std;

class Student 
{
    public:
    int id;
    string name;

    //constructor 
    Student()
    {
        cout<<"A";
    }

    void display()
    {
        cout<<"B";
    }
};

int main()
{
    // Student s1;
    Student s1 = Student(); //object create and constructor call 
    cout<<"C";
    s1.display(); // method call 

    return 0;

}