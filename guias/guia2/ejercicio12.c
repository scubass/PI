#include <stdio.h>

int
main(void)
{
	printf("Introduzca un caracter\n");
	char caracter = getchar();

	if (caracter >= 'a' && caracter <= 'z') {
		printf("%c es una letra minúscula\n", caracter);
	} else if (caracter >= 'A' && caracter <= 'Z') {
		printf("%c es una letra Mayúscula\n", caracter);
	} else {
		printf("%c no es una letra\n", caracter);
	}
}
