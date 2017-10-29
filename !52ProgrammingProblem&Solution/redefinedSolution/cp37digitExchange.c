#include <stdio.h>
#include <string.h>
int main()
{
    int tc, i, length, j;
    char number[8];
    scanf("%d", &tc);
    while ( tc-- ) {
        gets(number);
        length = strlen(number);
        for ( i = 0; i < length; i++ ) {
            if ( number[i] == 0 ) {
                number[i] += 1;
            }
            else if ( number[i] % 2 == 0 ) {
                number[i] += 1;
            }
            else {
                number[i] -= 1;
            }
        }
        printf("%s\n", number);
    }
    return 0;
}
