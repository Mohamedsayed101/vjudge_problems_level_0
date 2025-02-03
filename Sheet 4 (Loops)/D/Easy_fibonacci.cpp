#include <iostream>

using namespace std;

/*
fib(1) = 0
fib(2) = 1
fib(n) = fib(n - 1) + fib(n - 2) for n >= 3
*/

int main() {   
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 0;
    }

    int a = 0, b = 1, sum;

    // Print first Fibonacci number
    if (n >= 1) cout << a << " ";

    // Print second Fibonacci number
    if (n >= 2) cout << b << " ";

    // Compute and print the remaining Fibonacci numbers
    for (int i = 3; i <= n; i++) {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }

    cout << endl;
    return 0;
}
