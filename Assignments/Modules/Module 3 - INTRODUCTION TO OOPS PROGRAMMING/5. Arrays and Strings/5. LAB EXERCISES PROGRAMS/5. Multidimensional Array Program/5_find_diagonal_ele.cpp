#include <iostream>
using namespace std;

int main() 
{
    int arr[2][2] = {{1,2},{3,4}};

    cout << "Primary Diagonal: ";

    for(int i = 0; i < 2; i++) 
    {
        cout << arr[i][i] << " ";
    }

    return 0;
}
