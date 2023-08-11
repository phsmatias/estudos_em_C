#include "f_math.h"
#include <stdio.h>
#include <math.h>

int delta(){
    int a = ler_dados1();
    int b = ler_dados2();
    int c = ler_dados3();
    return (pow(b, 2) - 4*a*c);
}

void exibir_dados(int x){
    printf("O valor de delta eh: %d", x);
}

int ler_dados1(void){
    int a;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    return a;
}

int ler_dados2(void){
    int b;
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    return b;
}

int ler_dados3(void){
    int c;
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    return c;
}
