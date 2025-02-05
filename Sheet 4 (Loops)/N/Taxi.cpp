#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main() {
    int no_of_groups,min_taxis=0,ones=0,twos=0,threes=0,passenger=0;
    cout << "Enter the number of groups: ";
    cin >> no_of_groups;
    for (size_t i = 0; i < no_of_groups; i++)
    {
        cout << "Enter the number of passengers in group " << i+1 << ": ";
        cin >> passenger;

        if(passenger == 4)
            min_taxis++;// 4 the maximum number for passengers
        else if(passenger == 3)
            threes++;
        else if(passenger == 2)
            twos++;
        else if(passenger == 1)
            ones++;
    }
        int min_threes_ones;
        min_threes_ones = min(threes, ones);// matches the number of ones with number of threes 
        min_taxis+=min_threes_ones;
        threes-=min_threes_ones;
        ones-=min_threes_ones;
        min_taxis+=twos/2;
        twos%=2;
        if (twos > 0) {
        min_taxis++;
        ones = max(0, ones - 2);
        }
        min_taxis+=threes;
        min_taxis+=(ones+3)/4;

        cout << "The minimum number of taxis required is: " << min_taxis << endl;
    
    return 0;
}