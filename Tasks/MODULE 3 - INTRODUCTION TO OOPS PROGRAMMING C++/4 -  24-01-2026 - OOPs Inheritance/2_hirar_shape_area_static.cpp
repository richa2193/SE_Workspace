#include<iostream>
using namespace std;

class Shape 
{
public:
    int a;
    int b;
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "Area of Rectangle : " << a * b << endl;
    }
};

class Triangle : public Shape 
{
public:
    void area2()
    {
        cout << "Area of Triangle : " << (a * b) / 2.0 << endl;
    }
};

class Circle : public Shape 
{
public:
    void area3()
    {
        cout << "Area of Circle : " << 3.14 * a * a << endl;
    }
};

int main()
{
    Rectangle r;
    Triangle t;
    Circle c;

    r.a = 10;
    r.b = 5;

    t.a = 10;
    t.b = 5;

    c.a = 7;   
    c.b = 0;  

    r.area();
    t.area2();
    c.area3();

    return 0;

}