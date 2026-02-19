#include<iostream>
using namespace std;

class Student 
{   
    public:
    Student(int i,string n,string e)
    {
        cout<<i<<endl;
        cout<<n<<endl;
        cout<<e<<endl;
    }

    Student(int i, string n)
    {
        cout<<i<<endl;
        cout<<n<<endl;
    }

    Student(string n, string e)
    {
        cout<<n<<endl;
        cout<<e<<endl;
    }
};

int main()
{
    Student s1 = Student("a","abcd@gmailcom");

    return 0;
    
}