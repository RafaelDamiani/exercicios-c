/*E24) Fa�a um programa que leia um n�mero de ponto flutuante e apresente o resultado do valor arredondado. N�o use fun��es da biblioteca.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	setlocale (LC_ALL, "portuguese");
	float num;
	printf ("Digite um n�mero real: ");
	scanf ("%f", &num);
	printf ("N�mero arredondado: %.f\n", num);
	return 0;
}
