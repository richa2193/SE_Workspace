#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout<<"Enter First Integer : "<<endl;
    cin>>a;

    cout<<"Enter Second Integer : "<<endl;
    cin>>b;

    // arithmatic operator 
    cout << "\n --- Arithmatic Operator ---" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // relational operator 
    cout << "\n --- Relational Operator --- "<<endl;
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b : " << (a > b) << endl;
    cout << "a < b : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    // logical operator 
    cout<< "\n --- Logical Operator ---"<<endl;
    cout << "(a > 0 && b > 0) : " << (a > 0 && b > 0) << endl;
    cout << "(a > 0 || b > 0) : " << (a > 0 || b > 0) << endl;
    cout << "!(a > 0) : " << !(a > 0) << endl;

    // bitwise operator 
    cout << "\n --- Bitwise Operator --- " << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a  = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    return 0;

}