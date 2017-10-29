#include <stdio.h>
int main()
{
    int n, i, marks[5], large, small;
    scanf("%d", &n);
    while ( n-- ) {
        for ( i = 0; i < 5; i++ ) {
            scanf("%d", &marks[i]);
        }
        large = marks[0];
        small = marks[0];
        for ( i = 0; i < 5; i++ ) {
            if ( large < marks[i] ) {
                large = marks[i];
            }
            else if ( small > marks[i] ) {
                small = marks[i];
            }
        }
        printf("%d %d\n", large, small);
    }
    return 0;

}
