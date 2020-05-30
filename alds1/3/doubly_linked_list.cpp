#include <iostream>
#include <cstdio>

using namespace std;

struct Node {
    int key;
    Node *prev, *next;
};

Node *nil;

void insert(int k) {
    Node* first = nil->next;
    Node* no = (Node *)malloc(sizeof(Node));
    no->key = k;
    no->next = first;
    no->prev = nil;
    first->prev = no;
    nil->next = no;
}

void deleteNode(Node *no) {
    if (no == nil) {
        return;
    }
    no->next->prev = no->prev;
    no->prev->next = no->next;
    free(no);
}

void deleteKey(int k) {
    Node* no = nil->next;
    while (true) {
        if (no == nil) {
            break;
        }
        if (no->key == k) {
            deleteNode(no);
            return;
        }
        no = no->next;
    }
}

void deleteFirst() {
    deleteNode(nil->next);
}

void deleteLast() {
    deleteNode(nil->prev);
}

int main() {
    int n;
    scanf("%d", &n);
    nil = (Node *)malloc(sizeof(Node));
    nil->prev = nil;
    nil->next = nil;

    while(n--) {
        char tmp[15];
        scanf("%s", tmp);
        string o = tmp;
        int k;
        if (o == "insert") {
            scanf("%d", &k);
            insert(k);
        } else if (o == "delete") {
            scanf("%d", &k);
            deleteKey(k);
        } else if (o == "deleteFirst") {
            deleteFirst();
        } else if (o == "deleteLast") {
            deleteLast();
        }
    }

    Node* no = nil->next;
    bool first = true;
    while (true) {
        if (no == nil) {
            break;
        }
        if (!first) {
            printf(" ");
        }
        printf("%d", no->key);
        first = false;
        no = no->next;
    }
    printf("\n");

    return 0;
}