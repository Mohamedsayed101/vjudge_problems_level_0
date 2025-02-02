#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
    char L;
    cout<<"Enter a character: ";
    cin>>L;
    if (L>=65&&L<=90)
        cout<<char(L+32)<<" \n";
    else if (L>=97&&L<=122)
        cout<<char(L-32)<<" \n";
    return 0;
}