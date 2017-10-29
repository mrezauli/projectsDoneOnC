#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, maior, f;
    while ( scanf("%d %d %d", &a, &b, &c ) == 3 ) {
        for ( f = 0; f < 2; f++ ) {
            maior = ( a + b + abs( a - b ) ) / 2;
            a = maior;
            b = c;
        }
        printf("%d eh o maior\n", maior);
    }
    return 0;

}
