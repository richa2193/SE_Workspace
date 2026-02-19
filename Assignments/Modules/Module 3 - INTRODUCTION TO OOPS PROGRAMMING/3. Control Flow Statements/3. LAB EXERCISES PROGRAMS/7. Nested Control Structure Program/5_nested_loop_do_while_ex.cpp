#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        int j = 1;
        do {
            cout << j << " ";
            j++;
        } while(j <= 3);

        cout << endl;
        i++;
    } while(i <= 3);

    return 0;
}
