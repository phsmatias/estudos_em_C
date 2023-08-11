#include "ex4_fun.h"
#include <stdio.h>

int ler_dados(void){
    int a;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    return a;
}

int ler_dados2(void){
    int b;
    printf("Digite o primeiro valor: ");
    scanf("%d", &b);
    return b;
}

void maior_valor(void){
    int x = ler_dados();
    int y = ler_dados2();
    if (x > y){
        printf("%d eh o maior", x);
    }else{
        printf("%d eh o maior", y);
    }
}
