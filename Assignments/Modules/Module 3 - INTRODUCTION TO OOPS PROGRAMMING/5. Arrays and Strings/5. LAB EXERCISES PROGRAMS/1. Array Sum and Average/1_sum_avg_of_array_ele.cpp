#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin>>n;

    int arr[n];     //array declaration 
    int sum = 0;
    double average;

    // input array elements 
    cout << "Enter " << n << " integers : \n ";

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];      //calculate sum 
    }

    // calculate avergae 
    average = (double)sum / n;

    // display result 
    cout << "\n Sum = " << sum << endl;
    cout << "\n Average = " << average << endl;

    return 0;

}