#include <cstdio>

void printCurrent(int a[], int *n) {
    for (int i = 0; i < *n; i++) {
        printf("%d", a[i]);
        if (i != *n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return;
}

int selectionSort(int a[], int *n) {
    int c = 0;
    for (int i = 0; i < *n; i++) {
        int minj = i;
        for (int j = i + 1; j < *n; j++){
            if (a[minj] > a[j]) {
                minj = j;
            }
        }
        if (i != minj) {
            int tmp = a[i];
            a[i] = a[minj];
            a[minj] = tmp;
            c++;
        }
    }
    printCurrent(a, n);

    return c;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int c = selectionSort(a, &n);
    printf("%d\n", c);

    return 0;
}