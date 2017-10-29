#include <stdio.h>

int main()
{
    int a, b, c, d;
    while ( scanf("%d %d %d %d", &a, &b, &c, &d) == 4 ) {
        if ( a % 2 == 0 ) {
            if ( c > 0 && d > 0 ) {
                if ( ( c + d ) > ( a + b ) ) {
                        if ( b > c && d > a ) {
                            printf("Valores aceitos\n");
                        }
                }
            }
        }
        else {
            printf("Valores nao aceitos\n");
        }
    }
    return 0;
}

