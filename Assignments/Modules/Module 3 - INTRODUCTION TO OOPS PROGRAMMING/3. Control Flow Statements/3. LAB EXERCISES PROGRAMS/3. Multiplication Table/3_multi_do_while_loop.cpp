#include <iostream>
using namespace std;

int main()
{
    int number, i = 1;
    cout << "Enter a number: ";
    cin >> number;

    cout << "\nUsing do-while loop:\n";

    do 
    {
        cout << number << " x " << i << " = " << number * i << endl;
        i++;

    } 
    
    while (i <= 10);

    return 0;
}
