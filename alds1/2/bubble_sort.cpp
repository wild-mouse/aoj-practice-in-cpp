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

int bubbleSort(int a[], int *n) {
    int c = 0;
    for (int i = *n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                c++;
            }
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
    int c = bubbleSort(a, &n);
    printf("%d\n", c);

    return 0;
}