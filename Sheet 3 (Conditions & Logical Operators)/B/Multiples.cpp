#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
    int A,B;
    cout<<"Enter the numbers: ";
    cin>>A>>B;
    cout<<((A%B==0 || B%A==0)? "Multiples" : "No Multiples")<<endl;
    return 0;
}