#include <stdio.h>

int main(int argc, char *argv[])  {
	int i;
	for (i=1; i<10; i++)  {
		if (i%3==0)
			goto LONGE;
		printf ("%d\t", i);
	}
	LONGE:
	printf("\n\n");
}
