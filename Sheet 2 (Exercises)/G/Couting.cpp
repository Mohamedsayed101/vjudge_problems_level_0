#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    cout << ((B - A + 1) * (A <= B)) << endl; 
    
    return 0;
}
