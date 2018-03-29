/*E7) Fa�a um programa que fa�a a opera��o de swap entre as vari�veis x e y, sem o uso de uma
terceira vari�vel, utilizando apenas operadores bin�rios.*/
#include <stdio.h>

int main(void)
{
	int x=5, y=-10;
	printf("x=%d  y=%d\n",x, y);
	x ^= y; //0011 ou 1010 = 1001 == x
	y ^= x; //1001 ou 1010 = 0011 == y
	x ^= y; //1001 ou 0011 = 1010 == x
	printf("x=%d  y=%d\n",x, y);
}