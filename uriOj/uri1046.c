#include <stdio.h>
int main()
{
    int start, end, hours;
    while ( scanf("%d %d", &start, &end ) == 2 ) {
        if ( start == end ) {
            printf("O JOGO DUROU %d HORA(S)\n", 24);
        }
        else if ( start > end ) {
            hours = 24 - start;
            hours += end;
            printf("O JOGO DUROU %d HORA(S)\n", hours);
        }
        else {
            hours = end - start;
            printf("O JOGO DUROU %d HORA(S)\n", hours);
        }
    }
    return 0;
}
