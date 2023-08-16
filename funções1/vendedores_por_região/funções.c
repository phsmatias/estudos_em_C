#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void limparBuffer(void){
    char c;
    while((c = getchar()) != '\n' && c != EOF);
}

char ler_caractere(void){
    char regiao;

    printf("Regioes: Leste, Oeste e Norte\n");
    printf("Informe a primeira letra da regiao: ");
    regiao = getchar();
    limparBuffer();

    regiao = toupper(regiao); // converte as letras digitas em maiúsculas

    return regiao;
}

void switch_function(char a){
    char b = a;
    char vendedor;

    switch (b)
    {
        case 'L':
            printf("Vendedores: Ricardo, Jose e Mariana\n");
            printf("Informe a primeira letra do vendedor: ");
            vendedor = toupper(getchar());
            limparBuffer();
            printf("\n");
            
            switch(vendedor){
                case 'R':
                    printf("Vendas: R$%d\n", 5000);
                    break;
                case 'J':
                    printf("Vendas: R$%d\n", 15000);
                    break;
                case 'M':
                    printf("Vendas: R$%d\n", 12000);
                    break;
            } // end swtich
        break;

        case 'O':
            printf("Vendedores: Rafael, Joana e Pedro\n");
            printf("Informe a primeira letra do vendedor: ");
            vendedor = toupper(getchar());
            limparBuffer();
            printf("\n");
            
            switch(vendedor){
                case 'R':
                    printf("Vendas: R$%d\n", 7800);
                    break;
                case 'J':
                    printf("Vendas: R$%d\n", 17800);
                    break;
                case 'P':
                    printf("Vendas: R$%d\n", 11090);
                    break;
            } // end swtich
        break;

        case 'N':
            printf("Vendedores: Carlos, Karol e Paulo\n");
            printf("Informe a primeira letra do vendedor: ");
            vendedor = toupper(getchar());
            limparBuffer();
            printf("\n");
            
            switch(vendedor){
                case 'C':
                    printf("Vendas: R$%d\n", 7800);
                    break;
                case 'K':
                    printf("Vendas: R$%d\n", 17800);
                    break;
                case 'P':
                    printf("Vendas: R$%d\n", 11090);
                    break;
            } // end swtich
        break;

        default:
            break;
    } // end switch
}
