#include<iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

    public:
    void getdata()
    {
        cout<<"Enter Length : "<<endl;
        cin>> length;

        cout<<"Enter Breadth : ";
        cin>> breadth;
    }

    void area()
    {
        cout<< "Area of Rectangle : " << length * breadth;
    }
};

int main()
{
    Rectangle r;  // object creation 
    r.getdata();  // input
    r.area();     // output
    
    return 0;

}

