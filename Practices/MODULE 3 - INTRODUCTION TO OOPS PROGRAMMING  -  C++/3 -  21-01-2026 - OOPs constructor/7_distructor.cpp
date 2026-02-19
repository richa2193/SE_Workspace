#include<iostream>
using namespace std;

class Count 
{
    public:
    Count()
    {
        cout<<"A";
    }

    ~Count()
    {
        cout<<"B";
    }
};

int main()
{
    Count c1 = Count();

    return 0;
}