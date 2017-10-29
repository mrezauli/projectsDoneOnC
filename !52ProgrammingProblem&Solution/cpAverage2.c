#include <stdio.h>
int main()
{
    int n, i, m;
    int marks[100];
    double avrg, sum;
    scanf("%d", &n);

    while ( n-- ) {
        scanf("%d", &m);
        sum = 0.0;
        for ( i = 0; i < m; i++ ) {
            scanf("%d", &marks[i] );
            sum += marks[i];
        }
        avrg = sum / m;
        printf("%.2lf\n", avrg);
    }
    return 0;
}
