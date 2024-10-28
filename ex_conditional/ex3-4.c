/*
 * Author: Diogo Gonçalves Bonofre dos Santos
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Escreva um algoritmo para ler as notas das duas avaliações de um 
 * aluno no semestre, calcular e escrever a média semestral e a 
 * seguinte mensagem: ‘PARABÉNS! Você foi aprovado’ somente se o 
 * aluno foi aprovado (considere 6.0 a nota mínima para aprovação)
 *
 * Acrescente ao exercício acima a mensagem ‘Você foi REPROVADO! 
 * Estude mais’ caso a média calculada seja menor que 6,0
 */

int main(void) {
     float g1 = 0;
     float g2 = 0;
	
     puts("Insert first grade:");
     scanf("%f", &g1);
     puts("Insert second grade:");
     scanf("%f", &g2);
	
     float avg = (g1 + g2) / 2;
	
     printf("Final grade: %.2f\n", avg);
     if (avg >= 6.0)
	  puts("PARABÉNS! Você foi aprovado");
     else
	  puts("Você foi REPROVADO! Estude mais");
	
     return EXIT_SUCCESS;
}

