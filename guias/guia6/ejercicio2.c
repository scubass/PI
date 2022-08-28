// Ejercicio 2 *
// Reescribir el ejercicio 10 de la práctica 5 de forma tal que quede separado correctamente el front-end del
// back-end.
// Para la opción de simplificar una fracción, la obtención del numerador y denominador pertenece al front-end. Luego se
// invoca a una función de back-end que recibe esos parámetros y los modifica. ¿Cómo se puede hacer para que la función de back-end reciba ambos y los pueda modificar?
// para que los pueda modificar tiene que ser un array?
// /Ejercicio 10
// Escribir un programa que ofrezca un menú con las siguientes opciones:
// ▪ Simplificar una fracción
// ▪ Sumar dos fracciones
// ▪ Terminar la ejecución
// Si se elige la primera opción se le solicitará numerador y denominador de la fracción y se
// imprimirá la fracción simplificada (algunos de ellos podrían ser negativos). Si se opta por la segunda, se le
// solicitará dos fracciones y se imprimirá la suma de las mismas, también simplificada. Obviamente con la
// tercera opción finaliza la ejecución del mismo. Escribir una función para cada item del menú. (No más de 20
// líneas para main y no más de 10 líneas para las funciones del menú).
// Pista: Escribir y usar la función DivisorComunMaximo./ de back-end reciba ambos y los pueda modificar?

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SWAP(num1, num2, type) {type aux; aux = num1 ; num1 = num2; num2 = aux;}
int mcd(int, int);
int simplificar (int, int);
int suma_fracciones(int, int, int, int);


int 
mcd(int num1, int num2)
{
	if (num2 > num1) {
		SWAP(num1, num2, int)
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
