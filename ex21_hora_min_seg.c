/*E21) Faça um programa que leia 6 números que representem respectivamente os valores de
hora1, minuto1, segundo1, hora2, minuto2 e segundo2. O programa deve verificar as entradas
para que hora seja informada entre 0 e 23, minutos e segundos de 0 a 59. Por fim o programa
deve mostrar a diferença entre as duas entradas na forma de horas : minutos : segundos.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
	setlocale (LC_ALL, "portuguese");
 	unsigned int hora1, minuto1, segundo1, hora2, minuto2, segundo2, dif_hora, dif_minuto, dif_segundo, aux_min, aux_seg;
	
	do
	{
		printf ("Digite o 1º horário (hh:mm:ss): ");
		scanf ("%d%*c%d%*c%d", &hora1, &minuto1, &segundo1);
		printf ("Digite o 2º horário (hh:mm:ss): ");
		scanf ("%d%*c%d%*c%d", &hora2, &minuto2, &segundo2); 
		aux_min = minuto1;
		aux_seg = segundo1;
		if (hora1 > 24 || hora2 > 24 || minuto1 > 59 || minuto2 > 59 || segundo1 > 59 || segundo2 > 59)
		{
			printf ("Algum parâmetro foi preenchido incorretamente\n");
		}
		if (minuto1 < minuto2)
		{
			hora1 = hora1 - 1;
			aux_min = minuto1 + 60;
		}
		if (segundo1 < segundo2)
		{
			minuto1 = minuto1 - 1;
			aux_seg = segundo1 + 60;
		}
		dif_hora = hora1 - hora2;
		dif_minuto = aux_min - minuto2;
		dif_segundo = aux_seg - segundo2;
		printf ("A diferença entra horas, minutos e segundos é: %.2d:%.2d:%.2d\n", dif_hora, dif_minuto, dif_segundo);
	}while (hora1 > 24 || hora2 > 24 || minuto1 > 59 || minuto2 > 59 || segundo1 > 59 || segundo2 > 59); 
	
	return 0;
}