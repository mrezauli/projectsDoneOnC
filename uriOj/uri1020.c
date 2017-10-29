#include <stdio.h>
int main()
{
    int given_days;
    int days, months, years, less_days;
    while ( scanf("%d", &given_days) == 1 ) {
        years = given_days / 365;
        less_days = given_days % 365;
        months = less_days / 30;
        days = less_days % 30;
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
    }
    return 0;
}
