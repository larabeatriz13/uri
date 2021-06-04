#include <stdio.h>
int main()
{

    int cont, x;
    scanf("%d", &x);
    for (cont = 1; cont <= x; cont++)
    {
        if (cont % 2 == 0)
        {
            printf("%d^2 = %d\n", cont, (cont * cont));
        }
    }

    return 0;
}