#include <iostream>
using namespace std;

// 1️ Function Declaration
int add(int, int);

// 2️ Function Definition
int add(int a, int b) 
{
    return a + b;
}

int main() 
{

    // 3️ Function Calling
    int result = add(10, 5);

    cout << "Sum = " << result;

    return 0;
}


