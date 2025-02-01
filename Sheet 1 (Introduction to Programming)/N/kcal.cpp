#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    cout<<"Enter the number of milliliters in B drink: ";
    float A_energy, B_energy;
    cin>>A_energy>>B_energy;
    cout<<((A_energy*B_energy)/100)<<"\n";
    return 0;
}


