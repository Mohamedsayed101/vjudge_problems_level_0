#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,sum = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (size_t i = 1; i <= n; i++)
    {
        if(i%2 == 0)
            sum+=i;
        else
            sum-=i;    
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}

