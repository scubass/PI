#include <stdio.h>
#include <assert.h>

#define MAXIMO2(num1, num2, num3) (num3 = (num1) > (num2) ? (num1) : (num2));

#define MAXIMO3(num1, num2, num3) {int auxiliar;MAXIMO2(num1, num2, auxiliar); MAXIMO2(auxiliar, num3, auxiliar); return auxiliar;}
#define MAX3(num1, num2, num3) {MAXIMO2(num1, num2, num1); MAXIMO2(num1, num3, num3);}

int
main(void)
{
	int x = 10, y = 5, z = 2;
	// MAXIMO3(x, y, z);
	MAX3(x, y, z);
	assert(z == 10);
	puts("Todo Ok ");
	return 0;
	
}

// Escribir la macro MAXIMO3 para determinar el mayor de 3 valores, usando la macro definida en el
// ejercicio anterior. (En no más de 10 líneas). Verificar su funcionamiento invocándola desde un programa.
