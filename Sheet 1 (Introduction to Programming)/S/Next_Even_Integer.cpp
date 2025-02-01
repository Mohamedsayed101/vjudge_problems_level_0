#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    // Next even number without conditions
    int next_even = num + (2 - (num % 2));
    cout << "The next even number is: " << next_even << endl;
    cout << "The absolute difference between the next even number and the given number is: " << abs(next_even - num) << endl;
    return 0;
}
