#include <stdio.h>
int main()
{
    int x, y, sum, f;
    while ( scanf("%d %d", &x, &y) == 2 ) {
        sum = 0;
        for ( f = y + 1; f < x; f++ ) {
            if ( f % 2 == 0 ) {
                continue;
            }
            else {
                sum += f;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
