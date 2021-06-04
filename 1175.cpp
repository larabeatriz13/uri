#include <stdio.h>
int main()
{
    int n[20], t, cont1, cont2;
    for (cont1 = 0; cont1 < 20; cont1++)
    {
        scanf("%d", &n[cont1]);
    }
    for (cont1 = 0, cont2 = 19; cont1 < 10; cont1++, cont2--)
    {
        t = n[cont1];
        n[cont1] = n[cont2];
        n[cont2] = t;
    }
    for (cont1 = 0; cont1 < 20; cont1++)
    {
        printf("N[%d] = %d\n", cont1, n[cont1]);
    }
    return 0;
}