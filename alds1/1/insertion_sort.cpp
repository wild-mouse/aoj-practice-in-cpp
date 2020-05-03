#include<cstdio>

void printCurrent(int *a, const int *n) {
    for (int i = 0; i < *n; i++) {
        printf("%d", a[i]);
        if (i != *n - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

void insertionSort(int *a, const int *n) {
    for (int i = 1; i < *n; i++) {
        int value = a[i];
        int j = i - 1;
        for (;; j--) {
            if (a[j] <= value) {
                break;
            }
            a[j + 1] = a[j];
        }
        a[j + 1] = value;
        printCurrent(a, n);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printCurrent(a, &n);
    insertionSort(a, &n);

    return 0;
}