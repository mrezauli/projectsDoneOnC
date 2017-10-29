#include <stdio.h>
int main()
{
    const double pi = 3.14159;
    double radius, volume;
    while ( scanf("%lf", &radius) == 1 ) {
        volume = ( 4 / 3.0 ) * pi * ( radius * radius * radius );
        printf("VOLUME = %.3lf\n", volume);
    }
    return 0;
}
