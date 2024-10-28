/*
 * Author: Diogo Gonçalves Bonofre dos Santos
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um algoritmo para ler um valor e escrever se é positivo ou negativo. 
 * Considere o valor zero como positivo
 */

int main(void) {
     int n = 0;
	
     puts("Insert a number: ");
     scanf("%d", &n);
	
     if (n >= 0) {
	  puts("Positive");
	  return EXIT_SUCCESS; 
     }
     puts("Negative");
     return EXIT_SUCCESS;
}
