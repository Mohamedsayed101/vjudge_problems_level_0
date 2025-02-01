#include <iostream>
using namespace std;

int main() {
    int H, W, h, w;
    cin >> H >> W ;
    cin >> h >> w;

    int remainingCells = (H * W) - (h * W) -((H-h)*w);
    cout << remainingCells << endl;

    return 0;
}


