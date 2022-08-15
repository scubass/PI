#include <stdio.h>

int
main(void)
{
	return 0;
}

void
f2 (float a) {
	float a;
	printf("%f\n", a * a);
}

// error redeclara a, lo que cambia el valor de la variable y termina haciendo un print de cualquier cosa
