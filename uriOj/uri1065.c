#include <stdio.h>
int main()
{
    int even_numbers[5];
    int f, counter = 0;
    while ( 1 ) {
        counter = 0;
        for ( f = 0; f < 5; f++ ) {
            scanf("%d", &even_numbers[f]);

            if ( even_numbers[f] % 2 == 0 ) {
                counter++;
            }
        }
        printf("%d valores positivos\n", counter);
    }
    return 0;
}

