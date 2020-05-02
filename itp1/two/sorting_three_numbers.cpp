#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int abc[3] = {a, b, c};
    sort(abc, abc + 3);
    printf("%d %d %d\n", abc[0], abc[1], abc[2]);

    return 0;
}