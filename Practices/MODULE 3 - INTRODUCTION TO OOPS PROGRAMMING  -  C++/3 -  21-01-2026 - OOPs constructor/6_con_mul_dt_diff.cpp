#include<iostream>
using namespace std;

class Count
{
    public:
    Count(int a, int b)
    {
        int c = a + b;
        cout<<c;
    }

    Count(double a, double b)
    {
        double d = a*b;
        cout<<d; 
    }
};

int main()
{
    Count c1 = Count(3.00,2.00);

    return 0;

}