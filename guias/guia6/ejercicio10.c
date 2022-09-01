// Los laboratorios de Propulsión por Reacción tienen la representación del cielo y sus estrellas, digitalizada en una
// matriz bidimensional de hasta 80 columnas por 20 filas. Cada elemento de la misma representa la cantidad de luz que hay
// en una zona del cielo con un rango de intensidad entre 0 y 20. En el lugar de coordenadas (i,j) del cielo se considera que
// hay una estrella si el elemento Aij correspondiente cumple con la siguiente relación:
// ( A[i,j] + suma de las ocho intensidades circundantes ) / 9 > 10
// Escribir una función (en no más de 15 líneas) que reciba tres parámetros de entrada representando a una matriz de
// dichas características y sus dimensiones. Dicha función debe localizar gráficamente las estrellas en la pantalla
// representando las mismas con el carácter ‘*’. La función debe ignorar las aristas de la matriz.
// Para completar la matriz no hace falta interactuar con el usuario, se puede utilizar números aleatorios.
// Para una correcta separación de front y back, necesitás hacer una función que genere la matriz (back-end) y otra que
// grafique el "cielo" en salida estándar (front-end).


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINE 10
#define COLUMN 30
void graficar(int sky[LINE][COLUMN]);
int normalize_line(int number);
// int normalize_column(int number);
int random_range(int bottom, int top);
void fill_matrix(int matrix[LINE][COLUMN]);
int check_star(int matrix[LINE][COLUMN], int line, int column);
void fill_sky(int sky[LINE][COLUMN], int matrix[LINE][COLUMN]);

int
main(void)
{	
	// srand((int)time(NULL));
	int matrix[LINE][COLUMN] = {
		{10, 17, 6, 15, 6, 7, 8, 9, 11, 12, 13, 15, 8, 10, 11, 13, 14, 15, 18, 20, 11, 8, 2, 3, 12, 13, 11, 3, 9, 20},
		{18, 17, 6, 5, 6, 7, 8, 9, 11, 12, 13, 5, 8, 10, 1, 13, 14, 15, 18, 20, 11, 8, 2, 3, 12, 13, 11, 3, 9, 20},
		{10, 15, 16, 15, 6, 17, 8, 19, 11, 12, 13, 1, 8, 10, 11, 1, 14, 15, 18, 20, 11, 8, 2, 3, 12, 23, 11, 3, 9, 20},
		{12, 2, 6, 5, 16, 7, 8, 9, 1, 12, 13, 15, 8, 10, 1, 13, 14, 15, 18, 20, 11, 8, 2, 3, 12, 23, 11, 3, 9, 20},
		{8, 5, 4, 15, 6, 7, 8, 9, 12, 12, 13, 5, 8, 10, 11, 13, 14, 15, 18, 20, 11, 8, 12, 3, 12, 23, 11, 3, 9, 20},
		{20, 19, 18, 15, 16, 7, 8, 9, 11, 12, 13, 15, 18, 10, 11, 13, 14, 15, 18, 20, 11, 8, 12, 3, 12, 23, 11, 3, 9, 20},
		{10, 9, 9, 15, 16, 7, 8, 9, 12, 12, 13, 11, 8, 10, 1, 13, 14, 15, 18, 20, 11, 8, 2, 13, 12, 23, 11, 3, 9, 20},
		{10, 12, 9, 6, 16, 7, 8, 9, 15, 12, 13, 15, 18, 10, 11, 13, 14, 15, 18, 20, 11, 8, 2, 3, 12, 23, 11, 3, 9, 20},
		{10, 7, 9, 15, 6, 7, 8, 9, 11, 12, 13, 15, 8, 10, 1, 10, 14, 15, 18, 20, 11, 8, 2, 3, 12, 23, 11, 3, 9, 20},
		{10, 17, 16, 15, 6, 7, 8, 9, 11, 12, 13, 15, 8, 10, 11, 3, 14, 15, 18, 20, 11, 8, 2, 3, 12, 23, 11, 3, 9, 20},
	};
	// fill_matrix(matrix);
	int sky[LINE][COLUMN];
	fill_sky(sky, matrix);
	graficar(sky);
	return 0;
}


int
normalize_line(int number) 
{
	if (number == 0) {
		return 0;
	} else if (number == COLUMN || number == LINE) {
		return number - 2;
	}
	return number - 1;
}


void
fill_matrix(int matrix[LINE][COLUMN]) {
	for (int j = 0; j < LINE; j++) {
		for (int i = 0; i < COLUMN; i++) {
			matrix[j][i] = random_range(0, 20);
		}
	}
}

int
random_range(int bottom, int top)
{
	return (rand() % (top - bottom + 1)) + bottom;  
}

int
check_star(int matrix[LINE][COLUMN], int line, int column) {
	int sum = 0;
	int _line = normalize_line(line);
	int _column = normalize_line(column);
	for (int i = _line; i < (_line + 3); i++) {
		for (int j = _column; j < (column + 3); j++) {
			sum += matrix[i][j];
		}
	}

	int condition = (sum / 9) > 10;
	if (condition) {
		return 1;
	} else {
		return 0;
	}

} 

void
fill_sky(int sky[LINE][COLUMN], int matrix[LINE][COLUMN]) {
	for (int i = 0; i < LINE; i++) {
		for (int j = 0; j < COLUMN; j++) {
			if (check_star(matrix, i, j)) {
				sky[i][j] = '*';
			}
			else {
				sky[i][j] = ' ';
			}
		}
	}
}


void
graficar(int sky[LINE][COLUMN]) {
	for (int i = 0; i < LINE; i++) {
		for (int j = 0; j < COLUMN; j++) {
			printf("%c ", sky[i][j]);
		}
		printf("\n");
	}
}
