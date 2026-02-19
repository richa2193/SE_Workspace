#include<iostream>
using namespace std;

// recursive function to calculate factorial 
long long factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    //recursive case
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;

    cout << "Enter a Number : ";
    cin>>num;

    if(num < 0)
    {
        cout << "Factorial of a negative number is not defined.";
    }

    else
    {
        cout<< "Factorial of " << num << " is " << factorial(num);
    }

    return 0;

}