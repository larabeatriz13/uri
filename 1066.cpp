#include <stdio.h>
int main()
{

    int x, num, par = 0, imp = 0, pos = 0, neg = 0;
    for (x = 0; x < 5; x++)
    {
        scanf("%d", &num);
        if (num > 0)
        {
            pos++;
        }
        if (num < 0)
        {
            neg++;
        }
        if (num % 2 == 0)
        {
            par++;
        }
        if (num % 2 != 0)
        {
            imp++;
        }
    }
    printf("%d valor(es) par(es)\n %d valor(es) impar(es)\n %d valor(es) positivo(s)\n %d valor(es) negativo(s)", par, imp, pos, neg);

    return 0;
}