#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../headers/funcoes.h"
#include "../headers/menu.h"

int main(int argc, char const *argv[]) {

  //Variáveis utilizadas para funcionamento do programa
  int quantidade = 0, opcao = 0, quantAux = 0, opcaoAux = 0,finalizacao = 0;
  int repeticao = 0; // inicio repeticao em 2 pois a primeira execução não é uma repeticao
  srand((unsigned)time(NULL)); //Função para sempre inserir um número aleatorio
  char matriz[20][80]; // Criação da matriz(quadro)
  while(!finalizacao){
    quantAux = quantidade;
    opcaoAux = opcao;
    if(repeticao == 0){
      /*Chamando as funções do menu e recebendo valores para as variáveis que seram
       utilizadas nas funções*/
      MenuPrincipal();
      MenuEscolhaFigura();
      scanf("%d", &opcao);
      getchar();//Função para ignorar strings caso sejam digitadas sem querer, evitando assim um loop infinito. */
      MenuEscolhaQuantidade();
      scanf("%d", &quantidade);
      getchar();//Função para ignorar strings caso sejam digitadas sem querer, evitando assim um loop infinito. */

    }
    switch (opcao){//switch case para melhor organização do código
      case 1: // caso opcao seja 1, ele executa o quadro com asterisco
        ConfereRepeticao(repeticao, &opcao, &quantidade, opcaoAux, quantAux);
        IniciarQuadro(matriz);
        ConfereQuantidade(&quantidade);
        MenuQuadro(opcao, quantidade);
        InsereAsterisco(matriz, quantidade);
        ImprimirQuadro(matriz);
        break;
      case 2: // caso opcao seja 2, ele executa o quadro com desenho de mais
        ConfereRepeticao(repeticao, &opcao, &quantidade, opcaoAux, quantAux);
        IniciarQuadro(matriz);
        ConfereQuantidade(&quantidade);
        MenuQuadro(opcao, quantidade);
        InsereMais(matriz, quantidade);
        ImprimirQuadro(matriz);
        break;
      case 3: // caso opcao seja 1, ele executa o quadro com desenho de x
        ConfereRepeticao(repeticao, &opcao, &quantidade, opcaoAux, quantAux);
        IniciarQuadro(matriz);
        ConfereQuantidade(&quantidade);
        MenuQuadro(opcao, quantidade);
        InsereX(matriz, quantidade);
        ImprimirQuadro(matriz);
        break;
      case 4: // caso opcao seja 4, ele executa o quadro com asteriscos, desenhos de mais e desenhos de x aleatoriamente
        ConfereRepeticao(repeticao, &opcao, &quantidade, opcaoAux, quantAux);
        IniciarQuadro(matriz);
        ConfereQuantidade(&quantidade);
        MenuQuadro(opcao, quantidade);
        InserirAleatorio(matriz, quantidade);
        ImprimirQuadro(matriz);
        break;
      default: // caso seja qualquer outro valor, ele executa o quadro com desenho do Pacman
        ConfereRepeticao(repeticao, &opcao, &quantidade, opcaoAux, quantAux);
        IniciarQuadro(matriz);
        ConfereQuantidadePacman(&quantidade);
        MenuQuadro(opcao, quantidade);
        InserirObraAluno(matriz, quantidade);
        ImprimirQuadro(matriz);
        break;
    }
    //Verificação se o usuário deseja continuar o programa com as mesmas opções
    Repeticao(&repeticao);
    //Verificação se o usuário quer que o programa continua executando
    if(repeticao != 1)
      FinalizacaoPrograma(&finalizacao); //Caso seja 1, continua, caso seja 0, encerra;
  }

  return 0;
}
