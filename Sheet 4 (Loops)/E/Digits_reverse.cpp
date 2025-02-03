#include <iostream>

using namespace std;

int main() {
    int N,T;
    cout<<"Enter no of test cases: ";
    cin>>T;
    
    for(int i=0; i<T; i++) {
        cout<<"Enter number : ";
        cin>>N;
        do
        {
            cout<<(N%10)<<" ";
            N=N/10;
        } while (N);
        cout<<"\n";
    }
    return 0;
}
