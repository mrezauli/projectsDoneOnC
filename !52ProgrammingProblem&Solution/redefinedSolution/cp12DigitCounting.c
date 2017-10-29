#include <stdio.h>
int main()
{
    int n, number;
    scanf("%d", &n);
    while( n-- ) {
        scanf("%d", &number);
        if ( number >= 0 && number <= 9 ) {
            printf("%d\n", 1);
        }
        else if ( number >= 10 && number <= 99 ) {
            printf("%d\n", 2);
        }
        else if ( number >= 100 && number <= 999 ) {
            printf("%d\n", 3);
        }
        else if ( number >= 1000 && number <= 9999 ) {
            printf("%d\n", 4);
        }
        else if ( number >= 10000 && number <= 99999 ) {
            printf("%d\n", 5);
        }
        else if ( number >= 100000 && number <= 999999 ) {
            printf("%d\n", 6);
        }
        else if ( number >= 1000000 && number <= 9999999 ) {
            printf("%d\n", 7);
        }
        else if ( number >= 10000000 && number <= 10000001 ) {
            printf("%d\n", 8);
        }
    }
    return 0;
}
