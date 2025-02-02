#include <iostream>
using namespace std;

int main() {
    int balance;
    cout << "Enter your total balance: ";
    cin >> balance;
    int bills;// 100 20 10 5 1
    bills = balance / 100;
    balance %= 100;
    bills+=balance/20;
    balance %= 20;
    bills+=balance/10;
    balance %= 10;
    bills+=balance/5;
    balance %= 5;
    bills+=balance;
    balance %= 1;
    cout << "Number of bills: " << bills << endl;
    return 0;
}