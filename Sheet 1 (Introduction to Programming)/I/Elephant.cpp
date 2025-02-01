#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{   
    cout<<"\nEnter position for it friend: ";
    int position;
    cin>>position;
    int steps=(position+4)/5;
    cout<<"The minimum of steps to get for location of it friend = "<<steps<<endl;
    return 0;
} 
