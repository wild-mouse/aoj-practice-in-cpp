#include <cstdio>
#include <math.h>

int main() {
    double r;
    scanf("%lf", &r);
    double a = r * r * M_PI;
    double c = 2 * M_PI * r;

    printf("%f %f\n", a, c);

    return 0;
}