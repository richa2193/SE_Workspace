#include<iostream>
using namespace std;

int main()
{
    int a;
    float b;

    cout<<"Enter an Integer Value : ";
    cin>>a;

    cout<<"Enter a Float Value : ";
    cin>>b;

    // inplicit conversion (int -> float)
    float result = a + b;
    
    cout<< "Result after implicit conversion : " << result <<endl;

    return 0;
    

}