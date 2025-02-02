#include <iostream>
using namespace std;

int main() {
    int n,b,s;
    cin >> n >> b >> s;
    int profit = n*(s-b);
    cout << "Profit: " << profit << endl;
    cout << "Profit percentage: " << (profit*100.0)/n << "%" << endl;
    return 0;
}
