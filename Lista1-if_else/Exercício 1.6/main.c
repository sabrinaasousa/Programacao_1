/*1.6. Crie um programa em linguagem C que receba um número inteiro e imprima na tela se ele é par ou ímpar. */

#include <stdio.h>

int main(void) {
  int num;
  printf("Informe um número:\n");
  scanf("%d", &num);

  if((num % 2) == 0){
    printf("O número é par.\n");
  }
  else{
    printf("O número é ímpar.\n");
  }
  return 0;
}