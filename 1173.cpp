#include <stdio.h>
int main()
{

    int N[10], v, cont;
    scanf("%d", &v);
    for (cont = 0; cont < 10; cont++)
    {
        N[cont] = v;
        printf("N[%d] = %d\n", cont, v);
        v *= 2;
    }

    return 0;
}