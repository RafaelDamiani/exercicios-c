/*E19) Fa�a um programa que leia um n�mero inteiro e apresente o valor correspondente em
decimal, hexadecimal, octal e bin�rio.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	char bin[8];
	
	printf ("Digite um n�mero: ");
	scanf ("%d", &num);
	printf ("----------------------------------\n");
	printf ("Representa��o em: \n\n");
	printf ("Decimal: %d\n", num);
	printf ("Hexadecimal: %x\n", num);
	printf ("Octal: %o\n", num);
	itoa (num, bin, 2); //fun��o que transforma decimal em bin�rio
	printf ("Bin�rio: %s\n", bin);
	
	return 0;	
}
