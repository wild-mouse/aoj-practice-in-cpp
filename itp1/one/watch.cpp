#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int s;
    scanf("%d", &s);
    int h = s / 60 / 60;
    int s1 = s - h * 60 * 60;
    int m = s1 / 60;
    int sec = s1 % 60;
    printf("%d:%d:%d\n", h, m, sec);

    return 0;
}