/*E19) Faça um programa que leia um número inteiro e apresente o valor correspondente em
decimal, hexadecimal, octal e binário.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	char bin[8];
	
	printf ("Digite um número: ");
	scanf ("%d", &num);
	printf ("----------------------------------\n");
	printf ("Representação em: \n\n");
	printf ("Decimal: %d\n", num);
	printf ("Hexadecimal: %x\n", num);
	printf ("Octal: %o\n", num);
	itoa (num, bin, 2); //função que transforma decimal em binário
	printf ("Binário: %s\n", bin);
	
	return 0;	
}
