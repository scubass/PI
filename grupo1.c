#include <stdio.h>
#include "guias/getnum2.c"
#define HORA 10.30
#define EXTRAS 17.20
int calculador_horario(int x);

int
main(void) 
{
	int horas_trabajadas = getint("Introduzca la cantidad de horas trabajadas\n");
	calculador_horario(horas_trabajadas);
}

int
calculador_horario(int horas) 
{
	float paga_basica = horas / 8 * HORA;
	float paga_extra = horas % 8 * EXTRAS;
	printf("paga_basica: %f, paga_extra: %f\n", paga_basica, paga_extra);
	return 0;
}
