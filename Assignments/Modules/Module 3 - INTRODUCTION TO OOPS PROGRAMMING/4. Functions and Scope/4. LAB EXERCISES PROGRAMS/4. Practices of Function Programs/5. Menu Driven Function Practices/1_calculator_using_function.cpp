#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int main()
{
    int choice, x, y;

    cout<<"1. Addition 2. Subtraction 3. Multiply\n" << endl;
    cout<<"Enter Choice : ";
    cin>>choice;

    cout <<"Enter First Number : ";
    cin >> x;

    cout << "Enter Second Number : ";
    cin>>y;
    
    switch(choice)
    {
        case 1:
        cout << "Result = " << add(x, y);
        break;

        case 2:
        cout << "Result = " << sub(x, y);
        break;

        case 3:
        cout << "Result = " << mul(x, y);
        break;

        default: 
        cout<< "Invalid Choice.";

    }

    return 0;

}