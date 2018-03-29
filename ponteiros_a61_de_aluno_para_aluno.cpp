#include <stdio.h>
#include <stdlib.h>

int main(void){
	int x, y, a, b;
	x = 10;
	y = 20;
	a = 10;
	b = 20;
	int *ponteiro, *ponteiro2;
	ponteiro = &x;
	ponteiro2 = &a;
	*ponteiro2 = b;


	printf ("endereco x %d \n", &x);
	printf ("endereco y %d \n", &y);
	printf ("ponteiro %d \n", ponteiro);
	printf ("valor ponteiro %d \n", *ponteiro);
	printf ("valor x %d \n", x);
	printf ("valor y %d \n", y);
	
	printf ("endereco a %d \n", &a);
	printf ("endereco b %d \n", &b);
	printf ("ponteiro2 %d \n", ponteiro2);
	printf ("valor ponteiro2 %d \n", *ponteiro2);
	printf ("valor a %d \n", a);
	printf ("valor b %d \n", b);	
	getchar();
	return 0;
}
