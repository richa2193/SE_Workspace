#include <iostream>
#include <cstring>
using namespace std;

class login
{
public:
    char ch[25] = "mahima@gmail.com";
    char ch2[25] = "12345";

    char email[25];
    char password[25];
};

int main()
{
    login user ;

    cout << "Enter Email: ";
    cin >>user.email;

    cout << "Enter Password: ";
    cin >>user.password;

    if (strcmp(user.ch,user.email) == 0 ||
        strcmp(user.ch2,user.password) == 0)
    {
        cout << "Login Successful ";
    }
    else
    {
        cout << "Invalid Email or Password ";
    }

    return 0;
}