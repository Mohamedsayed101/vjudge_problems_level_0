#include <iostream>
#include <cmath>
#include <string>

using namespace std;
// "yES", "yes" and "Yes" will be
int main()
{
    int a,b,c,t;
    cout<<"Enter the number of test cases: ";
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        cout << "Enter three numbers: "<< endl;
        cin >> a >> b >> c;
        if(a==(b+c)|| c==(a+b)||b==(a+c))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;    
    }
    return 0;
}
