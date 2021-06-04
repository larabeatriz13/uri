#include <stdio.h>

int main()
{

    int num1, num2, val1, val2;
    double preco1, preco2;

    scanf("%d %d %lf", &num1, &num1, &preco1);
    scanf("%d %d %lf", &num2, &num2, &preco2);

    printf("VALOR A PAGAR: R$ %.2lf\n", (num1 * preco1) + (num2 * preco2));

    return 0;
}