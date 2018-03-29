/*E56) Faça um programa que leia 10 números entre 1 e 5, armazene-os em um vetor e apresente-os em forma de histograma (valor tabulação ocorrência/frequência).*/
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
		printf ("Digite o %d número: ", cont+1);
		scanf ("%d", &num[cont]);
		if (num[cont] < 1)
		{
			printf ("\nNúmero menor que 1, digite algum número dentro dos parâmetros!\n");
			printf ("Digite o %d número: ", cont+1);
			scanf ("%d", &num[cont]);
		}
		if (num[cont] > 5)
		{
			printf ("\nNúmero maior que 5, digite algum número dentro dos parâmetros!\n");
			printf ("Digite o %d número: ", cont+1);
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
	printf (" Número\t|Frequência\n");
	for (cont = 0; cont < 5; cont++)
	{
		printf ("%4.d\t|%5.d\n", cont+1, contnums[cont]);
	}
	return 0;
}
