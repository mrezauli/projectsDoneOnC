#include <stdio.h>
int main()
{
    int numbers[5];
    int f, even_counter, odd_counter, positive_counter, negative_counter;
    while ( 1 ) {
        even_counter = 0;
        odd_counter = 0;
        positive_counter = 0;
        negative_counter = 0;
        for ( f = 0; f < 5; f++ ) {
            scanf("%d", &numbers[f]);
            if ( numbers[f] % 2 == 0 ) {
                even_counter++;
            }
            else {
                odd_counter++;
            }
            if ( numbers[f] > 0 ) {
                positive_counter++;
            }
            else if ( numbers[f] < 0 ) {
                negative_counter++;
            }
        }
        printf("%d valor(es) par(es)\n", even_counter);
        printf("%d valor(es) impar(es)\n", odd_counter);
        printf("%d valor(es) positivo(s)\n", positive_counter);
        printf("%d valor(es) negativo(s)\n", negative_counter);
    }
    return 0;
}


