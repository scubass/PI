#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// pone todos los bytes en cero
// otra forma, más eficiente sería casterar el puntero a int y el i += 4 asi hacemos menos asignaciones y es más rápido
void
asignaCeros(void * dir, int cant)
{
	for (int i = 0; i < cant; i++) {
		*((char *) dir + 1) = 0;
	}
	return;
}


int
main(void)
{
	// int d, m, y;
	// char license[7];
	// printf recibe la dirección del primer elemento del string guardado en s, por lo tanto es equivalente a printf("%s", s); por q recibe lo mismo 
	// ahora si yo le paso %d por ejemplo, cuando hago el print, va a buscar al stack un entero y va a tomar de la zona de parametro
	// lo que nos puede dejar expuestos a una inyección de código

	// scanf("%3[A-Z]%6[0-9]", license, license + 3);
	//
	// printf("license: %s\n", license);
	// printf("len licensce: %lu\n", strlen(license));
	//
	// scanf("%d/%d/%d", &d, &m, &y);
	//
	// printf("dia ingresado: %d, mes: %d, año: %d\n", d, m, y);

	char * patente = "AE000AA";

	// patente vieja
	int n;
	char v[5];
	char a[5];
	char m[5];
	n = sscanf(patente, "%3[A-Z]%3[0-9]", a, m);

	if (n == 2) {
		printf ("Patente vieja\n");
		return 0;
	}

	n = sscanf(patente, "%2[A-Z]%3[0-9]%2[A-Z]", v, m, a);

	if (n == 3) {
		printf ("Patente nueva\n");
	}


	return 0;
}


