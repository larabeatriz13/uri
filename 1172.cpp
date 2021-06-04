#include <stdio.h>
int main()
{
    int n[10], cont;
    for (cont = 0; cont < 10; cont++)
        scanf("%d", &n[cont]);
    for (cont = 0; cont < 10; cont++)
    {
        if (n[cont] <= 0)
            n[cont] = 1;
    }
    for (cont = 0; cont < 10; cont++)
        printf("X[%d] = %d\n", cont, n[cont]);
    return 0;
}