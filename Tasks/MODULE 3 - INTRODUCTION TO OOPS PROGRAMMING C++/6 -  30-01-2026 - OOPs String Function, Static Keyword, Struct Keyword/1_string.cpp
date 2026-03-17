#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string email = "abcd@gmail.com";
    string password = "12345";

    string loginemail, loginpassword;

    cout<<"Enter Email : ";
    cin>>loginemail;

    cout<<"Enter Password : ";
    cin>>loginpassword;
    
    if(loginemail == email && loginpassword == password)
    {
        cout<<"Login Successfully.";
    }

    else
    {
        cout<<"Invalid email or password ";
    }

    return 0;

}

