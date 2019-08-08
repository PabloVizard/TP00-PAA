#include <stdlib.h>
#include <stdio.h>

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
void MenuEscolha1(){
  printf("Digite o tipo de figura basica desejada: ");
}
void MenuEscolha2(){
  printf("Digite a quantidade de figuras (menor ou igual a zero para aleatorio): ");
}
