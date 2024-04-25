/*1.3. Crie um programa em linguagem C que receba uma temperatura em graus fahrenheit (F) e a converta para graus celsius (C). C = 5 × F −32 9*/
#include <stdio.h>

int main(void) {
  int C, F;
  printf("Digite a temperatura em graus fahrenheit:\n");
  scanf("%d", &F);

  C = 5 * (F - 32) / 9;

  printf("A temperatura em graus celsius eh: %d C", C);
  return 0;
}