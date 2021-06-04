#include <stdio.h>
int main()
{

    int num, x, y;
    double soma;
    scanf("%d", &num);
    while (num--)
    {
        scanf("%d %d", &x, &y);
        {
            if (y == 0)
            {
                printf("divisao impossivel\n");
            }
            else
            {
                soma = (double)x / y;
                printf("%.1lf\n", soma);
            }
        }
    }
    return 0;
}