#include <iostream>
#include <string>
#include <cctype>   // For toupper()
using namespace std;

int main() 
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++) 
    {
        str[i] = toupper(str[i]);
    }

    cout << "Uppercase String: " << str;

    return 0;
}
