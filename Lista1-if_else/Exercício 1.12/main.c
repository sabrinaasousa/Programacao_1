/*1.12. Crie um programa em linguagem C que receba tres numeros inteiros e imprima na tela qual é o maior deles.*/
#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("informe tres numeros:\n");
  scanf("%d %d %d", &a, &b, &c);

  if(a>b && a>c){
    printf("o maior numero eh: %d", a);
  }
  else if(b>a && b>c){
    printf("o maior numero eh: %d", b);
  }
  else if(c>a && c>b){
    printf("o maior numero eh: %d", c);
  }
  else{
    printf("os numeros são iguais");
  }
  return 0;
}