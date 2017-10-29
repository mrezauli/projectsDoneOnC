#include <stdio.h>
int main()
{
    int pro_code1, pro_unit1, pro_code2, pro_unit2;
    double pro_unit_price1, pro_unit_price2, pro_total_price1, pro_total_price2, pro_final_price;
    while ( scanf("%d %d %lf\n%d %d %lf", &pro_code1, &pro_unit1, &pro_unit_price1, &pro_code2, &pro_unit2, &pro_unit_price2) == 6 ) {
        pro_total_price1 = pro_unit1 * pro_unit_price1;
        pro_total_price2 = pro_unit2 * pro_unit_price2;
        pro_final_price = pro_total_price1 + pro_total_price2;
        printf("VALOR A PAGAR: R$ %.2lf\n", pro_final_price);
    }
    return 0;
}
