#include <stdio.h>
int main()
{

    double x, y, media;
    do
    {
        scanf("%lf", &x);
        if (x < 0 || x > 10)
        {
            printf("nota invalida\n");
        }
    } while (x < 0 || x > 10);
    do
    {
        scanf("%lf", &y);
        if (y < 0 || y > 10)
        {
            printf("nota invalida\n");
        }
    } while (y < 0 || y > 10);

    media = (x + y) / 2;
    printf("media = %.2f\n", media);


return 0;
}