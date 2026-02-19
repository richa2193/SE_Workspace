#include <iostream>
using namespace std;

int main()
 {
    int num = -5;

    if (num >= 0) 
    {
        if (num == 0)
            cout << "Number is Zero";
        else
            cout << "Positive Number";
    } 
    else 
    {
        cout << "Negative Number";
    }

    return 0;
}
