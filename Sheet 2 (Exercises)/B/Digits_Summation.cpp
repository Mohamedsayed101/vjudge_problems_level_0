#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout<<"\nThe summation of their last digits = "<<(num1%10)+(num2%10)<<endl;
    return 0;
}
