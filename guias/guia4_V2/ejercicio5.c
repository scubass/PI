#include <stdio.h>
#include <assert.h>
#define MAXIMO2(num1, num2, num3) (num3 = (num1) > (num2) ? (num1) : (num2));
#define MAX2(num1, num2, num3) {if ((num1) > (num2)) num3 = num1; \
						else num3 = num2; }\


int
main(void)
{
	int num1, num2, num3;
	num1 = 5;
	num2 = 10;
	MAXIMO2(num1, num2, num3);
	assert(num3 == 10);
	
	double var1 = 10.0, var2 = 412.0, var3;
	MAXIMO2(var1, var2, var3);
	assert(var3 == 72.0);
	puts("OK !");
	return 0;

}


// Escribir una macro MAXIMO2 que recibiendo tres parámetros, asigne al tercer parámetro el mayor
// de los dos primeros. Utilizarla en un programa para verificar su correcto funcionamiento. (En no más de 5
// líneas)
