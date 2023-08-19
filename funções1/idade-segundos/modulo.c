#include "funcoes.h"
#include <stdio.h>

short ler_idade(void){
    short i;
    printf("Digite sua idade em anos: ");
    scanf("%hd", &i);
    return i;
}

long segundos(short a){
    long s = a * 365L * 24L * 60L * 60L;
    return s;
}

void exibir_dados(long a){
    printf("Sua idade em anos convertida para segundos eh: %ld", a);
}
