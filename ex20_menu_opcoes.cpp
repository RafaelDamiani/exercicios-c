/*E20) Fa�a um programa que apresente um �menu com 4 op��es�, leia um n�mero inteiro
entre 1 e 4 indicando a op��o do menu e para cada valor lido imprima, correspondentemente,
as frases �op��o 1�, �op��o 2�, �op��o 3�, �op��o 4�. Use o comando switch para resolver esse
exerc�cio. O programa encerra quando foi escolhido a op��o 4, nas demais condi��es dever�
apresentar o menu novamente e ler uma nova op��o.*/
#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i;
	
	
	do
	{
	printf ("Escolha uma op��o [1 a 4]: ");
	scanf ("%d", &i);
	switch (i)
	{
		case 1:
			printf ("op��o 1\n");
			break;
		case 2:
			printf ("op��o 2\n");
			break;
		case 3:
			printf ("op��o 3\n");
			break;
		case 4:
			printf ("op��o 4\n");
			break;
		default:
			printf ("op��o inv�lida!\n");
			break;				
	}
	}while (i != 4);
	printf ("\n");
	return 0;
}
