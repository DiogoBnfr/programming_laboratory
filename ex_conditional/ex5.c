/*
 * Author: Diogo Gonçalves Bonofre dos Santos
 */

#include <stdio.h>
#include <stdlib.h>

/* 
 * Escreva um algoritmo para ler 2 valores (considere que não serão 
 * informados valores iguais) e escrever o maior deles.
 */

int main(void) {
     int n1;
     int n2;
	
     puts("Insert first number:");
     scanf("%d", &n1);
     puts("Insert second number:");
     scanf("%d", &n2);

     if (n1 > n2) printf("%d", n1);
     else printf("%d", n2);
     puts(" is greater");

     return EXIT_SUCCESS;
}
