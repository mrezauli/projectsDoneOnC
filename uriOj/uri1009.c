#include <stdio.h>

int main()
{
    char emp_name[22];
    double emp_fixed_salary, emp_sale_amount, emp_bonus;
    while ( scanf("%s %lf %lf", &emp_name, &emp_fixed_salary, &emp_sale_amount) == 3 ) {
        emp_bonus = emp_sale_amount * 0.15;
        printf("TOTAL = R$ %.2lf\n", emp_fixed_salary + emp_bonus);
    }
    return 0;
}
