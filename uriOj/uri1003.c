#include <stdio.h>

int main() {
    int a, b, soma;
    while ( scanf("%d %d", &a, &b) == 2 ) {
        soma = a + b;
        printf("SOMA = %d\n", soma);
    }
    return 0;
}
