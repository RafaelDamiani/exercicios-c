/*E10)  Fa�a um programa que leia uma lista de n�meros inteiros terminados por 0, para cada
n�mero lido o programa deve informar o n�mero e se o n�mero � par ou �mpar. N�o utilize
vetores/matrizes.
*/
#include <stdio.h>

int main()
{
	int cont, num;
	
	printf ("Digite apenas numeros terminados em 0\n\n");
	for (cont=1; cont<=10; cont++)
	{
		printf ("Digite o %d* numero: ", cont);
		scanf ("%d", &num);
		printf ("\nNumero digitado: %d\n", num);
		if (num % 2 == 0)
		{
			printf ("O numero e par\n");
			printf ("-----------------------------\n");	
		} 
		else
		{
			printf ("O numero e impar\n");
			printf ("-----------------------------\n");
		}	
	}
	return 0;
}
