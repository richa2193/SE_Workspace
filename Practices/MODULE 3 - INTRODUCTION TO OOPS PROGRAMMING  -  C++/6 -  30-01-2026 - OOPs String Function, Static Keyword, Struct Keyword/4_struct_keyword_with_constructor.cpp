#include<iostream>
using namespace std;

struct Rectangle 
{
    int width, height;
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }

    void display()
    {
        cout<<"Area of Reatangle is : "<<(width*height);
    }
};

int main()
{
    struct Rectangle rec = Rectangle(6,5);
    rec.display();

    return 0;
    
}