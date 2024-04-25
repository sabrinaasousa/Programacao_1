/*1.5. Crie um programa em linguagem C que receba um tempo em anos e imprima quantos dias são equivalentes ao tempo informado. Ex. 3 anos equivalem a 1095 dias.*/

#include <stdio.h>

int main(void) {
  int anos;
  printf("Informe os anos a serem convertidos:\n");
  scanf("%d", &anos);

  anos = anos * 365;
  printf("O tempo informado equivale a %d dias", anos);
  return 0;
}