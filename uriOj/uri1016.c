#include <stdio.h>
int main()
{
    int distance;
    while ( scanf("%d", &distance) == 1 ) {
        printf("%d minutos\n", distance * 2);
    }
    return 0;
}
