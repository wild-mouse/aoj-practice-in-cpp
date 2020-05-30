#include <iostream>
#include <utility>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    pair<string, int> p[100010];
    int h = 0, t = 0, tt = 0;

    while (n--) {
        string k;
        int ttt;
        cin >> k >> ttt;
        pair<string, int> pp = make_pair(k, ttt);
        p[t++] = pp;
    }

    while (h != t) {
        pair<string, int> pp = p[h++];
        if (pp.second <= q) {
            tt += pp.second;
            cout << pp.first << " " << tt << endl;
        } else {
            int ttt = pp.second - q;
            pp.second = ttt;
            tt += q;
            p[t++] = pp;
        }
        if (h == 100010) {
            h = 0;
        }
        if (t == 100010) {
            t = 0;
        }
    }

    return 0;
}