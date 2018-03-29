/*E22) Faça o programa “adivinha o número que pensei”, nesse programa o computador deverá
sortear um número entre 0 e 100 e dar 10 chances para o jogador acertar. A cada número
informado pelo jogador o programa deve informar se acertou quando o número informado
corresponder ao sorteado, ou se o número informado é maior ou menor que o número
sorteado. Após as 10 chances o programa deve informar o número sorteado.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	int cont, aleatorio, palpite;
	srand (time(NULL));
	aleatorio = (rand() % 100);
	printf ("Digite um número entre 0 e 100\n\n");
	do
	{
		cont++;
		printf ("Digite o %dº palpite: ", cont);
		scanf ("%d", &palpite);
		if (palpite != aleatorio)
		{
			if (palpite > aleatorio)
				printf ("O número informado é maior que o número gerado\n\n");
			else if (palpite < aleatorio)
				printf ("O número informado é menor que o número gerado\n\n");	
		}
			else if (palpite == aleatorio)
				printf ("Acertou!\n");
		if (cont == 10 && palpite != aleatorio)
		{
			printf ("\n--------------------------------------------------\n");
			printf ("O número gerado aleatoriamente é %d\n", aleatorio);
		}
	} while (cont < 10 && palpite != aleatorio);
	return 0;
}
