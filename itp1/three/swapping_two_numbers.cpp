#include <cstdio>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    for(;;) {
        if (x == 0 && y == 0) {
            return 0;
        }
        if (x > y) {
            printf("%d %d\n", y, x);
        } else {
            printf("%d %d\n", x, y);
        }
        scanf("%d %d", &x, &y);
    }
}