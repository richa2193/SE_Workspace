#include<iostream>
using namespace std;

class A
{
    public:
    void a()
    {
        cout<<"A called"<<endl;
    }
};

class B : public A 
{
    public:
    void b()
    {
        cout<<"B called"<<endl;
    }
};

class C : public A
{
    public:
    void c()
    {
        cout<<"C called"<<endl;
    }
};

int main()
{
    B b;
    C c;

    c.a();
    b.b();
    c.c();

    return 0;
    
}