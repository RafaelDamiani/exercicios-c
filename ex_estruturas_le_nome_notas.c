/*EXERCICIO: Faça um programa que leia o nome e duas notas de cinco alunos. Após a leitura, o programa deve apresentar os nomes, as notas e as respectivas médias. 
Utilize sctruct para armazenar o nome e as duas notas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct estrutura {
		char nome[30];
		int nota1, nota2;
};  

int main(void){
	setlocale (LC_ALL, "portuguese");
	struct estrutura alunos;
	int vet[5], i;
	printf ("Registro de alunos\n");
	for (i=0; i<=4, i++){
		printf ("Digite o nome do %dº aluno: ", i);
		gets (vet[i].nome);
		printf ("Digite a primeira nota:");
		scanf ("%d", vet[i].nota1);
		printf ("Digite a segunda nota:");
		scanf ("%D", vet[i].nota2);
		
	}
		
	
}