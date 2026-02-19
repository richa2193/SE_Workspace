#include<iostream>
using namespace std;

class Student 
{
    public:
    Student()
    {
        cout<<"Xyz";
    }
};

int main()
{
    cout<<"Abc"<<endl;
    Student s1 = Student();

    return 0;
    
}