#include <stdio.h>
int main()
{
    int num, x, y, a, b, c = 0;
    scanf("%d", &num);
    for (a = 1; a <= num; a++)
    {
        scanf("%d%d", &x, &y);
        if (x == y)
        {
            c = 0;
            printf("%d\n", c);
        }
        else if (x < y)
        {
            for (b = x + 1, c = 0; b < y; b++)
            {
                if (b % 2 == 1 || b % 2 == -1)
                    c += b;
            }
            printf("%d\n", c);
        }
        else
        {
            for (b = y + 1, c = 0; b < x; b++)
            {
                if (b % 2 == 1 || b % 2 == -1)
                    c += b;
            }
            printf("%d\n", c);
        }
    }
    return 0;
}
