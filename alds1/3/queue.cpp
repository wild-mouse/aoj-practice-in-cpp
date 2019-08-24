#include <iostream>
#include <vector>

using namespace std;

typedef pair<string, int> P;
typedef vector<P> V;

class Queue {
public:
    void enqueue(P p) {
        v[tail] = p;
        if (tail + 1 == v.size()) {
            tail = 0;
        } else {
            tail++;
        }
    }

    P dequeue() {
        P p = v[head];
        if (head + 1 == v.size()) {
            head = 0;
        } else {
            head++;
        }
        return p;
    }

    bool is_empty() {
        return head == tail;
    }

private:
    V v = V(100000);
    int head = 0;
    int tail = 0;
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, q;
    cin >> n >> q;
    Queue qu = Queue();
    for (int i = 0; i < n; i++) {
        string name;
        int time;
        cin >> name >> time;
        qu.enqueue(P(name, time));
    }
    int time = 0;
    while (!qu.is_empty()) {
        P c = qu.dequeue();
        if (c.second <= q) {
            time += c.second;
            cout << c.first << " " << time << "\n";
        } else {
            c.second -= q;
            time += q;
            qu.enqueue(c);
        }
    }
}