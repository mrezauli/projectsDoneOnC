#include <stdio.h>

int main()
{
    int a, b, c, d, differ;
    while ( scanf("%d %d %d %d", &a, &b, &c, &d) == 4 ) {
        differ = ( a * b ) - ( c * d );
        printf("DIFERENCA = %d\n", differ);
    }
    return 0;
}
