#include <stdio.h>
int main()
{
    double positive_numbers[6], summ = 0.0, average;
    int f, counter = 0;
    while ( 1 ) {
        counter = 0;
        summ = 0.0;
        for ( f = 0; f < 6; f++ ) {
            scanf("%lf", &positive_numbers[f]);
            if ( positive_numbers[f] > 0 ) {
                counter++;
                summ += positive_numbers[f];
            }
        }
        average = summ / counter;
        printf("%d valores positivos\n%.1lf\n", counter, average);
    }
    return 0;
}

