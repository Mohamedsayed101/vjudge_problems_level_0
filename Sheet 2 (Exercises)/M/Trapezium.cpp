#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c,d;
    cout << "Enter a,b,c,d" << endl;
    cin >> a >> b >> c >> d;
    float area = a*b-(0.5*(a-c)*(b-d));
    cout << fixed << setprecision(6);
    cout << "Area of trapezium: " << area << endl;
    return 0;
} 