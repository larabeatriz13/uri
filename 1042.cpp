#include <stdio.h>
int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && b < c)
    {
        printf("\n%d\n%d\n%d\n \n%d\n%d\n%d\n", a, b, c, a, b, c);
    }
    else if (b < a && a < c)
    {
        printf("\n%d\n%d\n%d\n \n%d\n%d\n%d\n", b, a, c, a, b, c);
    }
    else if (a < c && c < b)
    {
        printf("\n%d\n%d\n%d\n \n%d\n%d\n%d\n", a, c, b, a, b, c);
    }
    else if (b < c && c < a)
    {
        printf("\n%d\n%d\n%d\n \n%d\n%d\n%d\n", b, c, a, a, b, c);
    }
    else if (c < a && a < b)
    {
        printf("\n%d\n%d\n%d\n \n%d\n%d\n%d\n", c, a, b, a, b, c);
    }
    else
    {
        printf("\n%d\n%d\n%d\n \n%d\n%d\n%d\n", a, b, a, a, b, c);
    }

    return 0;
}