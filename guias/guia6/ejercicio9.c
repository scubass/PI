/* Ejercicio 9 **
Se desea calcular la desviación estándar de un arreglo de números enteros. Los números del arreglo toman
valores entre 0 y 15 inclusive, por lo que para almacenar cada número se utilizarán solo 4 bits, pudiendo almacenar dos
números en un solo byte.
Para representar dicho arreglo se utilizará un vector de caracteres, donde cada elemento del vector contendrá dos
números (uno en los cuatro bits superiores y el otro en los cuatro bits inferiores). Escribir una función que reciba un
arreglo como el mencionado anteriormente y la cantidad de números que contiene y retorne en su nombre la desviación
estándar de los números recibidos. */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
double desv(const unsigned char vector[], int cantnum );
int first_4(int number);
int last_4(int number);


// Supongo que tienen que ser strings para poder tomar el número en hexa entero
// tomo número en hexa y lo paso a decimal, se lo asigno en una posición a un array, luego tomo primeros 4 bits y lo otros 4 y los meto en el array final
int
main(void)
{
 	unsigned char arreglo2[] = { 0x33, 0x33, 0x33, 0x33, 0x33 };
	double number = desv(arreglo2, 5);
	for(int i=0; i <= 10; i++)
		assert(desv(arreglo2, i)==0);
//
	unsigned char arreglo[] = { 0x37, 0xF2, 0x03, 0x4A, 0xFF };
	printf("aca señor %g\n", desv(arreglo, 1));
	printf("aca señor %g\n", desv(arreglo, 5));
	// assert(desv(arreglo, 1)==0);
	// assert(desv(arreglo, 2)==2.0);
 //
	// assert(desv(arreglo, 3) > 4.98 && desv(arreglo, 3) < 4.99);
 //
	// assert(desv(arreglo, 10) > 5.6071 && desv(arreglo, 3) < 5.6072);

	puts("OK!");
}


double
desv(const unsigned char vector[], int cantnum)
{
	double suma = 0;
	
	for (int i = 0; i < cantnum; i++) {
		// printf("first4 = %d, last4 = %d\n", first_4(vector[i]), last_4(vector[i]));
		suma += abs(first_4(vector[i]) - last_4(vector[i]));
		// printf("suma: %g\n", suma);
	}
	return suma / (cantnum * 2);
}



int
last_4(int number)
{
	// vamos a aplicar una mascara de bits, en este caso como quiero los últimos 4 voy a usar 00001111, 15 en decimal 
	return number & 15;
}

int
first_4(int number)
{
	// lo mismo que el last_4 pero con 11110000, en decimal 240 
	return (number & 240) >> 4;
}











