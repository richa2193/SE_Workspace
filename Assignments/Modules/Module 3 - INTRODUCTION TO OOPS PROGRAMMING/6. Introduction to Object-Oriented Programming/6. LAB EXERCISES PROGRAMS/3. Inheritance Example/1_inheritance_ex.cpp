#include <iostream>
using namespace std;

// Base Class
class Person 
{
    protected:
    string name;
    int age;

    public:
    void setPerson(string n, int a) 
    {
        name = n;
        age = a;
    }

    void displayPerson() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class 1
class Student : public Person 
{
    private:
    int rollNo;

    public:
    void setStudent(string n, int a, int r) 
    {
        setPerson(n, a);   // Reusing base class function
        rollNo = r;
    }

    void displayStudent() 
    {
        displayPerson();   // Reusing base class function
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived Class 2
class Teacher : public Person 
{
    private:
    string subject;

    public:
    void setTeacher(string n, int a, string s)  
    {
        setPerson(n, a);   // Reusing base class function
        subject = s;
    }

    void displayTeacher() 
    {
        displayPerson();   // Reusing base class function
        cout << "Subject: " << subject << endl;
    }
};

int main()  
{
    Student s;
    Teacher t;

    s.setStudent("Richa2", 20, 101);
    t.setTeacher("Purvi", 40, "Mathematics");

    cout << "Student Details:" << endl;
    s.displayStudent();

    cout << "\nTeacher Details:" << endl;
    t.displayTeacher();

    return 0;
}
