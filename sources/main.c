#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../headers/funcoes.h"
#include "../headers/menu.h"

int main(int argc, char const *argv[]) {
  //Variáveis utilizadas para funcionamento do programa
  int quantidade = 0, opcao = 0;
  srand((unsigned)time(NULL)); //Função para sempre inserir um número aleatorio
  char matriz[20][80]; // Criação da matriz(quadro)
  while(1){
    /*Chamando as funções do menu e recebendo valores para as variáveis que seram
     utilizadas nas funções*/
    MenuPrincipal();
    MenuEscolha1();
    scanf("%d", &opcao);
    getchar();//Função para ignorar strings caso sejam digitadas sem querer, evitando assim um loop infinito. */
    MenuEscolha2();
    scanf("%d", &quantidade);
    getchar();//Função para ignorar strings caso sejam digitadas sem querer, evitando assim um loop infinito. */


    switch (opcao){//switch case para melhor organização do código
      case 1: // caso opcao seja 1, ele executa o quadro com asterisco
        IniciarQuadro(matriz);
        ConfereQuantidade(&quantidade);
        InsereAsterisco(matriz, quantidade);
        ImprimirQuadro(matriz);
        break;
      case 2: // caso opcao seja 2, ele executa o quadro com desenho de mais
        IniciarQuadro(matriz);
        ConfereQuantidade(&quantidade);
        InsereMais(matriz, quantidade);
        ImprimirQuadro(matriz);
        break;
      case 3: // caso opcao seja 1, ele executa o quadro com desenho de x
        IniciarQuadro(matriz);
        ConfereQuantidade(&quantidade);
        InsereX(matriz, quantidade);
        ImprimirQuadro(matriz);
        break;
      case 4: // caso opcao seja 4, ele executa o quadro com asteriscos, desenhos de mais e desenhos de x aleatoriamente
        IniciarQuadro(matriz);
        ConfereQuantidade(&quantidade);
        InserirAleatorio(matriz, quantidade);
        ImprimirQuadro(matriz);
        break;
      default: // caso seja qualquer outro valor, ele executa o quadro com desenho do Pacman
        IniciarQuadro(matriz);
        ConfereQuantidadePacman(&quantidade);
        InserirObraAluno(matriz, quantidade);
        ImprimirQuadro(matriz);
        break;
    }
  }

  return 0;
}
