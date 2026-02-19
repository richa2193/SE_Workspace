#include <iostream>
using namespace std;

int main() 
{
    int arr[6] = {10, 20, 30, 40, 50};
    int size = 5;

    arr[size] = 60;   // Insert at end
    size++;

    for(int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}
