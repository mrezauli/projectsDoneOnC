#include <stdio.h>
int main()
{

    int given_seconds, seconds, minutes, real_minutes, hours;
    while ( scanf("%d", &given_seconds ) == 1 ) {
        seconds = given_seconds % 60;
        minutes = given_seconds / 60;
        hours = minutes / 60;
        real_minutes = minutes - ( hours * 60 );
        printf("%d:%d:%d\n", hours, real_minutes, seconds);
    }
    return 0;
}
