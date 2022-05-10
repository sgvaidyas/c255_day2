#include<iostream>
using namespace std;
int main() {
    
    int n = 0;
    cout << "Please provide n: ";
    cin >> n;

    int num = 0;
    bool odd = (n % 2) == 1;
    int midpoint = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        if (i <= midpoint) {
            num = num * 10 + i;
            cout << num << endl;
        } else {
            if (i == midpoint + 1 && !odd) {
                cout << num << endl;
                continue;
            }
            num = num / 10;
            cout << num << endl;
        }
    }
    return 0;
}

