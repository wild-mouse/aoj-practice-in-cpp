#include <cstdio>

int main() {
    int h, w;
    for (;;) {
        scanf("%d %d", &h, &w);
        if (h == 0 && w == 0) {
            return 0;
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
}