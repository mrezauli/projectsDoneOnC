#include <stdio.h>
int main()
{
    int spent_hour, avr_speed, avr_fuel = 12;
    double distance, spent_fuel;
    while ( scanf("%d %d", &spent_hour, &avr_speed) == 2 ) {
        distance = avr_speed * spent_hour;
        spent_fuel = distance / avr_fuel;
        printf("%.3lf\n", spent_fuel);
    }
    return 0;
}
