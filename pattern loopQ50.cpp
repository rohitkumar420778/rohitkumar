#include <iostream>
using namespace std;
int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
