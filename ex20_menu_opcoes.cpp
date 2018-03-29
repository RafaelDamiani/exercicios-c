/*E20) Faça um programa que apresente um “menu com 4 opções”, leia um número inteiro
entre 1 e 4 indicando a opção do menu e para cada valor lido imprima, correspondentemente,
as frases “opção 1”, “opção 2”, “opção 3”, “opção 4”. Use o comando switch para resolver esse
exercício. O programa encerra quando foi escolhido a opção 4, nas demais condições deverá
apresentar o menu novamente e ler uma nova opção.*/
#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i;
	
	
	do
	{
	printf ("Escolha uma opção [1 a 4]: ");
	scanf ("%d", &i);
	switch (i)
	{
		case 1:
			printf ("opção 1\n");
			break;
		case 2:
			printf ("opção 2\n");
			break;
		case 3:
			printf ("opção 3\n");
			break;
		case 4:
			printf ("opção 4\n");
			break;
		default:
			printf ("opção inválida!\n");
			break;				
	}
	}while (i != 4);
	printf ("\n");
	return 0;
}
