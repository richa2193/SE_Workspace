#include<iostream>
using namespace std;

class Student 
{
    public:
    int id=0;
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
    int id,id2;
    string name,name2;

    cout<<"Enter your id : ";
    cin>>id;
    
    cout<<"Enter Your Name : ";
    cin>>name;

    Student s1(id,name);

    cout<<"enter your id : ";
    cin>>id2;

    cout<<"enter your name : ";
    cin>>name2;

    Student s2(id2, name2);

    s1.display();
    s2.display();


    return 0;

}