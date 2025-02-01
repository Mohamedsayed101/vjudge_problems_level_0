#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{   
    int num;
    cout << "Enter a number: ";
    cin >> num;
    double cube=num*num*num;
    cout << "The cube of " << num << " is: " << cube << endl;
    return 0;
}
