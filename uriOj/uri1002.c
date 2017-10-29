#include <stdio.h>

int main() {
    const double pi = 3.14159;
    double a, r;
    while ( scanf("%lf", &r) == 1 ) {
        a = pi * r * r;
        printf("A=%.4lf\n", a);
    }
    return 0;
}
