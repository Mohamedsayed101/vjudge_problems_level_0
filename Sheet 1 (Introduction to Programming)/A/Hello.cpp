#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name); // To handle spaces in the input
    cout << "Hello, " << name << endl;
    return 0;
}