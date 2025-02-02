#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
    char L;
    cout << "Enter the Litter: ";
    cin >> L;
    if (L>=48&&L<=57) 
        cout<<"IS DIGIT\n";
    else if (L>=65&&L<=90){ 
        cout<<"IS ALPHA\n";
        cout<<"IS CAPITAL"<<endl;
    }
    else if (L>=97&&L<=122){
        cout<<"IS ALPHA\n";
        cout<<"IS SMALL"<<endl;
    }    
    
    return 0;
}