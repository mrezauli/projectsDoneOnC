#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, upto, is_word_started, digit;
    char sim[1000];
    scanf("%d", &n);
    while ( n-- ) {
        gets(sim);
        upto = strlen(sim);
        is_word_started = 0;
        for ( i = 0; i < upto; i++ ) {
            if ( sim[i] >= '0' && sim[i] <= '9' ) {
                if ( is_word_started == 0 ) {
                    is_word_started = 1;
                    digit++;
                }
                else {
                    continue;
                }

            }
            else {
                continue;
            }

        }
        printf("%d\n", digit);

    }
    return 0;
}
