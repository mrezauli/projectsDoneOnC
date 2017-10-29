#include<stdio.h>
#include<string.h>
int main()
{
    char gre[1000];
    int T, i, len;
    scanf("%d", &T);

    while (T--) {
        scanf(" %[^\n]", gre);



        for ( i = 0; i != '\0'; i++ ) {
            if ( gre[i] >= 'A' && gre[i] <= 'Z') {
                printf("%d", gre[i] - 64);
            }
        }
        printf("\n");
    }

    return 0;
}
