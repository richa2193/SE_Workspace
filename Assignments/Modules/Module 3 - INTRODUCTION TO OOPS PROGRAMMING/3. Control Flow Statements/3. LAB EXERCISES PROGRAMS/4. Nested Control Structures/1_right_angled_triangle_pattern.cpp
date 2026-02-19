#include<iostream>
using namespace std;

int main()
{
    int rows;

    cout<<"Enter Number of Rows : ";
    cin>>rows;

    for(int i = 1; i <= rows; i++)  //rows  
    {
        for(int j = 1; j <= i; j++) //column 
        {
            cout << "* ";
        }

        cout << endl;   //move to next line after each row
    }
}