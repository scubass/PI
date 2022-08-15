#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../../getnum.h"


int lugar (int num, int pos);

int
main (void)
{
	int boleto, lugares, esCapicua = 1;
	int j;

	boleto = getint("Ingrese un número: ");
	lugares = snprintf( NULL, 0, "%d", boleto );

	int media = lugares / 2;

	for (j = 1; j <= media ; j++) {
		if (lugar(boleto, j) != lugar(boleto, lugares - j + 1)) {
			esCapicua = 0;
			break;
		}
	}

	return (esCapicua) ? 1 : 0;
}

int
lugar (int num, int pos)
{
	return (num / (int) pow(10, pos - 1)) % 10;
}



// snprintf( NULL, 0, %d, boleto); al usar snprintf con los parametros NULL, 0 nos indica el length del parametro
