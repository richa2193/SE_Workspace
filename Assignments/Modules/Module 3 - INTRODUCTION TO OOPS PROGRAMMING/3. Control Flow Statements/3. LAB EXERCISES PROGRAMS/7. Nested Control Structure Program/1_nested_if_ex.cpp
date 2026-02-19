#include <iostream>
using namespace std;

int main() 
{
    int num = 8;

    if (num > 0) // Outer if
    {                    
        if (num % 2 == 0)   //inner if
        {      
            cout << "Positive and Even";
        }
    }

    return 0;
}
