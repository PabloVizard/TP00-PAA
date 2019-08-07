#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../headers/funcoes.h"

int main(int argc, char const *argv[]) {
  srand((unsigned)time(NULL));

  int quantidade = 0;
  printf("Digite a quantidade de imagens desejada: \n");
  scanf("%d", &quantidade);
  char matriz[20][80];
  IniciarQuadro(matriz);
  ImprimirQuadro(matriz);
  printf("\n");
  //InsereAsterisco(matriz, quantidade);
  InsereMais(matriz, quantidade);
  ImprimirQuadro(matriz);

  return 0;
}
