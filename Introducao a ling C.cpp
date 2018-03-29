#include <stdio.h>
#include <stdlib.h>

int main() {
	printf ("Bem vindo ao curso de linguagem C! \n");
	/* '\n' significa 'new line', ou seja, uma nova linha após
	acabar o conteudo da linha */
	
	int num1, num2, soma;
	printf ("Digite o primeiro numero: \n");
	scanf("%d", &num1);
	printf ("Digite  o segundo numero: \n");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	
	printf("Soma: %d\n", soma);
}
