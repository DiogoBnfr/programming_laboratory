// Author: Diogo Gonçalves Bonofre dos Santos

#include <stdio.h>
#include <stdlib.h>

/*
 * Faça um algoritmo que leia um vetor de 80 posições e encontre o menor valor.
 * Mostre-o juntamente com seu número de ordem (posição).
 */

int main(void) {
  int foo[80] = {45, 87, 22, 13, 76, 38, 59, 3,  62, 71, 14, 48, 5,  29, 67, 50,
                 92, 84, 20, 11, 78, 9,  56, 35, 46, 64, 19, 28, 86, 41, 15, 24,
                 77, 60, 39, 81, 43, 7,  53, 90, 66, 31, 73, 8,  21, 61, 42, 80,
                 1,  30, 54, 17, 68, 26, 75, 57, 18, 27, 32, 69, 72, 40, 52, 23,
                 74, 85, 58, 33, 63, 16, 82, 70, 47, 51, 44, 25, 93, 94, 6,  4};
  int min_value = foo[0];
  int min_pos = 0;

  for (int i = 0; i < sizeof(foo) / sizeof(int); i++) {
    if (foo[i] < min_value) {
      min_value = foo[i];
      min_pos = i;
    }
  }

  printf("Min Value: %d; Min Position: %d\n", min_value, min_pos);
}