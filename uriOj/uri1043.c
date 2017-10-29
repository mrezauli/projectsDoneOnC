#include <stdio.h>
int main()
{
    double a, b, c, area, perimeter;
    while ( scanf("%lf %lf %lf", &a, &b, &c) == 3 ) {
        if ( ( a + b ) <= c || ( a + c ) <= b || ( b + c ) <= a ) {
            area = ( ( a + b ) * c ) / 2;
            printf("Area = %.1lf\n", area);

        }
        else {
            perimeter = a + b + c;
            printf("Perimetro = %.1lf\n", perimeter);
        }
    }
    return 0;
}
