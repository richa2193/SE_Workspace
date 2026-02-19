#include<iostream>
using namespace std;

int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }

    else
    {
        return b;
    }
}

int main()
{
    int num1, num2;

    cout << "Enter First Numbers: ";
    cin >> num1;

    cout <<"Enter Second Number : ";
    cin >> num2;

    cout << "Maximum = " << max(num1, num2);

    return 0;

}