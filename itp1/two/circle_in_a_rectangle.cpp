#include <cstdio>

int main() {
    int w, h, x, y, r;
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
    if (w - x < r || h - y < r || x < r || y  < r) {
        printf("No\n");
    } else {
        printf("Yes\n");
    }

    return 0;
}