/*
 * Author: Diogo Gonçalves Bonofre dos Santos
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um algoritmo para ler um valor numérico inteiro positivo ou negativo 
 * e apresentar o valor lido como sendo um valor positivo, ou seja, se o valor 
 * lido for menor ou igual a zero, ele deve ser multiplicado por -1.
 */

int main(void) {
     int n = 0;
     puts("Insert a number:");
     scanf("%d", &n);
     if (n <= 0) n *= -1;
     printf("%d\n", n);
     return EXIT_SUCCESS;
}
