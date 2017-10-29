#include <stdio.h>
int main()
{
    int n, length, width, height, volume;
    scanf("%d", &n);
    while( n-- ) {
        scanf("%d %d %d", &length, &width, &height);
        volume = length * width * height;
        printf("%d\n", volume);
    }
    return 0;
}
