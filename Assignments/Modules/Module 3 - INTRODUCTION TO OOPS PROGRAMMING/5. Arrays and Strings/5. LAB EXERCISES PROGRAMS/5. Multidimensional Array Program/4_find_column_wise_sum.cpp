#include <iostream>
using namespace std;

int main() 
{
    int arr[2][2] = {{1,2},{3,4}};

    for(int j = 0; j < 2; j++) 
    {
        int colSum = 0;

        for(int i = 0; i < 2; i++) 
        {
            colSum += arr[i][j];
        }
        
        cout << "Sum of column " << j << " = " << colSum << endl;
    }

    return 0;
}
