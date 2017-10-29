#include <stdio.h>
int main()
{
    int code, quantity;
    double price_one = 4.00, price_two = 4.50, price_three = 5.00, price_four = 2.00, price_five = 1.50;
    while ( scanf("%d %d", &code, &quantity) == 2 ) {
        if ( code == 1 ) {
            printf("Total: R$ %.2lf\n", price_one * quantity);
        }
        else if ( code == 2 ) {
            printf("Total: R$ %.2lf\n", price_two * quantity);
        }
        else if ( code == 3 ) {
            printf("Total: R$ %.2lf\n", price_three * quantity);
        }
        else if ( code == 4 ) {
            printf("Total: R$ %.2lf\n", price_four * quantity);
        }
        else {
            printf("Total: R$ %.2lf\n", price_five * quantity);
        }

    }
    return 0;
}
