#include <stdio.h>
int main()
{
    int n, num, p_count = 0, n_count = 0;
    scanf("%d", &n);

    while ( n-- ) {
        scanf("%d", &num);
        if ( num > 0 ) {
            p_count++;
        }
        else if ( num < 0 ) {
            n_count++;
        }

    }
    printf("%d %d", p_count, n_count);
    return 0;
}
