/*E6) Fa�a um programa que fa�a a opera��o de swap entre as vari�veis x e y, sem o uso de uma
terceira vari�vel, utilizando apenas operadores aritm�ticos.*/
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