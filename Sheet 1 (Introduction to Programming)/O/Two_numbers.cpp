#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    double A, B;
    cout<<"Enter two numbers: ";
    cin>>A>>B;
    cout<<"floor "<<A<<" / "<<B<<" = Floor "<<floor(A/B)<<endl;
    cout<<"ceil "<<A<<" / "<<B<<" = Ceil "<<ceil(A/B)<<endl;
    cout<<"round "<<A<<" / "<<B<<" = Round "<<round(A/B)<<endl;

    return 0;
}
