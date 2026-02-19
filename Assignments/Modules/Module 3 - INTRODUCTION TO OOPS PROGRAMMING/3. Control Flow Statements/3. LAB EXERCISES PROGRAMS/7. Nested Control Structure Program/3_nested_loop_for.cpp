#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 3; i++) {        // Outer loop
        for(int j = 1; j <= 3; j++) {    // Inner loop
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
