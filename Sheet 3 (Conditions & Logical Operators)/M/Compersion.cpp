#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "Enter two numbers and operator: ";
    cin >> a>>op>> b;
    switch(op){
        case '<':
            cout<<(a<b?"Right":"Wrong")<<endl;
            break;
        case '>':
            cout<<(a>b?"Right":"Wrong")<<endl;
            break;
        case '=':
            cout<<(a==b?"Right":"Wrong")<<endl;
            break;
        default:
            cout<<"Invalid operator"<<endl;
    }
    return 0;
}