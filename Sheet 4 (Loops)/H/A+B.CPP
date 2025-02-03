#include <iostream>

using namespace std;

int main() {
    int T,a,b;
    char op;
    cout << "Enter no test cases: ";
    cin >> T;
    int *array = new int[T];
    for (size_t i = 0; i < T; i++)
    {
        cout << "Enter A+B: ";
        cin >> a>>b;
        array[i] = a+b;
    }
    for (size_t i = 0; i < T; i++)
        cout<<array[i]<<endl;
    return 0;
}

