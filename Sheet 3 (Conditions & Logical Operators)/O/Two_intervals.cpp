#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int l1, r1, l2, r2;
    cout << "Enter L1, R1, L2, R2: ";
    cin >> l1 >> r1 >> l2 >> r2;

    // Check if there is an intersection
    int start = max(l1, l2);
    int end = min(r1, r2);

    if (start <= end) {
        cout << start << " " << end << endl;  // Print the intersection
    } else {
        cout << -1 << endl;  // No intersection
    }

    return 0;
}
