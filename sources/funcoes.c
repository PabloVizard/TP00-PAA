#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../headers/funcoes.h"

/*Inicia a matriz com todas as posições sendo preenchidas com um espaço,após isso,
preence todas as bordas verticais com | e todas as bordas horizontais com - */
void IniciarQuadro(char matriz[20][80]){
  for(int i = 0; i < 20; i++){
    for(int j = 0; j < 80; j++){
      matriz[i][j] = ' ';
    }
  }
  for(int i = 1; i < 20; i++){
    for(int j = 0; j < 80; j++){
      matriz[0][j] = '-';
      matriz[i-1][0] = '|';
      matriz[i][79] = '|';
      matriz[19][j] = '-';

    }
  }
}

/*Preenche o quadro com asteriscos aleatorios utilizando as seguintes condições, uma variável
chamada cont é usada para conferir se a quantidade de asteriscos preenchidos é igual a
quantidade total de asteriscos recebida do usuário. Utiizamos a função rand() para gerar
um número aleatorio entre 1 e 19 para i e 1 e 79 para j ignorando as bordas que estão em
0 e 19 para i e 0 e 79 para j. Então conferimos se o espaço da matriz é um espaço vazio
e se for um espaço vazio, preenchemos com um asteriscos e incrementamos +1 na quantidade
de asteriscos preenchidos. */
void InsereAsterisco(char matriz[20][80], int quantidade){
  int cont = 0, i = 0, j = 0;
  while(cont < quantidade){
    i = 1 + (rand () % 18); //Função que gera um número aleatorio no intervalo de 1 a 18
    j = 1 + (rand () % 78); //Função que gera um número aleatorio no intervalo de 1 a 78
    if(matriz[i][j] == ' '){
      matriz[i][j] = '*';
      cont ++;
    }
  }
}

/*Preenche o quadro com simbolos de mais formado por asteriscos utilizando as seguintes
condições, para gerar valores aleatorio de i e j, é o mesmo modo que está descrito no
comentário anterior. Além disso, escolhemos um centro da nossa figura, e a partir dele
vamos procurando os locais onde a posição da matriz se encaixa com o desenho, e então
comparamos se esse espaço é vazio e preenchemos com os asteriscos que fazem o desenho */
void InsereMais(char matriz[20][80], int quantidade){
  int cont = 0, i = 0, j = 0;
  while(cont < quantidade){
    i = 1 + (rand () % 18); //Função que gera um número aleatorio no intervalo de 1 a 18
    j = 1 + (rand () % 78); //Função que gera um número aleatorio no intervalo de 1 a 78
    if((matriz[i][j] == ' ') && (matriz[i-1][j] == ' ') && (matriz[i+1][j] == ' ')
    && (matriz[i][j-1] == ' ') && (matriz[i][j+1] == ' ') && (i<19) && (j<79)){
      matriz[i][j] = '*';
      matriz[i-1][j] = '*';
      matriz[i+1][j] = '*';
      matriz[i][j-1] = '*';
      matriz[i][j+1] = '*';
      cont ++;
    }
  }
}

/*Preenche o quadro com simbolos de X formado por asteriscos utilizando as seguintes
condições, para gerar valores aleatorio de i e j, é o mesmo modo que está descrito no
comentário anterior. Além disso, escolhemos um centro da nossa figura, e a partir dele
vamos procurando os locais onde a posição da matriz se encaixa com o desenho, e então
comparamos se esse espaço é vazio e preenchemos com os asteriscos que fazem o desenho */
void InsereX(char matriz[20][80], int quantidade){
  int cont = 0, i = 0, j = 0;
  while(cont < quantidade){
    i = 1 + (rand () % 18); //Função que gera um número aleatorio no intervalo de 1 a 18
    j = 1 + (rand () % 78); //Função que gera um número aleatorio no intervalo de 1 a 78
    if((matriz[i][j] == ' ') && (matriz[i-1][j-1] == ' ') && (matriz[i+1][j+1] == ' ') && (matriz[i+1][j-1] == ' ') && (matriz[i-1][j+1] == ' ') && (i<19) && (j<79)){
      matriz[i][j] = '*';
      matriz[i-1][j-1] = '*';
      matriz[i+1][j+1] = '*';
      matriz[i+1][j-1] = '*';
      matriz[i-1][j+1] = '*';
      cont ++;
    }
  }
}

/*Funçao que gera desenhos aleatorios. utilizando a variavel quantidade, dividimos ela
em 3 variaveis de forma que recebam valores aleatorios da seguinte forma, a primeira
variavel recebe uma número aleatorio de 0 a 10, depois disso, a segunda variavel rece
um numero aleatorio desse valor que sobrou, e a terceira variavel recebe o que sobrou
das duas , por exemplo, quantidade = 10, a primeira variavel recebe aleatoriamente 4,
a segunda variavel recebe um valor aleatorio entre 0 e (10 - 4), suponhamos que seja 2,
e então a variavel 3 recebe o que sobrou, que no caso é 4, depois disso, chamamos a
função referente aos desenhso e passamos a quantidade que cada um recebeu aleatoriamente*/

void InserirAleatorio(char matriz[20][80], int quantidade){
  int quantAsterisco = 0, quantMais = 0, quantX = 0;
  quantAsterisco = rand() % (quantidade + 1); //Função que gera um número aleatorio no intervalo de 1 ao valor da quantidade
  quantMais = (rand() % (quantidade + 1 - quantAsterisco)); //Função que gera um número aleatorio no intervalo de 1 ao valor que restou da quantidade
  quantX = quantidade - (quantAsterisco + quantMais);
  InsereAsterisco(matriz, quantAsterisco);
  InsereMais(matriz, quantMais);
  InsereX(matriz, quantX);
}

/*Preenche o quadro com desenho pacman formado por asteriscos, letras O e um número 0(zero)
utilizando as seguintes condições, para gerar valores aleatorio de i e j, é o mesmo modo que
está descrito no comentário anterior. Além disso, escolhemos um centro da nossa figura, e a
partir dele vamos procurando os locais onde a posição da matriz se encaixa com o desenho, e
então comparamos se esse espaço é vazio e preenchemos com os asteriscos que fazem o desenho. */
void InserirObraAluno(char matriz[20][80], int quantidade){
  int cont = 0, i = 0, j = 0;
  while(cont < quantidade){
    i = 1 + (rand () % 18); //Função que gera um número aleatorio no intervalo de 1 a 18
    j = 1 + (rand () % 78); //Função que gera um número aleatorio no intervalo de 1 a 78
    if((matriz[i][j] == ' ') && (matriz[i+1][j] == ' ') && (matriz[i-1][j] == ' ')
    && (matriz[i+2][j+2] == ' ') && (matriz[i-2][j+2] == ' ') && (matriz[i+3][j+4] == ' ')
    && (matriz[i-3][j+4] == ' ') && (matriz[i+3][j+5] == ' ') && (matriz[i-3][j+5] == ' ')
    && (matriz[i+3][j+6] == ' ') && (matriz[i-3][j+6] == ' ') && (matriz[i-1][j+6] == ' ')
    && (matriz[i][j+8] == ' ') && (matriz[i+2][j+9] == ' ') && (matriz[i-2][j+9] == ' ')
    && (matriz[i+1][j+10] == ' ') && (matriz[i-1][j+10] == ' ') && (matriz[i][j+12] == ' ')
    && (i<19) && (j<79)){
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
/*Função que confere a quantidade total de figuras utilizando as seguintes condições
se a quantidade for menor que 0, gera uma nova quantidade aleatoriamente entre 1 e 100.
Caso a quantidade for maior que 100, quantidade toma o valor de 100.*/
void ConfereQuantidade(int *quantidade){
  if (*quantidade <= 0)
    *quantidade = 1 + (rand() % 100);
  else if (*quantidade > 100)
    *quantidade = 100;
}

/*Função que confere a quantidade total da opção de figuras aleatorias utilizando as
seguintes condiçõesse a quantidade for menor que 0, gera uma nova quantidade aleatoriamente
entre 1 e 17. Caso a quantidade for maior que 18, quantidade toma o valor de 18.
OBS: 17 é a quantidade máxima de pacmans que pode ser mostrado na tela sem que corra o risco
de ficar em um loop infinito.*/
void ConfereQuantidadePacman(int *quantidade){
  if (*quantidade <= 0)
    *quantidade = 1 + (rand() % 17); //Função que gera um número aleatorio no intervalo de 1 a 17
  else if (*quantidade > 17)
    *quantidade = 17;
}
/*Função que percorre a matriz e imprime cada posição. */
void ImprimirQuadro(char matriz[20][80]){
  for(int i = 0; i < 20; i++){
    for(int j = 0; j < 80; j++){
      printf("%c", matriz[i][j]);
    }
    printf("\n");
  }
}
