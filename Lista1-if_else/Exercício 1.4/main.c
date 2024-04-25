/*1.4. Crie um programa em linguagem C que receba a altura e o peso de uma pessoa e imprima na tela o índice de massa corporal (IMC). IMC = (massa/ altura×altura)*/

#include <stdio.h>

int main(void) {
  float altura, peso, imc;
  printf("Informe o peso:\n");
  scanf("%f", &peso);
  printf("Informe a altura:\n");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("O IMC é: %.2f", imc);
  return 0;
}