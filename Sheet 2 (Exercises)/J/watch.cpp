#include <iostream>
using namespace std;

int main() {
    int h,m,s;
    cout<<"Enter total seconds: ";
    cin>>s;
    m=s%3600;
    h=s/3600;
    s=m%60;
    m/=60;
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}