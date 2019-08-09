#ifndef FUNCOES_H
#define FUNCOES_H

//Prototipos das funções

void IniciarQuadro(char matriz[20][80]);
void InsereAsterisco(char matriz[20][80], int quantidade);
void InsereMais(char matriz[20][80], int quantidade);
void InsereX(char matriz[20][80], int quantidade);
void InserirAleatorio(char matriz[20][80], int quantidade);
void InserirObraAluno(char matriz[20][80], int quantidade);
void ConfereQuantidade(int *quantidade);
void ConfereQuantidadePacman(int *quantidade);
void ConfereRepeticao(int repeticao, int *opcao, int *quantidade, int opcaoAux, int quantAux);
void Repeticao(int *repeticao);
void ImprimirQuadro(char matriz[20][80]);
#endif
