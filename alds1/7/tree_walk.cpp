#include <iostream>

using namespace std;

struct Node {
    int parent = -1, left = -1, right = -1;
};

void printPreOrderWalk(int i, Node T[]) {
    Node c = T[i];
    cout << " "<< i;
    if (c.left != -1) {
        printPreOrderWalk(c.left, T);
    }
    if (c.right != -1) {
        printPreOrderWalk(c.right, T);
    }
}

void printInOrderWalk(int i, Node T[]) {
    Node c = T[i];
    if (c.left != -1) {
        printInOrderWalk(c.left, T);
    }
    cout << " "<< i;
    if (c.right != -1) {
        printInOrderWalk(c.right, T);
    }
}

void printPostOrderWalk(int i, Node T[]) {
    Node c = T[i];
    if (c.left != -1) {
        printPostOrderWalk(c.left, T);
    }
    if (c.right != -1) {
        printPostOrderWalk(c.right, T);
    }
    cout << " "<< i;
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
    int p = -1;
    for (int i = 0; i < n; i++) {
        Node n = T[i];
        if (n.parent == -1) {
            p = i;
        }
    }

    cout << "Preorder" << endl;
    printPreOrderWalk(p, T);
    cout << endl;
    cout << "Inorder" << endl;
    printInOrderWalk(p, T);
    cout << endl;
    cout << "Postorder" << endl;
    printPostOrderWalk(p, T);
    cout << endl;

    return 0;
}