#include<stdio.h>
#include<string.h>
int main()
{
    char gre[1000];
    int T, i, len;
    scanf("%d", &T);

    while (T--) {
        scanf(" %[^\n]", gre);

        len = strlen(gre);

        for ( i = len - 1; i >= 0; i-- ) {
            printf("%c", gre[i]);
        }
        printf("\n");
    }

    return 0;
}
