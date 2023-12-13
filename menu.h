/**
* @file menu.h
*
* @brief Definições das funções para menu
*
*/
#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

/**
* @brief Define o tipo de menu
* Menu Principal
*
*/
#define M_PRINCIPAL 0

/**
* @brief Define o tipo de menu
* Menu Bancos
*
*/
#define M_BANCOS 1


/**
* @brief Mostra as opções de um menu na tela
*
* @param opcoes Vetor com as opções do menu
* @param quantOp Quantidade de opções do menu
*
*/
void mostraMenu(char** opcoes, int quantOp);

/**
* @brief Lê do usuário uma opção do menu
*
* Faz a leitura de uma string e a transforma em
* inteiro para validação.
*
* @param quantOp Inteiro que indica a quantidade de opções do menu
*
* @return Um inteiro que define a opção escolhida
*
*/
int lerOpcaoMenu(int quantOp);

/**
* @brief Definir um vetor com as opções para o menu
*
* @param tipoMenu Inteiro que indica qual o menu a ser retornado.
* @param quant Ponteiro para a quantidade de opções do menu - atualizado por referência.
* @param menu Vetor para armazenar as opções do menu.
*
*/
char** selecionaMenu(int tipoMenu, int* quant);

/**
* @brief Formata e mostra na tela o titulo do menu
*
* @param tituloMenu String com o titulo do menu a ser exibido.
*/
void titulo(char tituloMenu[]);

/**
* @brief Aloca memória para o vetor de menu
*
* @param menu Valor a ser alocado.
* @param tam Tamanho do vetor.
*
* @return A variavel com o espaço alocado.
*
*/
char **alocaMemoriaMenu(char **menu, int tam);

/**
* @brief Libera o espaço de memória alocado para o menu
*
* @param menu Valor a ser desalocado.
* @param tam Tamanho do vetor.
*
*/
void desalocaMemoriaMenu(char **menu, int tam);
#endif // MENU_H_INCLUDED

