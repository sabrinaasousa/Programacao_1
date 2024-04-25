/*1.9. Considerando que uma lasanha de presunto e queijo possui 7,3%, 11,7% e 6,0% da sua massa, respectivamente, em gordura, carboidratos e proteínas. Considerando também que gordura, carboidrato e proteína possuem respectivamente 9, 4 e 4 calorias por grama. Crie um programa em linguagem C que receba o peso de lasanha e calcule a quatidade total de calorias da porção informada.*/
#include <stdio.h>
#define g 9
#define c 4
#define p 4

int main(void) {
  float peso;
  printf("Informe o peso da lasanha:\n");
  scanf("%f", &peso);

  peso = (peso * g) + (peso * c) + (peso * p);
  printf("A quantidade total de calorias da porção informada é: %.2f", peso);
  return 0;
}