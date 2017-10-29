#include <stdio.h>
int main()
{
    int sim[3], i, j, temp, ple[3];
    while ( scanf("%d %d %d", &sim[0], &sim[1], &sim[2] ) == 3 ) {
            for ( i = 0; i < 3; i++ ) {
                ple[i] = sim[i];
            }
            for ( i = 0; i < 3; i++ )
                for ( j = i + 1; j < 3; j++ ) {
                   if ( sim[i] > sim[j] ) {
                        temp = sim[i];
                        sim[i] = sim[j];
                        sim[j] = temp;
                   }
                }
            for ( i = 0; i < 3; i++ ) {
                printf("%d\n", sim[i]);
            }
            printf("\n");
            for ( i = 0; i < 3; i++ ) {
                printf("%d\n", ple[i]);
            }

    }
    return 0;
}
