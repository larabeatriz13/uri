#include <stdio.h>
int main()
{

    int num, x, cont, out = 0, in = 0;
    scanf("%d", &num);
    for (cont = 0; cont < num; cont++)
    {
        scanf("%d", &x);
        if ((x >= 10) && (x <= 20))
        {
            in++;
        }
        else
        {
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}