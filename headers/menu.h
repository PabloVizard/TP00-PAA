#ifndef MENU_H
#define MENU_H

//Prototipos das funções

void MenuPrincipal();
void MenuEscolhaFigura();
void MenuEscolhaQuantidade();
void MenuQuadro(int opcao, int quantidade);
void ConfereRepeticao(int repeticao, int *opcao, int *quantidade, int opcaoAux, int quantAux);
void Repeticao(int *repeticao);
void FinalizacaoPrograma(int *finalizacao);
#endif
