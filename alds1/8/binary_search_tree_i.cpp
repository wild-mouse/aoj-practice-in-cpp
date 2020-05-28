#include <iostream>
#include <string>

struct Node {
    int key = -1;
    Node *parent, *left, *right;
};

using namespace std;

void printPreOrder()

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string o;
        cin >> o;
        if (o == "insert") {
            int k;
            cin >> k;
        }
        if (o == "print") {
            printPreOrder();
            printInOrder();
        }
    }

    return 0;
}