#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) 
    {
        cout << "Positive Number";
    }

    else if (number < 0) 
    {
        cout << "Negative Number";
    }

    return 0;
}
