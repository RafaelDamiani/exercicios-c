/*E8)Faça um programa que leia 10 números inteiros e apresente o maior (não utilize
vetor/matriz).*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
	int cont = 1, num, aux;
	while (cont <= 10)
	{		
		printf ("Digite  o %d numero: ", cont);
		++cont;
		scanf ("%d", &num);
		if (num > aux)
		{
			aux = num;
		}
	}
	printf ("\n\n");
	printf ("O maior numero digitado foi: %d\n", aux);
	return 0;
}


