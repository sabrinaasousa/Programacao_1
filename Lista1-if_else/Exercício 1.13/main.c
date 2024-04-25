/*1.13. Crie um programa em linguagem C que receba três números inteiros, fora de ordem, e os imprima em ordem crescente.*/

#include <stdio.h>

int main(void) {
  int num1, num2, num3, aux;

  printf("Digite tres numeros:\n");
  scanf(" %d %d %d", &num1, &num2, &num3);

  if (num1 > num3){
    aux = num3;
    num3 = num1;
    num1 = aux;
  }
  if (num1 > num2){
    aux = num2;
    num2 = num1;
    num1 = aux;
  }
  if (num2 > num3){
    aux = num3;
    num3 = num2;
    num2 = aux;
  }

  printf("Os numeros em ordem crescente sao: %d %d %d", num1, num2, num3);
  return 0;
}