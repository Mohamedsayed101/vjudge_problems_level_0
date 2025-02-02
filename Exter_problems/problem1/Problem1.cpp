#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int i = 0; // Position to place even numbers

    // Rearrange array in-place
    for (int j = 0; j < size; j++) {
        if (arr[j] % 2 == 0) { // If even
            swap(arr[i], arr[j]); // Move even number to the front
            i++; // Move even pointer
        }
    }

    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}
