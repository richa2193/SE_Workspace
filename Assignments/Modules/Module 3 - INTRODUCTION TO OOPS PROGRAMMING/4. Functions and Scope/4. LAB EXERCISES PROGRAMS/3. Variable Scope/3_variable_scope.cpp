#include<iostream>
using namespace std;

// global variable
int number = 100;

// function to show local variable 
void showlocal()
{
    int number = 50;    //local variable (same name as global)

    cout << "Inside Showlocal() function:\n ";
    cout << "Local Number = " << number << endl;
}

// function to access global variable 
void showglobal()
{
    cout << "\n Inside showglobal() function. \n";
    cout << "Global Number : " <<  number << endl;
}

int main()
{
    cout << "Inside Main() Function : \n ";
    cout << "Global Number = " << number << endl;

    showlocal();
    showglobal();

    return 0;
    
}

