#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, C, D;
    cout << "Enter four integers: ";
    cin >> A >> B >> C >> D;
    int result=A*B*C*D;
    cout << "The product of the four integers is grather than 2: " << result << endl;
    // last two Digits
    int lastTwoDigits = result % 100;
    cout << "The last two digits of the product are: " << lastTwoDigits << endl;

    return 0;
}
