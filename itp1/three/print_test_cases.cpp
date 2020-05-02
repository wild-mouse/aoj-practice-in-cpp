#include <cstdio>

int main() {
    int x;
    scanf("%d", &x);
    for (int i = 1;;i++) {
        if (x == 0) {
            return 0;
        }
        printf("Case %d: %d\n", i, x);
        scanf("%d", &x);
    }
}