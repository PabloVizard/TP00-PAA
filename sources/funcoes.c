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
    i = 1 + (rand () % 18);
    j = 1 + (rand () % 78);
    while((matriz[i][j] == ' ') && (matriz[i-1][j] == ' ') && (matriz[i+1][j] == ' ') && (matriz[i][j-1] == ' ') && (matriz[i][j+1] == ' ') && (i<19) && (j<79)){
      matriz[i][j] = '*';
      matriz[i-1][j] = '*';
      matriz[i+1][j] = '*';
      matriz[i][j-1] = '*';
      matriz[i][j+1] = '*';
      cont ++;
    }
  }
}

void InsereX(char matriz[20][80], int quantidade){
  int cont = 0, i = 0, j = 0;
  while(cont < quantidade){
    i = 1 + (rand () % 18);
    j = 1 + (rand () % 78);
    while((matriz[i][j] == ' ') && (matriz[i-1][j-1] == ' ') && (matriz[i+1][j+1] == ' ') && (matriz[i+1][j-1] == ' ') && (matriz[i-1][j+1] == ' ') && (i<19) && (j<79)){
      matriz[i][j] = '*';
      matriz[i-1][j-1] = '*';
      matriz[i+1][j+1] = '*';
      matriz[i+1][j-1] = '*';
      matriz[i-1][j+1] = '*';
      cont ++;
    }
  }
}

void InserirAleatorio(char matriz[20][80], int quantidade){
  int quantAsterisco = 0, quantMais = 0, quantX = 0;
  quantAsterisco = rand() % quantidade;
  quantMais = (rand() % (quantidade - quantAsterisco));
  quantX = quantidade - (quantAsterisco + quantMais);

  InsereAsterisco(matriz, quantAsterisco);
  InsereMais(matriz, quantMais);
  InsereX(matriz, quantX);
}

void InserirObraAluno(char matriz[20][80], int quantidade){
  int cont = 0, i = 0, j = 0;
  while(cont < quantidade){
    i = 1 + (rand () % 18);
    j = 1 + (rand () % 78);
    while((matriz[i][j] == ' ') && (matriz[i+1][j] == ' ') && (matriz[i-1][j] == ' ') && (matriz[i+2][j+2] == ' ')
    && (matriz[i-2][j+2] == ' ') && (matriz[i+3][j+4] == ' ') && (matriz[i-3][j+4] == ' ') && (matriz[i+3][j+5] == ' ')
    && (matriz[i-3][j+5] == ' ') && (matriz[i+3][j+6] == ' ') && (matriz[i-3][j+6] == ' ') && (matriz[i-1][j+6] == ' ')
    && (matriz[i][j+8] == ' ') && (matriz[i+2][j+9] == ' ') && (matriz[i-2][j+9] == ' ') && (matriz[i+1][j+10] == ' ')
    && (matriz[i-1][j+10] == ' ') && (matriz[i][j+12] == ' ') && (i<19) && (j<79)){
      matriz[i][j] = '*';
      matriz[i+1][j] = '*';
      matriz[i-1][j] = '*';
      matriz[i+2][j+2] = '*';
      matriz[i-2][j+2] = '*';
      matriz[i+3][j+4] = '*';
      matriz[i-3][j+4] = '*';
      matriz[i+3][j+5] = '*';
      matriz[i-3][j+5] = '*';
      matriz[i+3][j+6] = '*';
      matriz[i-3][j+6] = '*';
      matriz[i-1][j+6] = '0';
      matriz[i][j+8] = '*';
      matriz[i+2][j+9] = '*';
      matriz[i-2][j+9] = '*';
      matriz[i+1][j+10] = '*';
      matriz[i-1][j+10] = '*';
      matriz[i][j+12] = 'o';
      cont ++;
    }
  }
}
void ConfereQuantidade(int *quantidade){
  if (*quantidade <= 0)
    *quantidade = 1 + (rand() % 100);
  else if (*quantidade > 100)
    *quantidade = 100;
}
void ConfereQuantidadeAleatorio(int *quantidade){
  if (*quantidade <= 0)
    *quantidade = 1 + (rand() % 18);
  else if (*quantidade > 18)
    *quantidade = 18;
}
void ImprimirQuadro(char matriz[20][80]){
  for(int i = 0; i < 20; i++){
    for(int j = 0; j < 80; j++){
      printf("%c", matriz[i][j]);
    }
    printf("\n");
  }
}
