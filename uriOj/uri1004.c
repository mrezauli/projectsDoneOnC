#include <stdio.h>

int main() {
    int a, b, prod;
    while ( scanf("%d %d", &a, &b) == 2 ) {
        prod = a * b;
        printf("PROD = %d\n", prod);
    }
    return 0;
}
