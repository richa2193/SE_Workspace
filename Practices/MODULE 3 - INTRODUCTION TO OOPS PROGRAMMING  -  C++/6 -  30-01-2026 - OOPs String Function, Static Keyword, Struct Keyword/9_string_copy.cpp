#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch[50];
    char ch2[50];

    cout<< "Enter the key string :";
    cin.getline(ch, 25);

    cout<<strcpy(ch2,ch)<<endl;

    return 0;
}
