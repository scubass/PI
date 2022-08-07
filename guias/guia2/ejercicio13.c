#include <stdio.h>

# include "../getnum2.c"

int
main(void) 
{
	int num1 = getint("Ingrese el primer número");
	int num2 = getint("Ingrese el segundo número");

	if (num2 % num1 == 0) {
		printf("%d es un múltiple de %d, pues %d = %d * %d\n", num2, num1, num2, num1, num2 / num1);
	} else {
		printf("%d no es un múltiple de %d\n", num2, num1);
	}
}
