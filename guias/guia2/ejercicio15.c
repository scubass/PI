#include <stdio.h>


int
main(void)
{
	printf("Introduzca una letra\n");
	char caracter = getchar();	
	if (caracter >= 'a' && caracter <= 'z') {
		printf("%c\n", caracter - ('a' - 'A'));
		printf("%d\n", 'a' - 'A');

	}
	else {
		printf("no ingreso una minúscula\n");
	}
	return 0;
}
