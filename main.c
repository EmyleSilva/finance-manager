/**
* @file main.c
*
* Função principal do programa.
*
* @author Emyle Silva
* @date 12/12/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include <locale.h>

int main()
{
    /**< Quantide de opções do menu Principal */
    int quant_p = 0;
    /**< Quantide de opções do menu de Bancos */
    int quant_b = 0;
    /**< Usada para selecionar a opção do menu principal */
    int opcao_p = 0;
    /**< Usada para selecionar a opção do menu de bancos */
    int opcao_b = 0;

    char **menuPrincipal =  selecionaMenu(M_PRINCIPAL, &quant_p); //TODO: Limpar memoria no final
    char **menuBancos = selecionaMenu(M_BANCOS, &quant_b); //TODO: Limpar Memoria no final

    do{
        limpaTela();
        titulo("MENU PRINCIPAL");
        mostraMenu(menuPrincipal, quant_p);
        opcao_p = lerOpcaoMenu(quant_p);

        switch(opcao_p){
            case 1: //BANCOS

                do{
                    limpaTela();
                    titulo("BANCOS");
                    mostraMenu(menuBancos, quant_b);
                    opcao_b = lerOpcaoMenu(quant_b);

                    switch(opcao_b){
                        case 1:// ADICIONAR BANCO
                            limpaTela();
                            titulo("ADICIONAR BANCO");
                            adicionarBanco();
                        break;

                        case 2: // VERIFICAR SALDO
                        break;

                        case 3: //EXTRATO
                        break;

                        case 4: //RETORNAR
                            opcao_b = 0;
                        break;

                        default: //Validação do menu
                            limpaTela();
                            scanf("%*c");
                        break;
                    }

                }while(opcao_b);//Fim do menu de bancos

            break; //fim case 1 - MENU PRINCIPAL

            case 2: //MOVIMENTAR
            break;

            case 3: //RELATÓRIOS
            break;

            case 4: //SAIR
                limpaTela();
                titulo("PROGRAMA FINALIZADO!");
                desalocaMemoriaMenu(menuPrincipal, quant_p);
                desalocaMemoriaMenu(menuBancos, quant_b);
                exit(1);
            break;

            default: //VALIDAÇÃO MENU
                //TODO: Mostrar mensagem de validação do menu
                scanf("%*c");
            break;

        }


    }while(opcao_p);


    return 0;
}
