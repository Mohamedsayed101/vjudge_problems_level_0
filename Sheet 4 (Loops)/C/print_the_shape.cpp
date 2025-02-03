#include <iostream>
#include <cmath>
#include <string>

using namespace std;
// "yES", "yes" and "Yes" will be
int main()
{
    int num_of_stars ;
    cout << "Enter Number of stars: ";
    cin >> num_of_stars;
    for (size_t i = 0; i < num_of_stars; i++)
    {
        for (size_t j = 0; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    
    return 0;
}
