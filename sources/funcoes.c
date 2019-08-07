#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../headers/funcoes.h"

void IniciarQuadro(char matriz[20][80]){
  for(int i = 0; i < 20; i++){
    for(int j = 0; j < 80; j++){
      matriz[i][j] = ' ';
    }
  }
  for(int i = 0; i < 20; i++){
    for(int j = 0; j < 80; j++){
      matriz[i][0] = '|';
      matriz[0][j] = '-';
      matriz[i][79] = '|';
      matriz[19][j] = '-';
      matriz[19][0] = '-';
    }
  }
}

void InsereAsterisco(char matriz[20][80], int quantidade){
  int cont = 0, i = 0, j = 0;
  while(cont < quantidade){
    i = 1 + (rand () % 18);
    j = 1 + (rand () % 78);
    if(matriz[i][j] == ' '){
      matriz[i][j] = '*';
      cont ++;
    }
  }
}

void InsereMais(char matriz[20][80], int quantidade){
  int cont = 0, i = 0, j = 0;
  while(cont < quantidade){
    do {
      i = 1 + (rand () % 17);
      j = 1 + (rand () % 77);
    } while((matriz[i][j] != ' ') && (matriz[i-1][j] != ' ') && (matriz[i+1][j] != ' ') && (matriz[i][j-1] != ' ') && (matriz[i][j+1] != ' ') && (i<79) && (j<19));
    matriz[i][j] = '*';
    matriz[i-1][j] = '*';
    matriz[i+1][j] = '*';
    matriz[i][j-1] = '*';
    matriz[i][j+1] = '*';
    cont ++;
  }

}

void ImprimirQuadro(char matriz[20][80]){
  for(int i = 0; i < 20; i++){
    for(int j = 0; j < 80; j++){
      printf("%c", matriz[i][j]);
    }
    printf("\n");
  }
}
