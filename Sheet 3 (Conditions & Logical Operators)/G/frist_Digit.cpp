#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
    int num ;
    cout << "Enter a integer number from 1000 to 9999: ";
    cin >> num;
    int r=num/1000;
    cout<<(r%2==0?"EVEN":"ODD")<<endl;   
    return 0;
}