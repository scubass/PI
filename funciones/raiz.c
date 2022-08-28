#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int
main (void) 
{
	int num1 = 25;
	int raiz = sqrt(num1);
	printf("%d\n", raiz);
	if (num1 == (raiz * raiz)) {return true;}
	printf("%g\n", sqrt(num1));
	return false;
}
