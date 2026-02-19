#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch[]="mango";
    char ch2[50]="";

    do
    {
        cout<<"what is your favourite Fruit?";
        cin>>ch2;
    }

    while(strcmp(ch,ch2)!=0);

    cout<<"answer is correct!!"<<endl;

    return 0;

}