#include <iostream>
#include <cmath>
#include <string>

using namespace std;
void Area(int w, int h){
    int area = w*h;
    cout << "Area of rectangle is: " << area << endl;
    return;
}
void perimeter(int w, int h){
    int perimeter = 2*(w+h);
    cout << "Perimeter of rectangle = " << perimeter << endl;
    return;
}
int main()
{
    int width, height;
    cout << "Enter width and height of rectangle = ";
    cin >> width >> height;
    Area(width, height);
    perimeter(width, height);
    
    return 0;
}

