// Author: Diogo Gonçalves Bonofre dos Santos

#include <stdio.h>
#include <stdlib.h>

/*
 * Preencher um vetor A de 10 elementos (índices de 0 a 9) com os números
 * inteiros 10,20,30,40,50,...,100. Escrever o vetor A após o seu total
 * preenchimento.
 */

int main(void) {
  int A[10];
  int n = 0;

  for (int i = 0; i < 10; i++) {
    n += 10;
    A[i] = n;
  }

  for (int j = 0; j < 10; j++) {
    printf("%d ", A[j]);
  }
}