#include <cstdio>

bool linearSearch(int n, int s[], int t) {
    for (int i = 0; i < n; i++) {
        if (s[i] == t) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, q;
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }
    scanf("%d", &q);
    int c = 0;
    for (int i = 0; i < q; i++) {
        int t;
        scanf("%d", &t);
        if (linearSearch(n, s, t)) {
            c++;
        }
    }
    printf("%d\n", c);

    return 0;
}