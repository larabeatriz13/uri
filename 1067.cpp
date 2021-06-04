#include <stdio.h>
int main()
{

    int x, y = 0;
    scanf("%d", &x);
    while (y < x)
    {
        y++;
        if (y % 2 == 1)
        {
            printf("%d\n", y);
        }
    }
    return 0;
}