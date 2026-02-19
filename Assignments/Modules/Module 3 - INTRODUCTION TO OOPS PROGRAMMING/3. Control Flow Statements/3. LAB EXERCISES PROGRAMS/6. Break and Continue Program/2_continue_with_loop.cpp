#include <iostream>
using namespace std;

int main() 
{
    for(int i = 1; i <= 5; i++) 
    {
        if(i == 3) 
        {
            continue;   // Skip when i is 3
        }
        cout << i << " ";
    }

    return 0;
}
