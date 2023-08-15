#include "funcoes.h"
#include <stdio.h>

int  criar_matriz(void){
    int x, y;
    int matriz[3][3];

    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            printf("Digite o valor da pos. [%d][%d]", x, y);
            scanf("%d", &matriz[x][y]);
        }
    }
    return matriz;
}

void exibir_matriz(int m[3][3]){
    int x, y;
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            printf("valor da pos. [%d][%d] ", x, y);
        }
    printf("\n");
    }
}
