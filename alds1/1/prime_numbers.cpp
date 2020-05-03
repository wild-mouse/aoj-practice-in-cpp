#include <cstdio>
#include <math.h>

bool isPrime(int *a) {
    if (*a <= 2) {
        return true;
    }
    if (*a % 2 == 0) {
        return false;
    }
    int b = sqrt(*a);
    for (int i = 3; i <= b; i += 2) {
        if (*a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    int a;
    int c = 0;
    for (int i = 0;i < n; i++) {
        scanf("%d", &a);
        if (isPrime(&a)) {
            c++;
        }
    }
    printf("%d\n", c);

    return 0;
}