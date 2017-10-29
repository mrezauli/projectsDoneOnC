#include <stdio.h>
int main()
{
    double positive_numbers[6];
    int f, counter = 0;
    while ( 1 ) {
        counter = 0;
        for ( f = 0; f < 6; f++ ) {
            scanf("%lf", &positive_numbers[f]);

            if ( positive_numbers[f] > 0 ) {
                counter++;
            }
        }
        printf("%d valores positivos\n", counter);
    }
    return 0;
}
