/*E15) Fa�a um programa que leia dois n�meros inteiros e apresente o MAIOR DIVISOR COMUM
entre os dois n�meros.*/
/*Link do site que utilizei como base: http://www.somatematica.com.br/fundam/mdc.php
 -topico: C�LCULO DO MDC PELO PROCESSO DAS DIVIS�ES SUCESSIVAS*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	int n1, n2, resto, aux, mdc, pnum, snum, divi;
	
	printf ("Digite o primeiro n�mero: ");
	scanf ("%d", &n1);
	printf ("Digite o segundo n�mero: ");
	scanf ("%d", &n2);
	printf ("------------------------------\n");
	pnum = n1;
	snum = n2;
	if (n2 > n1)
	{
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	printf ("1�num / 2�num = resto\n\n");
	do
	{
		resto = (n1 % n2);
		printf ("%d / %d = %d\n", n1, n2, resto);
		n1 = n2;
		n2 = resto;
		resto = 0;
	} 
	while ((n1 % n2) != 0);
	
	if (n1 % n2 == 0)
	{
		printf ("%d / %d = %d\n", n1, n2, resto);
		mdc = n2;
		printf ("O MDC dos n�meros %d e %d �: %d\n", pnum, snum, mdc);
	}
	return 0;
}
