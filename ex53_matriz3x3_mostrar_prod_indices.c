/*Ex53) Faça um programa que crie uma matriz de 3x3x3 e atribua para cada elemento o valor do produto dos seus índices (i*j*k).*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int matriz [3] [3] [3];
	int i, j;
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++)	
		{
			printf ("i[%d]*j[%d] = %d\n", i+1, j+1, (i+1)*(j+1));
		}
	}
	return 0;
}
