#include <stdio.h>

#include "../getnum2.c"

int
main(void)
{
	int num1, num2;
	num1 = getint("Introduzca el primer número\n");
	num2 = getint("Introduzca el segundo número\n");

	if (num1 > num2) {
		printf("El menor es %d\n", num2);
		printf("El mayor es %d\n", num1);
		printf("no son iguales\n");
		printf("El promedio es %.2f\n", (float)num1 / (float)num2);
		printf("La suma es %d\n", num1 + num2);
	} else if (num1 < num2) {
		printf("El menor es %d\n", num1);
		printf("El mayor es %d\n", num2);
		printf("no son iguales\n");
		printf("El promedio es %.2f\n", (float)num1 / (float)num2);
		printf("La suma es %d\n", num1 + num2);

	} else {
		printf("Los números ingresados son iguales\n");
	}
}
