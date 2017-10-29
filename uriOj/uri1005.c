#include <stdio.h>

int main() {
    double a, b, x, y, media;
    x = 3.5;
    y = 7.5;
    while ( scanf("%lf %lf", &a, &b) == 2 ) {
        media = ( ( a * x ) + ( b * y ) ) / ( x + y );
        printf("MEDIA = %.5lf\n", media);
    }
    return 0;
}
