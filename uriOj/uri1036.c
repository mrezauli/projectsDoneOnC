#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, r1, r2;
    while ( scanf("%lf %lf %lf", &a, &b, &c) == 3 ) {
        if ( a == 0 || ( ( b * b ) - ( 4 * a *c ) )  < 0 ) {
            printf("Impossivel calcular\n");
        }
        else {
            r1 = ( - ( b ) + sqrt( ( b * b ) - ( 4 * a *c ) ) ) / ( 2 * a );
            r2 = ( - ( b ) - sqrt( ( b * b ) - ( 4 * a *c ) ) ) / ( 2 * a );
            printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
        }

    }
    return 0;
}