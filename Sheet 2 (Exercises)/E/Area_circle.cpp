#include <iostream>
#include<iomanip>
using namespace std;
void Area_circle (double r){
    cout << fixed << setprecision(9);
    const double PI = 3.141592653;
    double area = PI * r * r;
    cout << "The area of the circle is: " << area << endl;
} 
int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Area_circle(radius);
    return 0;
}

