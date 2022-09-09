#include <stdio.h>
#include <stdlib.h>
#define DIM 5
int es_ascendente(int matriz[DIM][DIM], int dim, int vec[DIM]);

int
main(void)
{
	int matriz[DIM][DIM] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};
	int v[DIM * DIM];
	int n = es_ascendente(matriz, 5, v);
	if (n == 0) {
		printf("La matriz no está ordenada\n");
	}
	else {
		for (int i = 0; i < DIM * DIM; i++) {
			printf("%d,  ", v[i]);
		}
		printf(" \n");
	}
}


int
es_ascendente(int matriz[DIM][DIM], int dim, int vec[DIM])
{
	int index = 0;
	int es_ascendente = 1;

	for (int i = 1; i < DIM && es_ascendente != 0; i++) {
		for (int j = 1; j < DIM && es_ascendente != 0; j++) {
			if (matriz[i][j] < matriz[i][j - 1] || matriz[i][j] < matriz[i - 1][j]) {
				es_ascendente = 0;
			}
			if (i == DIM - 1) {
				v[index] = matriz[]
			}
			vec[index] = matriz[i - 1][j - 1];
			index++;
		}
	}
	return es_ascendente;
}


