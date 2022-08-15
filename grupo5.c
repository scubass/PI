#include <stdio.h>
#include "guias/getnum2.c"
#include <math.h>

int 
main(void)
{
	int num = getint("Introduzca un número\n");	
	if (num % 2 == 0) {
		printf("Es múltipo de 2 => no es primo\n");
		return 0;
	}

	int i;
	int raiz = sqrt((double) num);
	for (i = 3; i <= raiz ;i += 2) {
		if (num % i == 0) {
			printf("el número: %d es compuesto\n", num);
			return 0;
		}
	}
	printf("el número: %d es primo\n", num);
	return 0;
}


// falta asegurarse de q num > 0
// también se podría optimizar si sacamos los pares 
// para copilar agregar flag -lm que indica el uso de math.h
