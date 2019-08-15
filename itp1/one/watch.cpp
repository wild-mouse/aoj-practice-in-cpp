#include <iostream>
#include <stdio.h>
using namespace std;

int main() { 
    int s;
    cin >> s;
    int h = s / (60 * 60);
    int r1 = s - (h * 60 * 60);
    int m = r1 / 60;
    int rs = r1 % 60;
    printf("%d:%d:%d\n", h, m, rs);
    // cout << h << ":" << m << ":" << rs << endl;
    return 0;
}