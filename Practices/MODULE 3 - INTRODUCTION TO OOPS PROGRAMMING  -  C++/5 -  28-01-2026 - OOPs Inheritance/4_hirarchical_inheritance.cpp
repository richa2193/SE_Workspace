#include<iostream>
using namespace std;

class Rbi
{
    public:
    virtual int rate()
    {
        return 0;
    }
};

class Sbi : public Rbi
{
    public:
    int rate()
    {
        return 7;
    }
};

class Icici : public Rbi 
{
    public:
    int rate()
    {
        return 8;
    }
};

class Axis : public Rbi 
{
    public:
    int rate()
    {
        return 9;
    }
};

int main()
{
    Rbi *r; // reference variable 

    Sbi s;
    Icici i;
    Axis a;

    r = &s;
    cout<<r->rate()<<endl;

    r = &i;
    cout<<r->rate()<<endl;

    r = &a;
    cout<<r->rate()<<endl;

    // Sbi s;
    // Icici i;
    // Axis a;

    // cout<<s.rate()<<endl;
    // cout<<i.rate()<<endl;
    // cout<<a.rate()<<endl;

    return 0;

}