#include <stdio.h>
#include "guias/getnum.h"
void hola (void);

int
main(void)
{
	int number = getint("Ingrese un número señor");
	printf("el número ingresado es: %d\n", number);
	printf("Hello world, asi estamos ahora si anda esto\n");
}

void
hola (void)
{
	printf("Hello, world");
}
