#include <stdio.h>
#define SWAP(num1, num2) num1 ^= num2 ^= num1
int mcd(int, int);
int simplificar (int, int);
int suma_fracciones(int, int, int, int);

int
main(void)
{
	suma_fracciones(10, 5, 1, 2);
	suma_fracciones(10, 5, 1, 1);
	suma_fracciones(2, 1, 5, 7);
	return 0;


}



int 
mcd(int num1, int num2)
{
	if (num2 > num1) {
		SWAP(num1, num2);
	}

	if (num2 == 0) {
		return num1;
	}
	else
	{
		return mcd(num2, num1 % num2);
	}

}

int
simplificar ( int numerador, int denominador)
{
	int max_div_comun = mcd(numerador, denominador);
	if (max_div_comun != 1) {
		numerador = numerador / max_div_comun;
		denominador = denominador / max_div_comun;
	}
	
	printf("finalmente queda %d / %d\n", numerador, denominador);
	return 0;
}

int
suma_fracciones (int num1, int den1, int num2, int den2)
{
	simplificar(num1, den1);
	simplificar(num2, den2);
	int mcd1 = mcd(num1, den1);
	int mcd2 = mcd(num2, den2);
	num1 /= mcd1;
	den1 /= mcd1;
	num2 /= mcd2;
	den2 /= mcd2;

	if (den1 == den2) {
		printf ("La suma es %d / %d\n", num1 + num2, den1);
	}
	else
	{
		num1 *= den2;
		num2 *= den1;
		den1 *= den2;
		printf("La suma es igual a: %d / %d\n", num1 + num2, den1);
	}
	return 0;
}

// Escribir un programa que ofrezca un menú con las siguientes opciones:
// ▪ Simplificar una fracción
// ▪ Sumar dos fracciones
// ▪ Terminar la ejecución
// Si se elige la primera opción se le solicitará numerador y denominador de la fracción y se
// imprimirá la fracción simplificada (algunos de ellos podrían ser negativos). Si se opta por la segunda, se le
// solicitará dos fracciones y se imprimirá la suma de las mismas, también simplificada. Obviamente con la
// tercera opción finaliza la ejecución del mismo. Escribir una función para cada item del menú. (No más de 20
// líneas para main y no más de 10 líneas para las funciones del menú).
// Pista: Escribir y usar la función DivisorComunMaximo.