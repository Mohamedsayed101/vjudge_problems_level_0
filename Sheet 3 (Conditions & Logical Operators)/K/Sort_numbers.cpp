#include <iostream>
#include <cmath>
#include <string>
//[0,25], (25,50], (50,75], (75,100]
using namespace std;
int main()
{
    float A,B,C;
    cout<<"Enter three numbers: ";
    cin>>A>>B>>C;
    if(A>=B){
        if(A>C){
            if(B>=C)
                cout<<C<<"\n "<<B<<" \n"<<A<<endl;
            else  
                cout<<B<<"\n "<<C<<" \n"<<A<<endl;  
        }
        else {
            if(B>=A)
                cout<<A<<" \n"<<B<<" \n"<<C<<endl;
            else
                cout<<B<<"\n "<<A<<"\n "<<C<<endl;
        }
    
    }
    else{
        if(B>C){
            if(A>=C)
                cout<<C<<"\n "<<A<<" \n"<<B<<endl;
            else
                cout<<A<<"\n "<<C<<" \n"<<B<<endl;
        }
        else {
            if(A>=B)
                cout<<B<<"\n "<<A<<" \n"<<C<<endl;
            else
                cout<<A<<"\n "<<B<<" \n"<<C<<endl;
        }
    }
    /*
    if (A > B) swap(A, B);
    if (A > C) swap(A, C);
    if (B > C) swap(B, C);
    */
    cout<<endl<<A<<endl<<B<<endl<<C<<endl;
    return 0;
}