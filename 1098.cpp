#include <stdio.h>

int main()
{
    int a, b;
    double x;

    for (a = 0; a <= 20; a += 2)
    {
        x = a / 10.f;
        for (b = 1; b <= 3; b++)
            printf("I=%g J=%g\n", x, b + x);
    }

    return 0;
}
