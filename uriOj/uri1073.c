#include <stdio.h>
int main()
{
    int f, n;
    while ( scanf("%d", &n) == 1 ) {
        for ( f = 1; f <= n; f++ ) {
            if ( f % 2 == 0 ) {
                printf("%d^2 = %d\n", f, f * f );
            }
        }
    }
    return 0;
}
