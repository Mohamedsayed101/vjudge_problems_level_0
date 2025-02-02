#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A, B, C, D;
    cin >> A >> B >> C >> D;

    // Using logarithm transformation
    double lhs = B * log(A);
    double rhs = D * log(C);

    if (lhs > rhs)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
