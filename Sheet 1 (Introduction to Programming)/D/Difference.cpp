#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{   
    double A, B, C, D, Diff;
    
    cout << "Enter the values of A, B, C, and D: ";
    cin >> A >> B >> C >> D;
    Diff=(A*B)-(C * D);
    cout<<"Difference = "<<Diff<<endl;
    return 0;
}
