// Author: Diogo Gonçalves Bonofre dos Santos

#include <stdio.h>
#include <stdlib.h>

/*
 * Preencher um vetor B de 10 elementos com o número 10 se o índice do elemento
 * for ímpar, e com o número 20 se for par. Escrever o vetor B após o seu total
 * preenchimento.
 */

int main(void) {
  int b[10];

  for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
      b[i] = 20;
    } else {
      b[i] = 10;
    }
  }

  for (int j = 0; j < 10; j++) {
    printf("%d ", b[j]);
  }

  return EXIT_SUCCESS;
}
