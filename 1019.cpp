#include <stdio.h>

int main () {

    int N;
    int h, min, seg;
   scanf("%d", &N);

    if (N<=3600){
        min = N/60;
        seg = N%60;
        h = min/60;
    } else {
        h = N/3600;
        min = (N-(h*3600))/60;
        seg = (min%3600)-2; 
    }

    printf("%d: %d: %d:\n", h, min, seg);

    return 0;
}