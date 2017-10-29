#include <stdio.h>

int main() {
    double a, b, c, x, y, z, media;
    x = 2;
    y = 3;
    z = 5;
    while ( scanf("%lf %lf %lf", &a, &b, &c) == 3 ) {
        media = ( ( a * x ) + ( b * y ) + ( c * z ) ) / ( x + y + z );
        printf("MEDIA = %.1lf\n", media);
    }
    return 0;
}

