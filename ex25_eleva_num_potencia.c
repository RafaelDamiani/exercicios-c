/*E25) Faça um programa que leia dois valores inteiros (A e B) e apresente o resultado da operação de A elevado a B.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	int base, expoente, potencia, i;
	printf ("Digite a base: ");
	scanf ("%d", &base);
	printf ("Digite o expoente: ");
	scanf ("%d", &expoente);
	potencia = 1;
	for (i=1; i <= expoente; i++)
	{
		potencia = potencia * base;
	}	
	// ou
	//potencia = pow(base, expoente);
	printf ("A base %d elevada ao expoente %d é igual a: %d\n", base, expoente, potencia);
	return 0;
}
