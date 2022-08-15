#include <stdio.h>

int cubo(int num);

int
main(void)
{
	int x;

	for (x = 1; x <= 5; x++) {
		printf("El cubo de %d es %4d\n", x, cubo(x));
	}

	return 0;
}


int
cubo(int num)
{
	return num * num * num;
}


// normalmente cuando se termina una función las variabiles definidas en el scope son dropeadas de memoria
// en este caso el static int en cubo da lo mismo, lo único que haría es guardar el cuadrado del número en memoria
