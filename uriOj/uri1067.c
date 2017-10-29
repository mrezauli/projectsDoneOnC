#include <stdio.h>
int main()
{
    int x, f;
    while ( scanf("%d", &x) == 1 ) {
        for ( f = 0; f <= x; f++ ) {
            if ( f % 2 == 0 ) {
                continue;
            }
            else {
                printf("%d\n", f);
            }
        }
    }
    return 0;
}
