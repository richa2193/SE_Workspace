#include<iostream>
using namespace std;

class A
{
    public:
    int num1;
    void get_a(int num)
    {
        num1 = num;
    }
};

class B : public A
{
    public:
    int num2;
    void get_b(int num)
    {
        num2 = num;
    }
};

class c 
{
    public:
    int num3;
    void get_c(int num)
    {
        num3 = num;
    }
};

class D : public B, public c
{
    public:

    void count()
    {
        int ans = num1*num2*num3;
        cout<<ans<<endl;
    }
};

int main()
{
    int a,b,c;
    cout<<"Enter a value for A :";
    cin>>a;

    cout<<"Enter a value for B :";
    cin>>b;

    cout<<"Enter a value for C : ";
    cin>>c;

    D d;
    d.get_a(a);
    d.get_b(b);
    d.get_c(c);
    d.count();

    return 0;
    
}