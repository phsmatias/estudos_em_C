#include "funcoes.h"
#include <stdio.h>

int tamanho(void){
    int t;
    printf("Digite o maior numero: ");
    scanf("%d", &t);
    return t;
}


void exibir_piramide(int a){
    int x, y;
    int z = a;
    int m = 1;
    int n = a;
    for(x=0; x<z; x++){
        for(y=m; y<=n; y++){
            printf("%d ", y);
        }
        printf("\n");
    m = m + 1;
    n = n - 1;
    }
}
