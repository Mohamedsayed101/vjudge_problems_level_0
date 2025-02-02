#include <iostream>

using namespace std;

int main() {
    float A, B, C;
    char S, Q;

    cout << "Enter the equation (e.g., 5 + 3 = 8): ";
    cin >> A >> S >> B >> Q >> C;

    if (Q != '=') {  // Ensure the equation format is correct
        cout << "Invalid equation format!" << endl;
        return 1;  // Exit with an error code
    }

    switch (S) {
        case '+':
            cout << ((A + B == C) ? "Yes" : to_string(A + B)) << endl;
            break;
        case '-':
            cout << ((A - B == C) ? "Yes" : to_string(A - B)) << endl;
            break;
        case '*':
            cout << ((A * B == C) ? "Yes" : to_string(A * B)) << endl;
            break;
        case '/':
            if (B == 0) {
                cout << "Error: Division by zero!" << endl;
            } else {
                cout << ((A / B == C) ? "Yes" : to_string(A / B)) << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
