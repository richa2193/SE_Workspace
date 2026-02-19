#include <iostream>
using namespace std;

class Student 
{
    public:
    string name;
    int age;

    void display() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() 
{
    Student s1;      // Creating object

    s1.name = "John";
    s1.age = 20;

    s1.display();    // Calling function

    return 0;
}
