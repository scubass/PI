#include "../../getnum2.c"
#include <stdio.h>
#include "biblioteca_ej15.h"
#include "otra_bibioteca.h"

int
main(void)
{
	int x,y,z;

	x = getint("Ingrese un numero: ");
	y = getint("\nIngrese otro numero: ");
	z = getint("\nIngrese ultimo numero: ");

	printf("\nEl mayor es %d\n", mayor3(x,y,z));
	printf("El promedio es %.2g\n", promedio3(x,y,z));

	return 0;
}

// error definir dos veces la función auxiliar  basta cambiarle el nombre a una de las funciones auxiliares, ahora se podrían definir en un mimso archivo también
// todos errores de compilación
