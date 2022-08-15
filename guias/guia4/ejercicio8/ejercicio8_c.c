#include <stdio.h>

int
main(void)
{
	return 0;
}

int
suma (int n) {
	if (n <= 0) {
		return 0;
	} else {
		return n + 1;
	}
}
// errores: punto y coma en la declaración de la función luego si n > 0 no hace nada más que ejecutar n + 1, no return nada, básicmanete su n > 0 no hace nada
