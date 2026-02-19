#include<iostream>
using namespace std;

class sum 
{
    private:
    int x,y,z;      //private variables

    public:

    void add()
    {
        cout<<"Enter Two Numbers : ";
        cin>>x>>y;
        z = x+y;
        cout<<"Sum of two number is : " <<z<<endl;
    }
};

int main()
{
    sum sm;
    sm.add();

    return 0;

}