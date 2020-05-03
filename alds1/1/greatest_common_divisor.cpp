#include <cstdio>

using namespace std;

int getGCD(int *x, int *y) {
    int a = *x < *y ? *y : *x;
    int b = *x < *y ? *x : *y;
    for (;;) {
        if (b == 0) {
            return a;
        }
        int c = a %b;
        a = b;
        b = c;
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", getGCD(&x, &y));

    return 0;
}