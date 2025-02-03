#include <iostream>

using namespace std;
/*
1 =>49
.
.
.
9 =>57
a => 97
.
.
.
z => 122

arr[i]=number+96
*/
int main() {
    cout<<"Enter 26 numbers: ";
    char arr[26];
    int number,r;
    for (int i =0; i <26; i++) {
        cin>>number;
        if (number >= 1 && number <= 26)
            arr[i] = char(number + 96); 
        else {
            cout << "Invalid input. Please enter numbers between 1 and 26." << endl;
            return 1;  
        }      
    }
    cout << "\nLowercase Alphabets: " << endl;
    for (size_t i = 0; i < 26; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

