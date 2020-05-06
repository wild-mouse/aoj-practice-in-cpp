#include <iostream>

using namespace std;

int MAX = 100000;

struct Node { int parent = -1, left = -1 , right = -1; } ;

void printNodeInfo(int i, Node T[]);

int getDepth(int i, Node T[]);

string getType(Node n);

string getChildrenList(int id, Node T[]);

int main() {
    int n;
    cin >> n;

    Node T[n];
    for (int i = 0; i < n; i++) {
        int id, p;
        cin >> id >> p;
        int current, previous = -1;
        for (int j = 0; j < p; j++) {
            cin >> current;
            T[current].parent = id;
            if (previous == -1) {
                T[id].left = current;
            }
            if (previous != -1) {
                T[previous].right = current;
            }
            previous = current;
        }
    }

    for (int i = 0; i < n; i++) {
        printNodeInfo(i, T);
    }

    return 0;
}

void printNodeInfo(int id, Node T[]) {
    cout << "node " << id
         << ": parent = " << T[id].parent
         << ", depth = " << getDepth(id, T)
         << ", " << getType(T[id])
         << ", " << getChildrenList(id, T)
         << endl;
}

int getDepth(int t, Node T[]) {
    int d = 0;
    Node c = T[t];
    while (c.parent != -1) {
        c = T[c.parent];
        d++;
    }
    return d;
}

string getType(Node n) {
    if (n.parent == -1) {
        return "root";
    }
    if (n.left == -1) {
        return "leaf";
    }
    return "internal node";
}

string getChildrenList(int id, Node T[]) {
    Node p = T[id];
    if (p.left == -1) {
        return "[]";
    }
    string s = "[";
    s += to_string(p.left);
    Node c = T[p.left];
    while (c.right != -1) {
        s += ", " + to_string(c.right);
        c = T[c.right];
    }
    s += "]";
    return s;
}