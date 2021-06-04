#include <stdio.h>

int main(){

    int num, horas;
    double salario;

    scanf("%d", &num);
    scanf("%d", &horas);
    scanf("%lf", &salario);

    printf("NUMBER = %d\n", num );
    printf("SALARY = U$ %.2lf\n", salario*horas);

    return 0;
}