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
};

int main()
{
    Student s1 = Student(101,"abcd");
    Student s2 = Student(102,"pqrs");
    
    cout<<s1.id<<endl;
    cout<<s1.name<<endl;

    cout<<s2.id<<endl;
    cout<<s2.name<<endl;
    
    return 0;
    
}