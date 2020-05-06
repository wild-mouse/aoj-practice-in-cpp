#include <iostream>

using namespace std;

struct Node {
    int parent = -1, left = -1, right = -1;
};

int getSibling(int i, Node T[]) {
    Node t = T[i];
    if (t.parent == -1) {
        return -1;
    }
    Node p = T[t.parent];
    if (p.left == i) {
        return p.right;
    } else {
        return p.left;
    }
}

int getDegree(int i, Node T[]) {
    Node t = T[i];
    int d = 0;
    if (t.left != -1) {
        d++;
    }
    if (t.right != -1) {
        d++;
    }
    return d;
}

int getDepth(int i, Node T[]) {
    Node n = T[i];
    int d = 0;
    while (n.parent != -1) {
        d++;
        n = T[n.parent];
    }
    return d;
}

int getHeight(int h, int i, Node T[]) {
    Node c = T[i];
    int l = h, r = h;
    if (c.left != -1) {
        l = getHeight(h + 1, c.left, T);
    }
    if (c.right != -1) {
        r = getHeight(h + 1, c.right, T);
    }
    return max(l, r);
}

string getType(int i, Node T[]) {
    Node t = T[i];
    if (t.parent == -1) {
        return "root";
    }
    if (t.left == -1 && t.right == -1) {
        return "leaf";
    }
    return "internal node";
}

void printNodeInfo(int i, Node T[]) {
    Node c = T[i];
    cout << "node " << i << ": "
    << "parent = " << c.parent << ", "
    << "sibling = " << getSibling(i, T) << ", "
    << "degree = " << getDegree(i, T) << ", "
    << "depth = " << getDepth(i, T) << ", "
    << "height = " << getHeight(0, i, T) << ", "
    << getType(i, T) << endl;
}

int main() {
    int n;
    cin >> n;
    Node T[n];
    for (int i = 0; i < n; i++) {
        int id, l, r;
        cin >> id >> l >> r;
        T[id].left = l;
        T[id].right = r;
        T[l].parent = id;
        T[r].parent = id;
    }

    for (int i = 0; i < n; i++) {
        printNodeInfo(i, T);
    }

    return 0;
}