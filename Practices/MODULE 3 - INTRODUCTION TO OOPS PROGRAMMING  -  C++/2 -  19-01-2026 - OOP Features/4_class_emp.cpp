#include<iostream>
using namespace std;
class Emp 
{
   public:
   string name;
   int salary; 

   void display()
   {
        cout<<name<<" "<<salary<<endl;
   }
};

int main()
{
    string name1;
    int salary1;

    cout<<"Enter your name : ";
    cin>>name1;

    cout<<"Enter your salary : ";
    cin>>salary1;

    Emp e1;
    e1.name=name1;
    e1.salary=salary1;

    e1.display();

    return 0;

}