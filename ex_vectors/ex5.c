// Author: Diogo Gonçalves Bonofre dos Santos

#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A
 * seguir, conte quantos valores pares existem no vetor.
 */

int main(void) {
  int x[20] = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
               11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

  int count = 0;
  for (int i = 0; i < 20; i++) {
    if (x[i] % 2 == 0)
      count++;
  }

  printf("Existem %d valores pares no vetor X.", count);
}