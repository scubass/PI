#include <stdio.h>
#define DIVISOR(num1, num2) ((num1) != 0) && ((num2) % (num2) == 0)

int
main(void)
{
	int num1 = 2, num2 = 8;
	printf("%d\n", DIVISOR(num1, num2));
	printf("%d\n", DIVISOR(0, 5));
	return 0;
}

// la macro DIVISOR, toma dos números y primero chequea si el primer argumento es 0, si lo es la expresion se vuelve falsa por el && y la macro devuelve 0(falso),
// si el primer argumento no es cero entonces ve si el segundo argumento es múltiplo del primero, si lo es devuelve 1(verdadero) sino 0(falso)
