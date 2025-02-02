#include <iostream>
using namespace std;

int main() {
    int A,B;
    double C;
    cout << "Enter Two numbers: ";
    cin >> A >> B ;
    C = ((double)(A - B)/3)+B;
    cout << " the mean arterial pressure = " << C << endl;
    return 0;
}

