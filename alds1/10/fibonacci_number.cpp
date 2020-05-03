#include<cstdio>

const int maxn = 44 + 1;
int a[maxn];

int calcFibonacciNumber(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    if (a[n] != -1) {
        return a[n];
    }
    a[n] = calcFibonacciNumber(n - 1) + calcFibonacciNumber(n - 2);
    return a[n];
}

int getFibonacciNumber(int n) {
    return calcFibonacciNumber(n);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < maxn; i++) {
        a[i] = -1;
    }
    printf("%d\n", getFibonacciNumber(n));
    return 0;
}