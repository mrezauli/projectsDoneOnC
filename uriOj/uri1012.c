#include <stdio.h>
int main()
{
    const double pi = 3.14159;
    double a, b, c, tri, cir, tra, squ, rec;
    while ( scanf("%lf %lf %lf", &a, &b, &c ) == 3 ) {
        tri = ( 1 / 2.0 ) * a * c;
        cir = pi * c * c;
        tra = ( 1 / 2.0 ) * ( a + b ) * c;
        squ = b * b;
        rec = a * b;
        printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", tri, cir, tra, squ, rec);
    }
    return 0;
}
