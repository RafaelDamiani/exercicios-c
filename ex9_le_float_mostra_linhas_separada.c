/*E9)Fa�a um programa que leia um n�mero de ponto flutuante e apresente em linhas
separadas a parte inteira e a parte fracion�ria.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num, num_decimal;
	int num_inteiro;
	
	printf ("Digite um n�mero real: ");
	scanf ("%f", &num);	
	printf ("\nNumero digitado: %.4f\n\n", num);
	num_inteiro = ((int)num);
	num_decimal = (num - num_inteiro);
	printf("Parte inteira: %d\n", num_inteiro);
	printf("Parte fracion�ria: %.4f\n", num_decimal);
	
	return 0;
}