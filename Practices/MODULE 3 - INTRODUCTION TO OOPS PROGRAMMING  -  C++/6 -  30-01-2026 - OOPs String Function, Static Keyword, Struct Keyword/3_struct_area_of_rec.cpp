#include<iostream>
using namespace std;

struct Rectangle
{
    int width, height;
};

int main()
{
    struct Rectangle rec;

    rec.width=5;
    rec.height=6;

    cout<<rec.width*rec.height<<endl;

    return 0;

}