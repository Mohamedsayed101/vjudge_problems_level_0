#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mid = n / 2;  // Midpoint of the diamond

    // Upper part of the diamond (including the middle row)
    for (int i = 0; i <= mid; i++) {
        // Print spaces
        for (int j = 0; j < mid - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (int i = mid - 1; i >= 0; i--) {
        // Print spaces
        for (int j = 0; j < mid - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
