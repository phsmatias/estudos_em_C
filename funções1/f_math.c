#include "f_math.h"
#include <stdio.h>

int positivo(int a){
    if(a >= 0){
        printf("Eh positivo.");
    }else{
        printf("Eh negativo.");
    }
}

int ler_dados(void){
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);
    return x;
}
