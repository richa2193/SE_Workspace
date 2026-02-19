#include<iostream>
using namespace std;

class Ajay 
{
    public:
    int amount1 = 500;

};

class Vijay : public Ajay
{
    public:
    int amount2 = 300;

};

int main()
{
    Vijay v;
    int ans = v.amount1 + v.amount2;
    cout<<"Total is : "<<ans<<endl;

    return 0;

}