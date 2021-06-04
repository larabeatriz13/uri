#include <stdio.h>

int main()
{
    float x, y = 0, media = 0;
    int j, n = 0;

    for (j = 1; j <= 6; j++)
    {
        scanf("%f", &x);
        if (x > 0)
        {
            n += 1;
            y += x;
        }
    }
    media = y / n;

    printf("%d valores positivos\n", n);
    printf("%.1f\n", media);
    return 0;
}