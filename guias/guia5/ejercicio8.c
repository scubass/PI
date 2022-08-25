#include <stdio.h>
#include <math.h>
int redondear(float, int);

int
main(void)
{
	printf("%d\n", redondear(3428.8352, 3));	
	return 0;
}

int
redondear(float num, int cifra)
{
	return floor((num * pow(10, cifra)) + .5) / pow(10, cifra);	
}

