#include <stdio.h>
int main()
{
    int n, x, in_counter = 0, out_counter = 0;
    scanf("%d", &n);
    while ( n-- ) {
        scanf("%d", &x);
        if ( x >= 10 && x <= 20 ) {
            in_counter++;
        }
        else {
            out_counter++;
        }
    }
    printf("%d in\n%d out\n", in_counter, out_counter);
    return 0;
}
