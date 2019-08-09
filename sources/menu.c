#include <stdlib.h>
#include <stdio.h>

//Funções dos menus
void MenuPrincipal(){
  printf("PROGRAMA GERADOR DE OBRA DE ARTE:\n");
  printf("=================================\n");
  printf("Escolha o tipo de figura basica a ser usada para criar a obra:\n");
  printf("1 - asterisco simples.\n");
  printf("2 - simbolo de soma com asteriscos.\n");
  printf("3 - letra X com asteriscos.\n");
  printf("4 - figuras aleatorias\n");
  printf("5 ou qualquer outro numero – opcao de obra de arte criada pelo aluno\n");
}
void MenuEscolhaFigura(){
  printf("Digite o tipo de figura basica desejada: ");
}
void MenuEscolhaQuantidade(){
  printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio): ");
}
void MenuQuadro(int opcao, int quantidade){
  printf("Opcao Escolhida: %d\n", opcao);
  printf("Quantidade Escolhida: %d\n", quantidade);
  switch (opcao) {
    case 1:
      printf("================================================================================\n");
      printf("                              ASTERISCOS SIMPLES\n");
      printf("================================================================================\n");
      break;
    case 2:
      printf("================================================================================\n");
      printf("                        SIMBOLO DE SOMA COM ASTERISCOS\n");
      printf("================================================================================\n");
      break;
    case 3:
      printf("================================================================================\n");
      printf("                           LETRA X COM ASTERISCOS\n");
      printf("================================================================================\n");
      break;
    case 4:
      printf("================================================================================\n");
      printf("                                   ALEATÓRIOS\n");
      printf("================================================================================\n");
      break;
    default:
      printf("================================================================================\n");
      printf("                                 PACMAN\n");
      printf("================================================================================\n");
      break;
  }

}
