#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    long max = -1000001;
    long min = 1000001;
    long sum = 0;
    for (int i = 0; i < n; i++) {
        long ai;
        scanf("%ld", &ai);
        if (max < ai) {
            max = ai;
        }
        if (min > ai) {
            min = ai;
        }
        sum += ai;
    }
    printf("%ld %ld %ld\n", min, max, sum);

    return 0;
}