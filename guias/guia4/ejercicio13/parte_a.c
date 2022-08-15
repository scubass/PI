#include <stdio.h>
#include "../../getnum2.c"
float f1(float x);
float f2(float x);


int
main (void)
{
	float x, y, z;
	x= getfloat("Ingrese un número real :");
	putchar('\n');

	y = f1(x);
	z = f2(x);

	printf("El doble de %g es %g\n",x, y);
	printf("El triple de %g es %g\n",x , z);
	return 0;
}

float
f1 ( float x)
{
	return 2 * x;
}

// error: no inluir prototipos de las funciónes, por lo cual el compilador asume que toma un int como variable y devuelve un int, al encontrarse con la función indica que hay un conflicto con los tipos y admeás falta incluir la librería getnum
