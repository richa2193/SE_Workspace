#include<iostream>
using namespace std;

class calculator
{
    public:
    double add(double a, double b)
    {
        return a + b;
    }

    double subtract(double a, double b)
    {
        return a - b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }

    double divide(double a, double b)
    {
        if(b != 0)
        {
            return a / b;
        }

        else
        {
            cout << "Error! Division by zero is not allowed." << endl;
            return 0;
        }
    }
};

int main()
{
    calculator calc;    //creating object

    double num1, num2;

    cout << "Enter First Number : ";
    cin>>num1;

    cout << "Enter Second Number : ";
    cin>>num2;

    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division: " << calc.divide(num1, num2) << endl;

    return 0;

}