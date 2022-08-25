#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../getnum2.c"

#define EPSILON 0.00001

double f1(double);
double f2(double);
double f3(double);
double f4(double);



int
raices(double, double);

int
main (void)
{
	printf ("%g\n", f1(2));
	printf("f1(4) = %g\n", f1(4));
	raices(-0.1, 0.1);
	return 0;

}


double
f1 (double arg1)
{
	return 2 * arg1;
}
double
f2 (double arg1)
{
	return sin(arg1);
}
double
f3 (double arg1)
{
	return pow(2, arg1) * pow(arg1, 3);
}
double
f4 (double arg1)
{
	return sin(arg1) * log(arg1);
}


int
raices(double lower, double upper)
{
	double i = lower;
	double func;
	for (i = lower; i <= upper; i = i + 0.001)
	{
		func = f1(i);
		if (fabs(func) <= EPSILON) {
			printf ("%.2f es raíz del a función\n", i);
		}
	}

	for (i = lower; i <= upper; i = i + 0.001)
	{
		func = f2(i);
		if (fabs(func) <= EPSILON) {
			printf ("%.2f es raíz del a función\n", i);
		}
	}
	for (i = lower; i <= upper; i = i + 0.001)
	{
		func = f3(i);
		if (fabs(func) <= EPSILON) {
			printf ("%.2f es raíz del a función\n", i);
		}
	}
	for (i = lower; i <= upper; i = i + 0.001)
	{
		func = f4(i);
		if (fabs(func) <= EPSILON) {
			printf ("%.2f es raíz del a función\n", i);
		}
	}
	return 0;
}



// Escribir un programa (en no más de 15 líneas) para encontrar raíces de funciones en un intervalo
// dado. Se deberá recorrer el intervalo a incrementos de 0.001, evaluando la función en cada paso y
// escribiendo por salida estándar los puntos que son raíces. Los extremos del intervalo serán de tipo real y su
// valor estará dado por constantes del programa.
// Tener en cuenta no sólo el caso en el que el resultado de evaluar la función sea cero, sino también
// aquellos puntos en los cuales la función cambia de signo.
// Ejecutar el programa para las siguientes funciones: Seno(x), Coseno(x), 2 ^ x * x ^ 3, seno(x) + log(x), x ^ 1/2 + e ^ x;
