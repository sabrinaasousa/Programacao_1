/*1.2. Crie um programa em linguagem C que receba dois números inteiros, calcule o produto destes números e imprima o resultado na tela.*/

#include <stdio.h>

int main(void) {
  int num1, num2, produto;
    printf("Digite o primeiro número:\n");
    scanf("%d", &num1);

    printf("Digite o segundo número:\n");
    scanf("%d", &num2);
  
    produto = num1 * num2;
  
    printf("O produto dos números é: %d", produto);
  
  return 0;
}