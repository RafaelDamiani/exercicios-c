/*E19) Fa�a um programa que leia um n�mero inteiro e apresente o valor correspondente em
decimal, hexadecimal, octal e bin�rio.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	char j[10];
	
	printf ("Digite um n�mero inteiro: ");
	scanf ("%d", &i);
	
	itoa (i, j, 2);
	
	printf ("Decimal: %d\n", i);
	printf ("Hexadecimal: %x\n", i);
	printf ("Octal: %o\n", i);
	printf ("Binario: %s\n", j);
	 
	return 0;
}