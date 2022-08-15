#include <stdio.h>
int factorial(int);

int
main(void)
{
	printf("el factorial de 2 es: %d, de 3 es %d, de 4 es %d, de 5 es %d\n", factorial(2), factorial(3), factorial(4), factorial(5));	
}

int
factorial(int n)
{
	if ( n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
	return 0;
}

// como toda función recursiva es una condición base que funciona como fin y sino la función se llama a si misma
