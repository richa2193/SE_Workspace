#include<iostream>
using namespace std;

class Student 
{
    public:
    int id;
    string name;

    Student(int i, string n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout<<id<<" "<<name<<endl;
    }

};

int main()
{
    Student s1 = Student(101,"abcd");
    Student s2 = Student(102,"pqrs");
    
    s1.display();
    s2.display();
    
    return 0;
    
}