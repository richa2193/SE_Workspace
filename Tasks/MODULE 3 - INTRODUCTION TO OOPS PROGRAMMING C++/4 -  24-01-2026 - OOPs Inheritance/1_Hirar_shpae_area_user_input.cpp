#include<iostream>
using namespace std;

class Shape 
{
    public:
    int a;
    int b;

    int value()
    {
        cout<<"Enter the value of a : "<<endl;
        cin>>a;

        cout<<"Enter thje value of b : "<<endl;
        cin>>b;
        return 0;
    }

};

class Rectangle : public Shape
{
    public:

    int area()
    {
        cout<<"Area of Recentangle : "<<a*b<<endl;  
        return 0;
    }
};

class Triangle : public Shape 
{

    public:

    double area()
    {
        cout<<"Area of Triangle : "<< (a*b) / 2 <<endl;
        return 0;
    }

};

class Circle : public Shape 
{
    public:

    float area()
    {
        cout<<"Area of circle : "<< 3.14 * a * a <<endl;
        return 0;
    }
};


int main()
{
    Shape s;
    s.value();

    Rectangle r;
    Triangle t;
    Circle c;

    r.a = s.a; 
    r.b = s.b;

    t.a = s.a; 
    t.b = s.b;

    c.a = s.a; 
    c.b = s.b;

    r.area();
    t.area();
    c.area();

    return 0;


}







