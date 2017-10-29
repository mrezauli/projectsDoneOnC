#include <stdio.h>
int main()
{
    int n, i, maxi, mini;
    int digit[5];
    scanf("%d", &n);
    while ( n-- ) {
        for ( i = 0; i < 5; i++ ) {
            scanf("%d", &digit[i]);
        }
        maxi = digit[0];
        mini = digit[0];
        for ( i = 0; i < 5; i++ ) {
            if ( maxi < digit[i] ) {
                maxi = digit[i];
            }
            if ( mini > digit[i] ) {
                mini = digit[i];
            }
        }
        printf("%d %d\n", maxi, mini);
    }
    return 0;
}
