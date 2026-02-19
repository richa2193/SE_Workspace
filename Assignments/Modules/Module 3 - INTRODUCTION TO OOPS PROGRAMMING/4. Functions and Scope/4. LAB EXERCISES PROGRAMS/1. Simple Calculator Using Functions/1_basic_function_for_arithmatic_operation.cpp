#include<iostream>
using namespace std;

// function for addition 
double add(double a, double b)
{
    return a + b;
}

// function for substraction 
double subtract(double a, double b)
{
    return a - b;
} 

double multiplication(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    if(b == 0)
    {
        cout << "Error! Divison by zero is not allowed." << endl;
        return 0;
    }

    return a / b;
}

int main()
{   
    double num1, num2;

    int choice;

    cout << "Enter First Number : ";
    cin>>num1;

    cout<<"Enter Second Number :";
    cin>>num2;

    cout << "\nSelect Operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice)
    {
        case 1: 
            cout<< "Result =  " << add(num1, num2);
            break;

        case 2: 
            cout<< "Result =  " << subtract(num1, num2);
            break;

        case 3: 
            cout<< "Result =  " << multiplication(num1, num2);
            break;

        case 4: 
            cout<< "Result =  " << division(num1, num2);
            break;

        default: 
            cout<< "Invalid Choice! ";
            
    }

    return 0;
    
}