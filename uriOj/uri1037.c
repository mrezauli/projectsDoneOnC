#include <stdio.h>
int main()
{
    double a;
    while ( scanf("%lf", &a) == 1 ) {
        if ( a < 0.00000 || a > 100.00000 ) {
            printf("Fora de intervalo\n");
        }
        else if ( a >= 0.00000 && a <= 25.00000 ) {
            printf("Intervalo [0,25]\n");
        }
        else if ( a >= 25.00001 && a <= 50.00000 ) {
            printf("Intervalo (25,50]\n");
        }
        else if ( a >= 50.00001 && a <= 75.00000 ) {
            printf("Intervalo (50,75]\n");
        }
        else if ( a >= 75.00001 && a <= 100.00000 ) {
            printf("Intervalo (75,100]\n");
        }
    }
    return 0;
}
