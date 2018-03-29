/*E56) Fa�a um programa que leia 10 n�meros entre 1 e 5, armazene-os em um vetor e apresente-os em forma de histograma (valor tabula��o ocorr�ncia/frequ�ncia).*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	int num[10];
	int cont;
	int contnums[5] = {0,0,0,0,0};
	//int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;
	for (cont = 0; cont < 10; cont++)
	{
		printf ("Digite o %d n�mero: ", cont+1);
		scanf ("%d", &num[cont]);
		if (num[cont] < 1)
		{
			printf ("\nN�mero menor que 1, digite algum n�mero dentro dos par�metros!\n");
			printf ("Digite o %d n�mero: ", cont+1);
			scanf ("%d", &num[cont]);
		}
		if (num[cont] > 5)
		{
			printf ("\nN�mero maior que 5, digite algum n�mero dentro dos par�metros!\n");
			printf ("Digite o %d n�mero: ", cont+1);
			scanf ("%d", &num[cont]);
		}
		if (num[cont] == 1)
		{
			contnums[0] = contnums[0]+1;
		}
		if (num[cont] == 2)
		{
			contnums[1] = contnums[1]+1;
		}
		if (num[cont] == 3)
		{
			contnums[2] = contnums[2]+1;
		}
		if (num[cont] == 4)
		{
			contnums[3] = contnums[3]+1;
		}
		if (num[cont] == 5)
		{
			contnums[4] = contnums[4]+1;
		}
	}
	printf (" N�mero\t|Frequ�ncia\n");
	for (cont = 0; cont < 5; cont++)
	{
		printf ("%4.d\t|%5.d\n", cont+1, contnums[cont]);
	}
	return 0;
}
