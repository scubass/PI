#include <stdio.h>

// algo pasa con la compraración, da No son iguales por 
// ha ¿y un tema con type conversion
// hay que ver como es el casteo default entre 0.1 y float

int
main(void)
{
	float a = 0.1;

	if (a == (float)0.1) {
		printf("SON iguales \n");
	}
	else {
		printf("NO SON iguales: a vale %g que no es igual a 0.1\n", a);
	}

	return 0;
}
