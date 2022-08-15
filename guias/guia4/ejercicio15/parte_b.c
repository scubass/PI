/* Biblioteca para obtener el promedio de 3 enteros */

#include "biblioteca_ej15.h"

int 
fAuxiliar_2 (int n, int m, int p)
{
	return n + m + p;
}

float
promedio3 (int n, int m, int p)
{
	return fAuxiliar_2(n,m,p) / 3.0;
}
