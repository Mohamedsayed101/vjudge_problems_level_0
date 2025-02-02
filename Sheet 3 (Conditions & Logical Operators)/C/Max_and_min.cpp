#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
    float A,B,C,max,min;
    cout<<"Enter three numbers: ";
    cin>>A>>B>>C;
    if(A>B){
        max=A;
        min=B;
    }
    else{
        max=B;
        min=A;
    }
    if(C>max) max=C;
    else if(C<min) min=C;
    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min<<endl;
    return 0;
}