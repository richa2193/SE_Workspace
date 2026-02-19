#include<iostream>
using namespace std;

int main()
{
    int number  = 0;

    while(number != 5)
    {
        cout<< "Enter Number 5 to Stop : ";
        cin>>number;

        if(number != 5)
        {
            cout<<"Try again!"<<endl; 
        }
    }

    cout<<"Loop Ended.";

    return 0;
    
}