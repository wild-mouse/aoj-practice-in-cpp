#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int min = 2000000000;
    int p = -min;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if (k - min > p) {
            p = k - min;
        }
        if (k < min) {
            min = k;
        }
    }

    cout << p << endl;
    return 0;
}