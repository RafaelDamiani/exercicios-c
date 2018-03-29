/*E22) Fa�a o programa �adivinha o n�mero que pensei�, nesse programa o computador dever�
sortear um n�mero entre 0 e 100 e dar 10 chances para o jogador acertar. A cada n�mero
informado pelo jogador o programa deve informar se acertou quando o n�mero informado
corresponder ao sorteado, ou se o n�mero informado � maior ou menor que o n�mero
sorteado. Ap�s as 10 chances o programa deve informar o n�mero sorteado.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	int cont, aleatorio, palpite;
	srand (time(NULL));
	aleatorio = (rand() % 100);
	printf ("Digite um n�mero entre 0 e 100\n\n");
	do
	{
		cont++;
		printf ("Digite o %d� palpite: ", cont);
		scanf ("%d", &palpite);
		if (palpite != aleatorio)
		{
			if (palpite > aleatorio)
				printf ("O n�mero informado � maior que o n�mero gerado\n\n");
			else if (palpite < aleatorio)
				printf ("O n�mero informado � menor que o n�mero gerado\n\n");	
		}
			else if (palpite == aleatorio)
				printf ("Acertou!\n");
		if (cont == 10 && palpite != aleatorio)
		{
			printf ("\n--------------------------------------------------\n");
			printf ("O n�mero gerado aleatoriamente � %d\n", aleatorio);
		}
	} while (cont < 10 && palpite != aleatorio);
	return 0;
}
