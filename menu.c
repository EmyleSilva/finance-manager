/**
* @file menu.c
*
* @brief Implementação das funções de menu.
*
*/

#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/**
* @TODO Implementar retorno para menus que faltam
*/
char** selecionaMenu(int tipoMenu, int *quant){
    char **menu;
    switch (tipoMenu){
        case M_PRINCIPAL:{

            char menuPrincipal[][50]= {"Bancos", "Movimentar", "Relatórios", "Sair"};
            (*quant) = 4;
            menu = alocaMemoriaMenu(menu, (*quant));
            for(int i = 0; i < (*quant); i++) strcpy(menu[i], menuPrincipal[i]);

        break;
        }
        case M_BANCOS:{
            char menuBancos[][50] = {"Adicionar Banco", "Verificar Saldo", "Extrato", "Retornar"};
            (*quant) = 4;
            menu = alocaMemoriaMenu(menu, (*quant));
            for(int i = 0; i < (*quant); i++) strcpy(menu[i], menuBancos[i]);

        break;
        }

        // TODO: Implementar retorno para menu de movimentações
        /*case M_MOVIMENTAR:
        break;*/

        // TODO: Implementar retorno para menu de relatórios
        /*case M_RELATORIOS:
        break;*/
    }
    return menu;
}

int lerOpcaoMenu(int quantOp){
    char op[5];
    int opcao = 0;

    printf("\t\tOPÇÃO: "); scanf("%[^\n]%*c", op);
    opcao = atoi(op);

    if(opcao > 0 && opcao <= quantOp) return opcao;
    return -1;
}

void titulo(char tituloMenu[]){//TODO: Criar subtitulo

    printf("\n\n\t\t=============================================");
    printf("\n\n\t\t\t\t%s", tituloMenu);
    printf("\n\n\t\t=============================================");

}

void mostraMenu(char** opcoes, int quantOp){
    printf("\n\n");
    for(int i = 0; i < quantOp; i++){
        printf("\t\t%d - %s\n\n", i + 1, opcoes[i]);
    }
    printf("\n");
}

char **alocaMemoriaMenu(char **menu, int tam){

    menu = (char **)malloc(tam * sizeof(char*));
    for(int i = 0; i < tam; i++){
        menu[i] = (char *)malloc(50 * sizeof(char));
    }

    return menu;
}

void desalocaMemoriaMenu(char **menu, int tam){

    for(int i = 0; i < tam; i++){
        free(menu[i]);
    }
    free(menu);
}
