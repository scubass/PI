#include <stdio.h>

int
main(void)
{
	char caracter1, caracter2;
	caracter1 = getchar();
	caracter2 = getchar();

	if (caracter1 > caracter2) {
		
		printf("El caracter %c es mayor a %c\n", caracter1, caracter2);
	} else if (caracter1 < caracter2) {

		printf("El caracter %c es menor a %c\n", caracter1, caracter2);
	}
	else {
		printf("suponiendo que son caracteres son iguales\n");
	}
	return 0;
}
