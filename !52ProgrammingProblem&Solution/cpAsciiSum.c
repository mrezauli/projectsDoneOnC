#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    char ascii[3];
    scanf("%d", &n);
    while ( n-- ) {
        for ( i = 0; i < 3; i++ ){
            scanf("%c", &ascii[i]);
            sum = sum + ( int ) ascii[i];
        }
        printf("%d\n", sum);

    }
    return 0;
}
