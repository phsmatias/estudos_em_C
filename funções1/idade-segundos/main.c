#include <stdio.h>
#include "funcoes.h"

int main(void){
    long a = segundos(ler_idade());
    exibir_dados(a);
    return 0;
}
