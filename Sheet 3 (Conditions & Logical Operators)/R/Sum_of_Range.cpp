#include <iostream>

using namespace std;

// Sum of first N natural numbers
long long Sum_All(long long N) {
    return (N * (N + 1)) / 2;
}

// Sum of numbers in range [A, B]
long long Sum_Range(long long A, long long B) {
    return Sum_All(B) - Sum_All(A - 1);
}

// Sum of first N even numbers
long long Sum_all_even(long long N) {
    long long count = N / 2;  // Number of even numbers up to N
    return count * (count + 1);
}

// Sum of even numbers in range [A, B]
long long Sum_even_range(long long A, long long B) {
    return Sum_all_even(B) - Sum_all_even(A - 1);
}

// Sum of first N odd numbers
long long Sum_all_odd(long long N) {
    long long count = (N + 1) / 2;  // Number of odd numbers up to N
    return count * count;
}

// Sum of odd numbers in range [A, B]
long long Sum_odd_range(long long A, long long B) {
    return Sum_all_odd(B) - Sum_all_odd(A - 1);
}

int main() {
    long long A, B;
    cout << "Enter two numbers: ";
    cin >> A >> B;

    // Ensure A is the smaller value
    if (A > B) {
        swap(A, B);
    }

    cout << "Sum of all numbers between " << A << " and " << B << " is: " << Sum_Range(A, B) << endl;
    cout << "Sum of even numbers between " << A << " and " << B << " is: " << Sum_even_range(A, B) << endl;
    cout << "Sum of odd numbers between " << A << " and " << B << " is: " << Sum_odd_range(A, B) << endl;

    return 0;
}
