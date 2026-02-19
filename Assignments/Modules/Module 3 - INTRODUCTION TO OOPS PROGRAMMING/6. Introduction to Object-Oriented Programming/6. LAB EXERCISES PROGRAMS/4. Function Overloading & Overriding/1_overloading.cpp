#include <iostream>
using namespace std;

class Math 
{
    public:
    int add(int a, int b) 
    {
        return a + b;
    }

    double add(double a, double b) 
    {
        return a + b;
    }
};

int main() 
{
    Math obj;
    cout << obj.add(5, 3) << endl;       // int version
    cout << obj.add(2.5, 3.5) << endl;   // double version
    return 0;
}
