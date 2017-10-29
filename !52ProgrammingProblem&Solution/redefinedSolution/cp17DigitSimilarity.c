#include <stdio.h>
int main()
{
    int line, i, j, tmp=0;
    int digitOne, digitTwo;
    int digitArray[4], min;
    scanf("%d", &line);
    while( line-- ) {
        scanf("%d %d", &digitOne, &digitTwo);
        digitArray[0] = digitOne % 10;
        digitArray[1] = digitOne / 10;
        digitArray[2] = digitTwo % 10;
        digitArray[3] = digitTwo / 10;

        for ( i = 0; i < 4; i++ )
        {
            printf("%d\n", digitArray[i]);
        }
        for ( j = 0; j < 3; j++ ) {
            min = digitArray[j];
            for ( i = 1; i < 4; i++ ) {
                if ( min > digitArray[i] ) {
                    tmp = min;
                    min = digitArray[i];
                    digitArray[i] = tmp;

                }
            }
        }
        for ( i = 0; i < 4; i++ )
        {
            printf("%d\n", digitArray[i]);

        }
    }
    return 0;
}
