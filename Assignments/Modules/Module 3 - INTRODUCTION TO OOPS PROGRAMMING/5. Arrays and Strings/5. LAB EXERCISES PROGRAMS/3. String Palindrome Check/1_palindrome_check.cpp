#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    bool ispalindrome = true;

    cout <<"Enter a String : ";
    cin>>str;

    int length = str.length();

    // check palindrome
    for(int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - i - 1])
        {
            ispalindrome = false;
            break;
        }
    }

    if(ispalindrome)
    {
        cout << "The string is a palindrome.";
    }

    else
    {
        cout << "The string is not a palindrome.";
    }

    return 0;
    
}