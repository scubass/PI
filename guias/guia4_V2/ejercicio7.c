#include <stdio.h>
#include <assert.h>
#define isdigit(caracter) (caracter >= '0' && caracter <= '9') ? 1 : 0

int
main(void)
{
	char num1 = '2';
	char letra1 = 'a';
	char letra2 = '\t';
	char letra3 = '0';
	assert(isdigit(num1) == 1);
	assert(isdigit(letra1) == 0);
	assert(isdigit(letra2) == 0);
	assert(isdigit(letra3) == 0);
	puts("Todo ok ");
	return 0;


}

// Escribir la macro isdigit que dado un caracter indique si dicho caracter representa un dígito decimal o no.
