/*E24) Faça um programa que leia um número de ponto flutuante e apresente o resultado do valor arredondado. Não use funções da biblioteca.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	setlocale (LC_ALL, "portuguese");
	float num;
	printf ("Digite um número real: ");
	scanf ("%f", &num);
	printf ("Número arredondado: %.f\n", num);
	return 0;
}
