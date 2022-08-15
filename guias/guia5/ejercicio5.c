#include <stdio.h>
#include <stdlib.h>
double potencia(double, int);

int
main(void)
{
	printf("2 al a 4 es: %g\n", potencia(2, 4));	
	printf("2 al a -4 es: %g\n", potencia(2, -4));	
	printf("-2 al a 4 es: %g\n", potencia(-2, 4));	
	printf("%g\n", potencia(0, 2));
	return 0;
}

double
potencia(double base, int exponente)
{
	int i;
	double auxiliar = 1.0;
	if ((exponente % 2 == 0 && base < 0)) {printf("Error\n"); return 1;};
	if (exponente < 0 && base != 0) {base = 1 / base;} else {printf("Error\n"); return 2;}

	for (i = 0; i < abs(exponente); i++) {
		auxiliar *= base;
	}
	return auxiliar;
}

// falta ver el tema del manejo de los errores
