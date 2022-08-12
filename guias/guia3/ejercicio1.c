#include <stdio.h>


int
main(void)
{
	char caracter = getchar();

	if ((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z')) {
		(caracter <= 'Z') ? printf("%c es una letra mayúscula\n", caracter) : printf("%c es una letra minúscula\n", caracter);
	} else {
		printf("%c no es una letra\n", caracter);
	}
	return 0;
}



// Leer un caracter desde la entrada estándar e imprimir por salida estándar si el
// caracter es una letra o no y, en caso de ser una letra, indicar si es letra mayúscula o
// minúscula, sin tener en cuenta el caracter ‘ñ’. (En no más de 15 líneas).
