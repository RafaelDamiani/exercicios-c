#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x= 10;
	double y = 20.50, soma ;
	char z = 'a';
	int *px;
	px = &x;
	double *py = &y;
	char *pz;
	pz = &z;
	soma = *px + *py;
	printf ("Soma de px + py: %d + %.2f = %.2f\n", *px, *py, *px+*py);	
	printf ("Endereco x %d valor x %d\n", px, *px);
	printf ("Endereco y %d valor y %.2f\n", py, *py);
	printf ("Endereco z %d valor z %c\n", pz, *pz);

	getchar ();
	return 0;
}