#include <stdio.h>
#include "../getnum2.c"
#define SALARIO_BASICO 300
int
main(void)
{
	int num = getint("Introduzca la suma vendida en una semana\n");	
	(num < 0) ? num = getint("Introduzca un valor valido"): printf("El valor ingrsado es válido\n");
	float porcentaje_bruto;
	if (num > 1000 && num <= 2000) {
		porcentaje_bruto = 0.05;
	} else if (num <= 4000) {
		porcentaje_bruto = 0.07;
	} else {
		porcentaje_bruto = 0.09;
	}
	printf("%.2f es la paga semanal correspondiente\n", SALARIO_BASICO + num * porcentaje_bruto);
	return 0;
}


// Una empresa paga a su personal de venta en base a comisiones. El personal de
// ventas recibe $300 por semana más un porcentaje de las ventas brutas de esa semana.
// El porcentaje a aplicar depende del total vendido: si la venta no supera los $1000, no
// hay porcentaje, hasta $2000 es un 5%, hasta $4000 es un 7%, y más de $4000 es un 9%.
// Por ejemplo, un vendedor que vende $5000 en una semana, recibe $300 más 9%
// de $5000, o sea un total de $750.
// Hacer un programa en C que lea una única variable que indique la suma vendida
// en una semana, e imprima por salida estándar el monto total a cobrar. Si la suma
// vendida es un valor incorrecto pedir un nuevo valor. (En no más de 15 líneas).
