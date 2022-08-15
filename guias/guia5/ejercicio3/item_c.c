#include <stdio.h>
#include <math.h>
#include "../../getnum.h"
int check_digitos(int);


int lugar (int num, int pos);

int
main (void)
{
	int boleto, esCapicua = 1;
	int j;
	
	do {
		boleto = getint("Ingrese el número del boleto: ");
	} while ( ! check_digitos(boleto));

	for (j = 1; j <= 2; j++) {
		if (lugar(boleto, j) != lugar(boleto, 5 - j + 1)) {
			esCapicua = 0;
			break;
		}
	}

	printf("El boleto %ses capicúa\n", (esCapicua) ? "" : "no ");
	return 0;
}

int
lugar (int num, int pos)
{
	return (num / (int) pow(10, pos - 1)) % 10;
}


// c) Modificar el programa del punto b) de forma tal que siga leyendo números hasta que se ingrese un número de exactamente 5 dígito
//

int check_digitos(int number)
{
	return ((number / 10000) && ((number / 100000) == 0));
}
