#include <stdio.h>

int main()
{
    int emp_number, emp_working_hour;
    double emp_amount_per_hour, emp_salary;
    while ( scanf("%d %d %lf", &emp_number, &emp_working_hour, &emp_amount_per_hour) == 3 ) {
        emp_salary = emp_amount_per_hour * emp_working_hour;
        printf("NUMBER = %d\nSALARY = U$ %.2lf\n", emp_number, emp_salary);
    }
    return 0;
}
