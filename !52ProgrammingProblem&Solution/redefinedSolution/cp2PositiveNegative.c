#include <stdio.h>
int main()
{
    int n, i, cnt_neg = 0, cnt_pos = 0;
    scanf("%d", &n);
    while( n-- ) {
        scanf("%d", &i);
        if ( i < 0 ) {
            cnt_neg++;
        }
        else {
            cnt_pos++;
        }
    }
    printf("%d %d\n", cnt_pos, cnt_neg);
    return 0;
}
