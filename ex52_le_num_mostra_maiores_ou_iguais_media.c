/*E52) Faça um programa que leia 10 números, coloque-os em um vetor e apresente os valores que forem maior ou igual a média dos números lidos.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	int cont, total;
	int num[10];
	float media, aux;
	total = 0;
	for (cont=0; cont<10; cont++){
		printf ("Digite o %dº número: ", cont+1);
		scanf ("%d", &num[cont]);
		total = total + num[cont];
	}
	printf ("Total %d\n", total);
	media = (float)total/10;
	printf ("Media %.2f\n", media);
	printf ("\nNúmeros maiores ou iguais à média:\n");
	for (cont=0; cont<10; cont++){		
		if (num[cont] >= media){
			printf ("%d\n", num[cont]);
		}
	}
	return 0;
}
