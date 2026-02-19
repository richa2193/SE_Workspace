#include <iostream>
using namespace std;

class Person 
{
    protected:
    string name;
    int age;

    public:
    void inputPerson() 
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person 
{
    private:
    int rollNo;

    public:
    void inputStudent()  
    {
        inputPerson();
        cout << "Enter Roll No: ";
        cin >> rollNo;
    }

    void displayStudent()  
    {
        displayPerson();
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()  
{
    Student s;
    s.inputStudent();
    s.displayStudent();
    return 0;
}
