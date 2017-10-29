#include <stdio.h>
int main()
{
    int n, a, b, c, d, e, avrg;
    scanf("%d", &n);

    while ( n-- ) {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        avrg = ( a + b + c + d + e ) / 5;
        printf("%d\n", avrg);
    }
    return 0;
}
