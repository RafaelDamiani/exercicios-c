/*E6) Faça um programa que faça a operação de swap entre as variáveis x e y, sem o uso de uma
terceira variável, utilizando apenas operadores aritméticos.*/
#include <stdio.h>

int main (void)
{
	int x=5, y=-10;
	printf ("x=%d  y=%d\n", x, y);
	//complementar aqui
	y = x;
	x = -x*2;
	printf ("x=%d  y=%d\n", x, y);
}