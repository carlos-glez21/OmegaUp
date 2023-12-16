#include <iostream>

using namespace std;

int main() {
    
    int base;

    int i;
    int x;

    cin >> base;

    for (i = 1; i <= (base + 1) / 2; i++) {
        for (x = 1; x <= (base - 1) / 2 - i + 1; x++) {
            cout << " ";
        }

       
        for (x = 1; x <= 2 * i - 1; x++) {
            cout << '@';
        }

        cout << endl;
    }

    return 0;
}
