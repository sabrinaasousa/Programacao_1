/*1.10. Crie um programa em linguagem C que receba dez números reais e retorne qual é a soma de todos os números informados.*/

#include <stdio.h>

int main(void) {
  float num[10], soma = 0;
  int i;

  for (i = 0; i < 10; i++){
    printf("Digite um número:\n");
    scanf("%f", &num[i]);
    soma = soma + num[i];
  }
  printf("A soma dos números é: %.2f", soma);
  return 0;
}