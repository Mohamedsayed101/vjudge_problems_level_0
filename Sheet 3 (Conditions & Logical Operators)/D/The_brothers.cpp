#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
    string F1,S1,F2,S2;
    cout<<"Enter your name for brother 1: ";
    cin>>F1>>S1;
    cout<<"Enter your name for brother 2: ";
    cin>>F2>>S2;
    cout<<(S1==S2?"ARE Brothers":"NOT")<<endl;
    return 0;
}