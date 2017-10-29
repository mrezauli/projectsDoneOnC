#include <stdio.h>
int isprime ( int number );
int main()
{
    int n, i, j, marks[99], cnt_prime;
    scanf("%d", &n);
    while( n-- ) {
        cnt_prime = 0;
        for ( i = 0; i < 10; i++ ) {
            scanf("%d", &marks[i]);
        }
        for ( i = 0; i < 10; i++ ) {
            if ( marks[i] > 1 ) {
                if ( isprime(marks[i]) == 0 ) {
                    continue;
                }
                else {
                    cnt_prime++;
                }
            }
        }
        printf("%d\n", cnt_prime);
    }
    return 0;
}
int isprime ( int number )
{
    int i;
    if ( number == 2 ) {
        return 1;
    }
    if ( number % 2 == 0 ) {
        return 0;
    }
    for ( i = 3; i < 10; i += 2 ) {
        if ( number == i ) {
            return 1;
        }
        else if ( number % i == 0 ) {
            return 0;
        }

    }
    return 1;
}
