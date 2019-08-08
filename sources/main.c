#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../headers/funcoes.h"
#include "../headers/menu.h"

int main(int argc, char const *argv[]) {
  int quantidade = 0, opcao = 0;
  srand((unsigned)time(NULL));
  char matriz[20][80];
  while(1){
    MenuPrincipal();
    MenuEscolha1();
    scanf("%d", &opcao);
    getchar();
    MenuEscolha2();
    scanf("%d", &quantidade);
    getchar();

    if(opcao == 1){
      IniciarQuadro(matriz);
      ConfereQuantidade(&quantidade);
      InsereAsterisco(matriz, quantidade);
      ImprimirQuadro(matriz);

    }
    else if(opcao == 2){
      IniciarQuadro(matriz);
      ConfereQuantidade(&quantidade);
      InsereMais(matriz, quantidade);
      ImprimirQuadro(matriz);
    }
    else if(opcao == 3){
      IniciarQuadro(matriz);
      ConfereQuantidade(&quantidade);
      InsereX(matriz, quantidade);
      ImprimirQuadro(matriz);
    }
    else if(opcao == 4){
      IniciarQuadro(matriz);
      ConfereQuantidade(&quantidade);
      InserirAleatorio(matriz, quantidade);
      ImprimirQuadro(matriz);
    }
    else{
      IniciarQuadro(matriz);
      ConfereQuantidadeAleatorio(&quantidade);
      InserirObraAluno(matriz, quantidade);
      ImprimirQuadro(matriz);
    }
  }

  return 0;
}
