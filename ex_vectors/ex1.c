// Author: Diogo Gonçalves Bonofre dos Santos

#include <stdio.h>
#include <stdlib.h>

/*
 * Preencher um vetor X de 10 elementos (índices de 0 a 9) com o valor inteiro
 * 30. Escrever o vetor X, após seu total preenchimento.
 */

int main(void) {
  int x[10];

  for (int i = 0; i < 10; i++) {
    x[i] = 30;
  }

  for (int j = 0; j < 10; j++) {
    printf("%d ", x[j]);
  }

  return EXIT_SUCCESS;
}