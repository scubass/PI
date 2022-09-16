#include <stdio.h>
#include <stdlib.h>
#define FILAS 9
#define COLS 9
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))


int
recorrer(const int v[FILAS][COLS], int fila, int columna)
{
	int suma = 0;
	for (int i = MAX(0, fila - 1) ; i <= MIN(FILAS - 1, fila + 1) ; i++) {
		for(int j = MAX(0, columna - 1) ; j <= MIN(COLS - 1, columna + 1) ; j++) {
			suma += v[i][j];
		}
	}
	return suma;
}


int
main(void)
{
	const int v[9][9] = {{0}};

	for(int i = 0; i < 9; i++) {
		for(int j = 0; j < 9; j++) {
			recorrer(v, i, j);
		}
	}
	return 0;
}
