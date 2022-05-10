#include <iostream>
using namespace std;
int main() {
    int n;
    int halfway_point;

    cout << " Please provide n: ";
    cin >> n;

    if (n % 2 == 0) {
        halfway_point = n / 2;
    } else {
        halfway_point = (n / 2) + 1;
    }


    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            if (col == 1 || col == n || row == col || (row + col == n + 1) || row == halfway_point) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

