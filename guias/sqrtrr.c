#include <math.h>
#include <stdio.h>
#include "getnum2.c"

int
main(void)
{
	double value = getint("hola");
	double result = sqrt(value);

	printf("result = %f\n", result);
}
