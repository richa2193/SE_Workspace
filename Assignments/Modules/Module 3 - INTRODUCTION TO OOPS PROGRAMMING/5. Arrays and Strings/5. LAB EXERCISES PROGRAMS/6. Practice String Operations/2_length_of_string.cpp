#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);   // Takes full sentence input

    cout << "Length = " << str.length();

    return 0;
    
}
