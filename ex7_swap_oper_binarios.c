/*E7) Faça um programa que faça a operação de swap entre as variáveis x e y, sem o uso de uma
terceira variável, utilizando apenas operadores binários.*/
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