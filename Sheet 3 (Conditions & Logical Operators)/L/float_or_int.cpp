#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
    float x ;
    int temp;
    cout << "Enter a number: ";
    cin >> x;
    temp = x;
    float diff = x - temp;
    if (!diff)
    cout << "int "<<temp<< endl;
    else
        cout << "float "<<temp<<" "<< diff<< endl; 
    return 0;
}