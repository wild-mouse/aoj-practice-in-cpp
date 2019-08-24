#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> V;

int main() {
    int n;
    cin >> n;
    V v = V(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int q;
    cin >> q;
    int c = 0;
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        for (int j : v) {
            if (t == j) {
                c++;
                break;
            }
        }
    }
    cout << c << "\n";
}