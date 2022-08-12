#include <stdio.h>
#include "../getnum2.c"

int
main(void)
{
	// funciona solo hasta 1023
	int num = getint("Introduzca un número\n");
	int numero = 0;
	int posicion = 1;
	while (num > 0) {
		numero += (num % 2) * posicion;
		posicion *= 10;
		num /= 2;
	}

	printf("%d\n", numero);
	return 0;
}

