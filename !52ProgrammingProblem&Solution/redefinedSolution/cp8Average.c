#include <stdio.h>
int main()
{
    int n, i, marks[5], sum;
    scanf("%d", &n);
    while( n-- ) {
        sum = 0;
        for ( i = 0; i < 5; i++ ) {
            scanf("%d", &marks[i]);
            sum += marks[i];
        }
        printf("%d\n", sum / 5);
    }
    return 0;
}
