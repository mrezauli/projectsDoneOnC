#include <stdio.h>
int main()
{
    int f;
    for ( f = 1; f <= 100; f++ ) {
        if ( f % 2 == 0 ) {
            printf("%d\n", f);
        }
    }
    return 0;
}
