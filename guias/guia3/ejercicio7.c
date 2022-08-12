#include <stdio.h>
#include "../getnum2.c"


int
main(void)
{
	int i, j, n = 0, suma = 0;

	while ( n <= 0) 
		n = getint("Ingrese cantidad de elementos:\n");	

	for (i = 1; i <= n; i++)
	{
		j = getint("Ingrese valor %d: ", i);
		suma += j;
	}

	printf("El resultado es: %.2f\n", suma / (float) j);
	return 0;
}

// pide cantidad de elementos y luego pide cada valor de los elementos al usuario y los suma a la variable suma
// finalmente printf con el promedio
