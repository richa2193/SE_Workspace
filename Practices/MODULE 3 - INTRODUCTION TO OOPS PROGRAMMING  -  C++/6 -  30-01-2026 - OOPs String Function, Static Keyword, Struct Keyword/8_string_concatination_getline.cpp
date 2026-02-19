#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch[50];
    char ch2[50];

    cout<<"Enter the Key String: ";
    cin.getline(ch, 25);

    cout<<"Enter the buffer String: ";
    cin.getline(ch2, 25);

    cout<<strcat(ch, ch2)<<endl;

    return 0;
}