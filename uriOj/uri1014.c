#include <stdio.h>
int main()
{
    int distance;
    double fuel_in_liter;
    while ( scanf("%d\n%lf", &distance, &fuel_in_liter ) == 2 ) {
        printf("%.3lf km/l\n", distance / fuel_in_liter);
    }
    return 0;
}
