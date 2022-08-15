#include <stdio.h>
#include <math.h>
#include "../../getnum.h"


int lugar (int num, int pos);
int check_digitos(int);

int
main (void)
{
	int boleto, esCapicua = 1;
	int j;

	boleto = getint("Ingrese un número de 5 dígitos: ");
	
	if (check_digitos(boleto)) {

		for (j = 1; j <= 2; j++) {
			if (lugar(boleto, j) != lugar(boleto, 5 - j + 1)) {
				esCapicua = 0;
				break;
			}
		}

	printf("El boleto %ses capicúa\n", (esCapicua) ? "" : "no ");
	} 
	else {
		printf("El número ingresado no es de cinco dígitos\n");
	}
	return 0;
}

int
lugar (int num, int pos)
{
	return (num / (int) pow(10, pos - 1)) % 10;
}

// item a) Agregar una decisión de forma tal que si ingresan un número que no tenga exactamente 5 dígitos, el programa finalice sin hacer nada.
// vamos a hacerlo solamente para números de 5 dígitos con el primer dígito != 0;

int check_digitos(int number)
{
return ((number / 10000) && ((number / 100000) == 0));
}
