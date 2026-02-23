#include <iostream>
#include <cmath>
using namespace std;

pair<int, int> findCell(int k) {
    int root = ceil(sqrt(k));
    int row, col;

    int curr = (root - 1) * (root - 1) + 1;
    int side = root - 1;

    if (k >= curr && k <= curr + side) {
        row = k - curr + 1;
        col = root;
    } else {
        row = root;
        col = curr + 2 * side - k + 1;
    }

    return make_pair(row, col);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;
        pair<int, int> cell = findCell(k);
        cout << cell.first << " " << cell.second << endl;
    }

    return 0;
}
