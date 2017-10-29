#include <stdio.h>
int main()
{
    int n, l, w, h, volume;
    scanf("%d", &n);
    while ( n-- ) {
        scanf("%d %d %d", &l, &w, &h);
        volume = l * w * h;
        printf("%d\n", volume);
    }
    return 0;
}
