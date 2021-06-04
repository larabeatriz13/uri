#include <stdio.h>

int main()
{

    int x, y, posi = 0;

    for (y = 0; y < 5; y++)
    {
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            posi++;
        }
    }
    printf("%d valores pares\n", posi);
    return 0;
}