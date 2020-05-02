#include <cstdio>

int main() {
    int a, b;
    char o;
    scanf("%d %c %d", &a, &o, &b);
    for (;;) {
        if (o == '?') {
            return 0;
        }
        int r;
        if (o == '+') {
            r = a + b;
        }
        if (o == '-') {
            r = a - b;
        }
        if (o == '*') {
            r = a * b;
        }
        if (o == '/') {
            r = a / b;
        }
        printf("%d\n", r);
        scanf("%d %c %d", &a, &o, &b);
    }
}