#include <stdio.h>

int main()
{

    int x, y, cont = 0;
    scanf("%d", &x);

    for (y = x; cont < 6; y++)
    {

        if (y % 2 != 0)
        {

            printf("%d\n", y);
            cont++;
        }
    }
    return 0;
}
