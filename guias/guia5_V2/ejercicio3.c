#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../getnum.h"
int length(int);
int lugar(int num, int pos);

int
main (void)
{
	int boleto, esCapicua = 1;
	int j;

	boleto = getint("Ingrese el número del boleto: ");
	int len_boleto = length(boleto);
	int mitad_len = len_boleto / 2; 

	for(j = 1; j <=  mitad_len && esCapicua != 0; j++) {
		if (lugar(boleto, j) != lugar(boleto, len_boleto - j + 1)) {
			esCapicua = 0;
		}
	}
	printf("El boleto %ses capicua\n", esCapicua ? "" : "no ");
}

int lugar(int num, int pos)
{
	return (num / (int) pow(10, pos - 1)) % 10;
}

int length (int number) {
	int len = 0;
	while (number != 0) {
		len++;
		number /= 10;
	}
	return len;
}
