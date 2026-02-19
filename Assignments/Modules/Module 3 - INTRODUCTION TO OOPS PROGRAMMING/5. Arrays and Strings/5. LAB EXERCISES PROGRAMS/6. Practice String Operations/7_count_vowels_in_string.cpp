#include <iostream>
#include <string>
#include <cctype>   // For tolower()
using namespace std;

int main() 
{
    string str;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++) 
    {
        char ch = tolower(str[i]);

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            count++;
        }
    }

    cout << "Number of vowels = " << count;

    return 0;
}
