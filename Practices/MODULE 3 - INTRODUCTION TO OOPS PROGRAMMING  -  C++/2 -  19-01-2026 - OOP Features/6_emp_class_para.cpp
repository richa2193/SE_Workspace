#include<iostream>
using namespace std;

class Emp 
{
    public:
    string name;
    int salary;

    void display(string n, int s)
    {
        if(salary>=50000)
        {
            cout<<"Excellent Salary";
        }

        else if(salary>=40000)
        {
            cout<<"Good Salary";
        }

        else if(salary>=30000)
        {
            cout<<"Average Salary";
        }

        else if(salary>=20000)
        {
            cout<<"Below Average";
        }

        else
        {
            cout<<"Bad";
        }

        // cout<<name<<" "<<salary<<endl;
    }
};

int main()
{
    Emp e1;
    string name1; 
    int salary1;
    
    cout<<"Enter your name : ";
    cin>>name1;

    cout<<"Enter your salary : ";
    cin>>salary1;

    // e1.name=name1;
    // e1.salary=salary1;

    e1.display(name1,salary1);

    return 0;

}