#include <stdio.h>
#include <assert.h>

#define SWAP(x, y) x ^= y ^= x ^= y; 
int mcd(int, int);

int
main(void)
{
	printf("mcd entre %d y %d == %d\n", 9, 2, mcd(9, 2));
	printf("mcd entre %d y %d == %d\n", 171, 31, mcd(171, 31));
	printf("mcd entre %d y %d == %d\n", 18, 6, mcd(18, 6));
	return 0;
}

int
mcd(int num1, int num2)
{
	if (num2 > num1){
		SWAP(num1, num2);
	} 

	if (num2 == 0) {
		return num1;
	} else {
		mcd(num2, num1 % num2);
	}
}






// La siguiente función intenta ser una instrumentación del algoritmo de Euclides para calcular el MCD
// de dos números, pero no siempre da el resultado correcto. Indicar errores y corregirlos para que funcione
// correctamente.
// uso recurrencia pues (x : y) == (y : resto de dividir a x por y) == ... == (numero : 0) => numbero
