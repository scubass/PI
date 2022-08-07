#include <stdio.h>

#include "../getnum.h"

int 
main(void)
{
	float velocidad = getfloat("Ingrese la variable velocidad en m/s\n");
	printf("velocidad en km/h: %.2f\n", velocidad * 3.6);
}
