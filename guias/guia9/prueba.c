#include <stdlib.h>
#include <stdio.h>
#define DIM 10
typedef struct {
	int a, b;
} Cooredenada;

typedef Cooredenada * PCoord;

typedef struct
{
	char nombre[DIM];
	Cooredenada punto1;
	PCoord punto2;
} TipoX;

int
main(void)
{
	TipoX var;
	// var.nombre = "hola";
	var.punto1.a = 1;
	var.punto1.b = 1;
	var->punto2.a = 3;
	var->punto2.b = 34;
	return 0;
}
