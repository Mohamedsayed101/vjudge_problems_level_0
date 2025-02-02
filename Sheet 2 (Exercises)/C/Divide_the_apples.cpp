#include <iostream>
using namespace std;

int main() {
    int n,k;
    cout << "Enter the number of childern: ";
    cin >> n;
    cout << "Enter the number of apples: ";
    cin >> k;
    cout<<"the number of apples remains in the basket = "<<k%n<<endl;

    return 0;
}
