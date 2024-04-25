/*1.7. Crie um programa em linguagem C que receba um número inteiro e imprima na tela se ele é múltiplo de 7 ou não.*/

#include <stdio.h>

int main(void) {
  int num;
  printf("Digite um número:\n");
  scanf("%d", &num);

  if(num%7==0){
    printf("O número é múltiplo de 7");
  }
  else{
    printf("O número não é múltiplo de 7");
  }
  return 0;
}