/*1.8. Crie um programa em linguagem C que receba dois números inteiros e imprima na tela qual é o maior deles.*/
#include <stdio.h>

int main(void) {
  int num1, num2;
  printf("Informe dois números:\n");
  scanf( "%d %d", &num1, &num2);

  if (num1 > num2){
    printf("O maior número é: %d\n", num1);
  }
  else if (num2 > num1){
    printf("O maior número é: %d\n", num2);
  }
  else{
    printf("Os números são iguais.\n");
  }
  return 0;
}