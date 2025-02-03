#include <iostream>
#include <cmath>
#include <string>

using namespace std;
// "yES", "yes" and "Yes" will be
int main()
{
    string input;
    cout << "Enter NO of steps: " ;
    int steps ;
    cin >> steps;
    for (size_t i = 0; i < steps; i++)
    {
        cout << "Enter 'YES' to continue or 'NO' to stop: ";
        cin >> input;
        if(input == "yES"||input == "YES" || input == "yes")
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;    
    }
    

    return 0;
}
