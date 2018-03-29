/*E9)Faça um programa que leia um número de ponto flutuante e apresente em linhas
separadas a parte inteira e a parte fracionária.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num, num_decimal;
	int num_inteiro;
	
	printf ("Digite um número real: ");
	scanf ("%f", &num);	
	printf ("\nNumero digitado: %.4f\n\n", num);
	num_inteiro = ((int)num);
	num_decimal = (num - num_inteiro);
	printf("Parte inteira: %d\n", num_inteiro);
	printf("Parte fracionária: %.4f\n", num_decimal);
	
	return 0;
}