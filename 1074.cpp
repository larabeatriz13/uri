#include <stdio.h>
int main()
{
    int num, cont, x;
    scanf("%d", &num);
    for (cont = 1; cont <= num; cont++)
    {
        scanf("%d", &x);
        if (x == 0)
        {
            printf("NULL\n");
        }
        else if (x < 0 && x % 2 == 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (x < 0 && x % 2 != 0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if (x > 0 && x % 2 == 0)
        {
            printf("EVEN POSITIVE");
        }
        else if (x > 0 && x % 2 != 0)
        {
            printf("ODD POSITIVE");
        }
        }
    return 0;
}
