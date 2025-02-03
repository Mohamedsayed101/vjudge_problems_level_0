#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A,B,GCD,r; //a,b;
    cout << "Enter two numbers: ";
    cin >> A >> B;
    // a =max(A,B);
    // b = min(A,B);
    // GCD=a%b;
    // if (GCD==0)
    //     cout << "GCD of " << A << " and " << B << " is " << b << endl;
    // else
    //     cout << "GCD of " << A << " and " << B << " is " << GCD << endl;

    //anthor solution
    GCD = 0;
    A = abs(A);
    B = abs(B);
    while (B != 0) {
        GCD = A % B;
        A = B;
        B = GCD;
    }
    cout << "GCD of " << A << " and " << B << " is " << A << endl;
    return 0;
}
