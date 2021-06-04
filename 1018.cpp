#include <stdio.h>

int main(){

    int N, cem, cinquenta, vinte, dez, cinco, dois, um, nota;
    scanf("%d", N);
    nota = N;
    cem = nota/100;
    nota = nota-(cem*100);
    cinquenta = nota/50;
    nota = nota - (cinquenta*100);
    vinte = nota/20;
    nota = nota - (vinte*20);
    dez = nota/10;
    nota = nota - (dez*10);
    cinco = nota/5;
    nota = nota - (cinco*5);
    dois = nota/2;
    nota = nota - (dois * 2);
    um = nota/1;
    nota = nota - (um*1);

    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}