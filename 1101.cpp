#include <stdio.h>
int main()
{
    int m = 1, n = 1, x = 0, soma = 0, y = 0;
    scanf("%d %d", &m, &n);

    while (m > 0 && n > 0)
    {
        if (n < m)
        {
            y = m;
            m = n;
            n = y;
        }
        for (x = m; x <= n; x++)
        {
            soma += 1;
            printf("%d", x);
        }
        printf("Sum=%d\n", soma);
        soma = 0;
        scanf("%d %d", &m, &n);
    }
    return 0;
}