#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
    int age;
    cout << "Enetr your age in Days: "<<endl;
    cin >> age;
    int months = age % 365;
    int years = age / 365;
    int days = months % 30;
    months /= 30;
    cout << "Your age in-- \nYears: " << years << "\nMonths: " << months << "\nDays: " << days<<"\n";

    return 0;
}