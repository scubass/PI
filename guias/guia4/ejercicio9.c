#include <stdio.h>
#define ENT_HORA 9
#define ENT_MINUTOS 10

int llegaTemprano(const int n, const int m);

int
main(void)
{
	printf("%s llegó a horario\n", llegaTemprano(10, 23) ? "" : "No");	
	printf("%s llegó a horario\n", llegaTemprano(12, 43) ? "" : "No");	
	printf("%s llegó a horario\n", llegaTemprano(8, 10) ? "" : "No");	
	printf("%s llegó a horario\n", llegaTemprano(01, 23) ? "" : "que");	// este me causa dudas
	printf("%s llegó a horario\n", llegaTemprano(9, 9) ? "" : "No");	
}

int
llegaTemprano ( const int hora, const int minutos)
{
	return ((hora <= ENT_HORA && minutos <= ENT_MINUTOS) || (hora == ENT_HORA && minutos >= ENT_MINUTOS));
}

// hay 2 casos, hora mayor a ENT_HORA, o hora igual a ENT_HORA y minutos mayor a ENT_MINUTOS
// la condición de la función está mal por q no tiene en cuenta el caso donde la hora > ENT_HORA y los minutos son menores a ENT_MINUTOS 
