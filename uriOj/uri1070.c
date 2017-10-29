#include <stdio.h>
int main()
{
    int x, f, counter;
    while ( scanf("%d", &x) == 1 ) {
        for ( f = x, counter = 1; counter <= 6; f++ ) {
            if ( f % 2 == 0 ) {
                continue;
            }
            else {
                printf("%d\n", f);
                counter++;
            }
        }
    }
    return 0;
}

