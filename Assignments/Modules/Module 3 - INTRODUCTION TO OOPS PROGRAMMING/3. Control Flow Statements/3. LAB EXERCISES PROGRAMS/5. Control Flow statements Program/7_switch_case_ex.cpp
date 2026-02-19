#include <iostream>
using namespace std;

int main() 
{
    int choice;

    cout << "Enter a number (1-3): ";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            cout << "You ordered Burger";
            break;

        case 2:
            cout << "You ordered Pizza";
            break;

        case 3:
            cout << "You ordered Coffee";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
