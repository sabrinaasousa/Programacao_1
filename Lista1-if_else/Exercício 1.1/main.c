/*1.1. Crie um programa em linguagem C que imprima o nome na tela o nome de quem escreveu o programa.*/

#include <stdio.h>

int main(void) {
  char nome[30];
  printf("Informe o nome de quem criou o programa:\n");
  scanf(" %s", nome);

  printf("O nome de quem criou o programa eh: %s", nome);
  return 0;
}