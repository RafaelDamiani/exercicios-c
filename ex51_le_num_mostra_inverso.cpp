/*E51) Fa�a um programa que leia 4 n�meros, coloque-os em um vetor e apresente-os na ordem inversa da leitura.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () 
{
	setlocale(LC_ALL, "portuguese");
	int num[4];
	int cont;
	for (cont = 0; cont < 4; cont++)
	{
		printf ("Digite a %d� nota do aluno: ", cont+1);
		scanf ("%d", &num[cont]);
	}	
	for (cont = 3; cont > -1; cont--)
	{
		printf ("%d� n�mero: %d\n", cont+1, num[cont]);
	}
	return 0;
}
