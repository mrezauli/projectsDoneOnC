#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, sum = 0;
    char word[3];
    scanf("%d", &n);
    while( n-- ) {
        for ( i = 0; i < 3; i++ ) {
            scanf("%c", &word[i]);

        }
        for ( i = 0; i < 3; i++ ) {
            printf("%d\n", (int)word[i]);
        }
        //printf("%d\n", sum);
    }
    return 0;
}
