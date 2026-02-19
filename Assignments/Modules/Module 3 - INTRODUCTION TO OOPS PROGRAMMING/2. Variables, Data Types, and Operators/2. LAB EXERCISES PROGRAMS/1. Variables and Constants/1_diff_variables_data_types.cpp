#include<iostream>
using namespace std;

int main()
{   
    // variables declaration 
    int a,b;
    float x;
    char ch;
    
    // constant declaration
    const int pivalue = 3.14;

    cout<<"Enter First Integer : ";
    cin>>a;

    cout<<"Enter Second Integer : ";
    cin>>b;

    cout<<"Enter a Float Value :";
    cin>>x;

    cout<<"Enter a Character Value : ";
    cin>>ch;

    // operations 
    int sum = a + b;
    int product = a * b;
    float result = x * a;

    // output 
    cout<< "Integer Sum : " << sum << endl;
    cout<< "Integer Product : " << product << endl;
    cout<< "Float Result : " << result << endl;
    cout<< "Character : " << ch << endl;
    cout<< "Integer Sum : " << sum << endl;
    cout<< "Constant Value : " << pivalue << endl;

    return 0;
    
}