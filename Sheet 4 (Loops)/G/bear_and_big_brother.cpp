#include <iostream>

using namespace std;

int main() {

    int a,b,years=0;
    cout << "Enter weight both of Limak and Bob: ";
    cin >> a >> b;
    
    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }
    
    cout << "Years: " << years << endl;

    return 0;
}

