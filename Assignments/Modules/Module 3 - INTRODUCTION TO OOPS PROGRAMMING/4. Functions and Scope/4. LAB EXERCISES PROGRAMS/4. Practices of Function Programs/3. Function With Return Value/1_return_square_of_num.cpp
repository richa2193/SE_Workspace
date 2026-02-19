#include<iostream>
using namespace std;

int square(int num)
{
    return num * num;
}

int main()
{
    int result = square(19);

    cout << "Result = " << result;

    return 0;
}