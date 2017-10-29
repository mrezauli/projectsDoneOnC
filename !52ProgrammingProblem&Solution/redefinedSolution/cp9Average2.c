#include <stdio.h>
int main()
{
    int n, i, total_student, marks[99];
    double average, sum;
    scanf("%d", &n);
    while( n-- ) {
        sum = 0;
        scanf("%d", &total_student);
        for ( i = 0; i < total_student; i++ ) {
            scanf("%d", &marks[i]);
            sum += marks[i];
        }
        average = sum / total_student;
        printf("%.2lf\n", average);
    }
    return 0;
}
