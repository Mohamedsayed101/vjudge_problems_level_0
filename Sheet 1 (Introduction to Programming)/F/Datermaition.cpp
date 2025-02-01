#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{   
    int a,b,c,d,det;
    cout << "Enter a numbers: ";
    cin >> a>>b>>c>>d;
    det=(a*d)-(b*c);
    cout << "The determaition of matrix =  " << det << endl;
    return 0;
}