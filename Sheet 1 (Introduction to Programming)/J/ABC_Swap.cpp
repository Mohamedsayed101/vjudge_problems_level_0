#include <iostream>
#include <cmath>
#include <string>

using namespace std;
// swap function

void swap(int &x, int &y, int &z)
{
    int temp;
    temp = z;
    z = y;
    y = temp;
    temp = x;
    x = z;
    z = temp;
}
int main()
{
    int A, B, C;
    cout << "Enter three numbers: ";
    cin >> A >> B >> C;
    cout << "Numbers before swap: \n";
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
    A = A + B;
    B = A - B;
    A = A - B;
    A = A + C;
    C = A - C;
    A = A - C;
    // swap(A, B, C); // calling swap function with reference parameters to swap values directly.
    cout << "Numbers after swap: \n";
    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
    return 0;
}
