#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
    float X,Y;
    cout << "Enter X and Y coordinates " ;
    cin >> X >> Y;
    if(X > 0 &&Y > 0) cout << "Q1"<<"\n";
    else if(X < 0 && Y > 0) cout << "Q2"<<"\n";
    else if(X < 0 && Y < 0) cout << "Q3"<<"\n";
    else if(X > 0 && Y < 0) cout << "Q4"<<"\n";
    return 0;
}