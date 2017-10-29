#include <stdio.h>
int main()
{
    int a, b;
    while ( scanf("%d %d", &a, &b ) == 2 ) {
        if ( a % b == 0 || b % a == 0 ) {
            printf("Sao Multiplos\n");
        }
        else {
            printf("Nao Sao Multiplos\n");
        }
    }
    return 0;
}
