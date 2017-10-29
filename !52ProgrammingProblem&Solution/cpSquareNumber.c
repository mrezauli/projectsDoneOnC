#include <stdio.h>
#include <math.h>
int main()
{
    int n, number, root;

    scanf("%d", &n);

    while ( n-- ) {
        scanf("%d", &number);
        if ( number > 0 && number < 10000001 ) {
            root = sqrt(number);
            if ( root * root == number ) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }

    }
    return 0;
}
