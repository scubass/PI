// Ejercicio 3:
// Se dice que una matriz de números enteros es "escalable" si para cada fila (excepto la primera) la suma de sus
// elementos es igual a 1 + la suma de los elementos de la fila anterior, y para cada columna (excepto la primera)
// se cumple que la suma de sus elementos es igual a la suma de la columna anterior + 1.
// Escribir una función que reciba una matriz de enteros y retorne 1 si es escalable y 0 sinó. Agregar los
// parámetros que sean necesarios.

#include <stdio.h>
#include <stdlib.h>
#define COLS 5


int
es_escalable(const int matriz[][COLS], int dim)
{
	int condicion = 1, suma = 0;
	for (int i = 1; i < dim; i++) {
		for (int j = 1; j < COLS; j++) {
			suma_filas = suma_filas(matriz, i - 1);
			suma_cols = sumar_columna(matriz, j - 1; dim);
			if (suma_filas )
		}
	}
}

int
sumar_filas(const int matriz[][COLS], int fila)
{
	int suma = 0;
	for (int j = 0; j < fila; j++) {
		suma += matriz[fila][j];
	}
	return suma + 1;
}

int
sumar_columna(const int matriz[][COLS], int columna, int dim) {
	int suma = 0;
	for (int i = 0; i < dim; i++) {
		suma += matriz[i][columna];
	}
	return suma + 1;
}
