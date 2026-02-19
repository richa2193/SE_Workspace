#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str, rev = "";

    cout << "Enter a String : ";
    cin>> str;

    for(int i = str.length() - 1; i >= 0; i--)
    {
        rev += str[i];
    }

    if(str == rev)
    {
        cout <<"The string is a Palindrome.";
    }
    else
    {
        cout << "The string is not a palindrome.";
    }

    return 0;
    
}