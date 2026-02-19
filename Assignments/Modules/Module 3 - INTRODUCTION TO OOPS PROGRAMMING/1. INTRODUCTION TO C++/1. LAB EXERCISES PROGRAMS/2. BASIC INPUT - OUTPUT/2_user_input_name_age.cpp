#include<iostream>
using namespace std;

int main()
{
    string name;
    int age;

    // taking input from user 
    cout<<"Enter Your Name : "<<endl;
    cin>>name;

    cout<<"Enter Your Age : "<<endl;
    cin>>age;

    // displaying output 
    cout<< "Hello " << name << "! You are "<< age << " years old."<<endl;

    return 0;

}