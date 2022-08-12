#include <stdio.h>
#include "../getnum2.c"
// criterio a utilizar: lo costoso que es hacer factoriales de números
unsigned long factorial(int numero);


int
main(void)
{
	long double e = 1;
	int i;
	for (i = 1; i < 50; i++) {
		e += (1.0 / factorial(i));
	}

	printf("e: %LF\n", e);
	return 0;
}


unsigned long
factorial(int m) {
	if (m <= 0) {
		return 1;
	}
	unsigned long i = m * factorial(m - 1);
	printf("%lu\n", i);
	
	return i;
}
